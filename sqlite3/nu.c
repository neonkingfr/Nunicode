#include <assert.h>
#include <stdio.h>
#include <sqlite3ext.h>

#include <libnu/libnu.h>

#include "version.h"

#define FAST_BUFFER_SIZE 1024

#ifdef _WIN32
# define NU_SQLITE3_EXPORT __declspec(dllexport)
#else
# define NU_SQLITE3_EXPORT
#endif

SQLITE_EXTENSION_INIT1

/** This LIKE implementation is intended to do proper collation as
 * opposed to doing strcmp() on strings by comparing each charater.
 *
 * _nunicode_like exploits the fact that the same approach is
 * implemented in nu_strcasestr() therefore LIKE is a serie of 
 * nu_strcasestr() performed on haystack and needles extracted from
 * "%needle%", "needle_needle%needle" and so
 *
 * Generally nunicode support different encodings for lhs and rhs,
 * but in this implementation lhs_read is always equal to rhs_read
 *
 * @param lhs left-hand-side of lhs LIKE rhs expression
 * @param rhs right-hand-size of LIKE expression
 * @param escape escape character
 * @param lhs_read lhs read (decode) function
 * @param rhs_read rhs read (decode) function
 * @return 0 or 1
 */
static int _nunicode_like(const char *lhs, const char *rhs, uint32_t escape,
	nu_read_iterator_t lhs_read, nu_read_iterator_t rhs_read) {

	const char *p1 = lhs;
	size_t haystack_len = nu_strbytelen(lhs, lhs_read);

	const char *needle = 0;
	size_t needle_len = 0;

	char skip_many = 0;
	char prev_escape = 0;

	uint32_t u = (uint32_t)(-1);
	while (u != 0) {
		const char *p2 = rhs_read(rhs, &u);

		if ((u == 0 || u == '%' || u == '_') && needle_len > 0) {
			ssize_t len = (needle_len - prev_escape);

			const char *found = nu_strcasenstr(p1, haystack_len,
				needle, len,
				lhs_read, rhs_read);

			if (found == 0) {
				return 0;
			}

			/* found string should be at the very beginning
			 * of lhs, or % should be set prior this */
			if (found != p1 && skip_many == 0) {
				return 0;
			}

			p1 = found + len;

			needle = 0;
			needle_len = 0;
			skip_many = (prev_escape == 0 && u == '%');
		}

		if (prev_escape == 0 && u == '%') {
			skip_many = 1;
			goto pass;
		}

		if (prev_escape == 0 && u == '_') {
			if (p1 >= lhs + haystack_len) { /* don't go over lhs length */
				return 0;
			}

			p1 = lhs_read(p1, 0); /* otherwise skip skip one character */
			goto pass;
		}
		
		prev_escape = (u == escape ? (p2 - rhs) : 0);

		/* end of needle should match end of haystack
		 * if last symbols is not % */
		if (u == 0) {
			return (skip_many != 0 || p1 == lhs + haystack_len);
		}

		if (needle == 0) {
			needle = rhs;
		}
		
		if (needle != 0) {
			needle_len += (p2 - rhs);
		}

pass:
		rhs = p2;
	}

	return 0;
}

static void _nunicode_sqlite3_like(sqlite3_context *context,
	int argc, sqlite3_value **argv, nu_read_iterator_t it) {

	if (sqlite3_value_type(argv[0]) != SQLITE_TEXT
	|| sqlite3_value_type(argv[1]) != SQLITE_TEXT) {
		sqlite3_result_int(context, 0);
		return;
	}

	const char *lhs = (const char *)sqlite3_value_text(argv[1]);
	const char *rhs = (const char *)sqlite3_value_text(argv[0]);
	uint32_t escape = 0;
	
	if (argc == 3) {
		if (sqlite3_value_type(argv[2]) != SQLITE_TEXT) {
			sqlite3_result_int(context, 0);
			return;
		}

		const char *escape_str = (const char *)sqlite3_value_text(argv[2]);
		ssize_t escape_str_len = nu_strlen(escape_str, it);
		if (escape_str_len != 1) {
			sqlite3_result_int(context, 0);
			return;
		}

		it(escape_str, &escape);
	}

	int ret = 0;
	if (lhs != 0 && rhs != 0) {
		ret = _nunicode_like(lhs, rhs, escape, it, it);
	}
	
	sqlite3_result_int(context, ret);
}

static void nunicode_sqlite3_like_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf8_read);
}

static void nunicode_sqlite3_like_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf16le_read);
}

static void nunicode_sqlite3_like_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf16be_read);
}

static void nunicode_sqlite3_like_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf16he_read);
}

static int _nunicode_collate(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len, nu_read_iterator_t it) {
	return nu_strncoll(s1, s1_max_len, s2, s2_max_len, it, it);
}

static int nunicode_sqlite3_collate_utf8(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf8_read);
}

static int nunicode_sqlite3_collate_utf16le(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf16le_read);
}

static int nunicode_sqlite3_collate_utf16be(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf16be_read);
}

static int nunicode_sqlite3_collate_utf16he(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf16he_read);
}

static int _nunicode_collate_nocase(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len, nu_read_iterator_t it) {
	return nu_strcasencoll(s1, s1_max_len, s2, s2_max_len, it, it);
}

static int nunicode_sqlite3_collate_nocase_utf8(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf8_read);
}

static int nunicode_sqlite3_collate_nocase_utf16le(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf16le_read);
}

static int nunicode_sqlite3_collate_nocase_utf16be(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf16be_read);
}

static int nunicode_sqlite3_collate_nocase_utf16he(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf16he_read);
}

static char* _nunicode_casing(const char *encoded, nu_casemapping_t casemap,
	nu_read_iterator_t read, nu_write_iterator_t write) {

	uint32_t fast_buffer[FAST_BUFFER_SIZE];
	uint32_t *unicode_buffer = fast_buffer;

	ssize_t unicode_len = nu_strlen(encoded, read);
	if (unicode_len >= FAST_BUFFER_SIZE) {
		unicode_buffer = sqlite3_malloc(sizeof(*unicode_buffer) * (unicode_len + 1));
	}

	uint32_t u;
	unsigned i = 0;
	do {
		encoded = read(encoded, &u);
		unicode_buffer[i] = casemap(u);

		if (u == 0) {
			break;
		}
	} while (++i);

	ssize_t reencoded_len = nu_bytelen(unicode_buffer, write);
	char *reencoded = sqlite3_malloc(reencoded_len + 1);
	
	nu_writestr(unicode_buffer, reencoded, write);

	if (unicode_buffer != fast_buffer) {
		sqlite3_free(unicode_buffer);
	}

	return reencoded;
}

static void nunicode_sqlite3_casing_utf8(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casing(lower, casemap, nu_utf8_read, nu_utf8_write);

	sqlite3_result_text(context, upper, -1, sqlite3_free);
}

static void nunicode_sqlite3_casing_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casing(lower, casemap, nu_utf16le_read, nu_utf16le_write);

	sqlite3_result_text16le(context, upper, -1, sqlite3_free);
}

static void nunicode_sqlite3_casing_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casing(lower, casemap, nu_utf16be_read, nu_utf16be_write);

	sqlite3_result_text16be(context, upper, -1, sqlite3_free);
}


static void nunicode_sqlite3_casing_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casing(lower, casemap, nu_utf16he_read, nu_utf16he_write);

	sqlite3_result_text16(context, upper, -1, sqlite3_free);
}

static void nunicode_sqlite3_upper_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf8(context, argc, argv, nu_toupper);
}

static void nunicode_sqlite3_upper_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf16le(context, argc, argv, nu_toupper);
}

static void nunicode_sqlite3_upper_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf16be(context, argc, argv, nu_toupper);
}

static void nunicode_sqlite3_upper_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf16he(context, argc, argv, nu_toupper);
}

static void nunicode_sqlite3_lower_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf8(context, argc, argv, nu_tolower);
}

static void nunicode_sqlite3_lower_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf16le(context, argc, argv, nu_tolower);
}

static void nunicode_sqlite3_lower_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf16be(context, argc, argv, nu_tolower);
}

static void nunicode_sqlite3_lower_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casing_utf16he(context, argc, argv, nu_tolower);
}

#define REGISTER_LIKE(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "like", 2, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_COLLATION(rc, db, sqlite_encoding, name, nu_wrapper) \
	(rc) = sqlite3_create_collation((db), (name), (sqlite_encoding), 0, \
	(nu_wrapper)); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_UPPER(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "upper", 1, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_LOWER(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "lower", 1, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

NU_SQLITE3_EXPORT
int sqlite3_extension_init(sqlite3 *db, char **err_msg,  const sqlite3_api_routines *api) {
	(void)(err_msg);

	SQLITE_EXTENSION_INIT2(api);

	int rc = SQLITE_OK;

	REGISTER_LIKE(rc, db, SQLITE_UTF8, nunicode_sqlite3_like_utf8);
	REGISTER_LIKE(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_like_utf16le);
	REGISTER_LIKE(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_like_utf16be);
	REGISTER_LIKE(rc, db, SQLITE_UTF16, nunicode_sqlite3_like_utf16he);

	REGISTER_COLLATION(rc, db, SQLITE_UTF8, "NUNICODE", nunicode_sqlite3_collate_utf8);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16LE, "NUNICODE", nunicode_sqlite3_collate_utf16le);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16BE, "NUNICODE", nunicode_sqlite3_collate_utf16be);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16, "NUNICODE", nunicode_sqlite3_collate_utf16he);

	REGISTER_COLLATION(rc, db, SQLITE_UTF8, "NOCASE", nunicode_sqlite3_collate_nocase_utf8);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16LE, "NOCASE", nunicode_sqlite3_collate_nocase_utf16le);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16BE, "NOCASE", nunicode_sqlite3_collate_nocase_utf16be);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16, "NOCASE", nunicode_sqlite3_collate_nocase_utf16he);

	REGISTER_UPPER(rc, db, SQLITE_UTF8, nunicode_sqlite3_upper_utf8);
	REGISTER_UPPER(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_upper_utf16le);
	REGISTER_UPPER(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_upper_utf16be);
	REGISTER_UPPER(rc, db, SQLITE_UTF16, nunicode_sqlite3_upper_utf16he);

	REGISTER_LOWER(rc, db, SQLITE_UTF8, nunicode_sqlite3_lower_utf8);
	REGISTER_LOWER(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_lower_utf16le);
	REGISTER_LOWER(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_lower_utf16be);
	REGISTER_LOWER(rc, db, SQLITE_UTF16, nunicode_sqlite3_lower_utf16he);

	fprintf(stderr, "nunicode unicode: %04d\n", NU_UNICODE_VERSION);
	fprintf(stderr, "nunicode sqlite3 extension: %s\n", NU_SQLITE3_EXT_VERSION);

	return SQLITE_OK;
}
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strlen() {
	assert(nu_strlen("hello", nu_utf8_read) == 5);
	assert(nu_strlen("привет", nu_utf8_read) == 6);
	assert(nu_strlen("\x04\x30\x00\x20\x04\x38\x00\x20\x04\x31\x00\x00", nu_utf16be_read) == 5); /* "а и б" in UTF-16BE, no BOM */
}

void test_strnlen() {
	assert(nu_strnlen("привет", 1, nu_utf8_read) == 1); /* might happen */
	assert(nu_strnlen("привет", 2, nu_utf8_read) == 1);
	assert(nu_strnlen("привет", 4, nu_utf8_read) == 2);
	assert(nu_strnlen("привет", 400, nu_utf8_read) == 6); /* didn't go over 0 */
	assert(nu_strnlen("\x04\x30\x00\x20\x04\x38\x00\x20\x04\x31\x00\x00", 4, nu_utf16be_read) == 2); /* "а и б" in UTF-16BE, no BOM */
}

void test_bytelen() {
	const uint32_t input[] = { 0x0430, 0x0020, 0x0438, 0x0020, 0x0431, 0 }; /* "а и б" + 0 */
	const uint32_t zero[] = { 0 };

	assert(nu_bytelen(input, nu_utf8_write) == 8);
	assert(nu_bytelen(input, nu_utf16be_write) == 10);
	assert(nu_bytelen(input, nu_utf16le_write) == 10);
	assert(nu_bytelen(input, nu_utf32be_write) == 20);
	assert(nu_bytelen(input, nu_utf32le_write) == 20);
	assert(nu_bytelen(zero, nu_utf8_write) == 0);
}

void test_bytenlen() {
	const uint32_t input[] = { 0x0430, 0x0020, 0x0438, 0x0020, 0x0431, 0 }; /* "а и б" + 0 */

	assert(nu_bytenlen(input, 1, nu_utf8_write) == 2);
	assert(nu_bytenlen(input, 2, nu_utf8_write) == 3);
	assert(nu_bytenlen(input, 200, nu_utf8_write) == 3 * 2 + 2); /* didnt go over 0 */
}

void test_strbytelen() {
	assert(nu_strbytelen("abc", nu_utf8_read) == 3);
	assert(nu_strbytelen("привет", nu_utf8_read) == 12);
	assert(nu_strbytelen("\x04\x30\x00\x20\x04\x38\x00\x20\x04\x31\x00\x00", nu_utf16be_read) == 5 * 2); /* "а и б" in UTF-16BE, no BOM */
}

void test_sprint() {
	const char i[] = "привет"; /* 2-byte Unicode codepoints */
	char o[sizeof(i)] = { 0 };

	/* order matters, each function overwrites output buffer
	 */

	ssize_t done = nu_sprint(i, nu_utf8_read,
		o, sizeof(i), nu_utf8_write,
		nu_toupper, NU_CASEMAP_DECODING_FUNCTION);
	assert(done == sizeof(i)); /* same number of bytes written */
	assert(memcmp(o, "ПРИВЕТ", done) == 0);

	/* w/o transform */
	done = nu_sprint(i, nu_utf8_read,
		o, sizeof(i), nu_utf8_write, 0, 0);
	assert(done == sizeof(i));
	assert(memcmp(o, i, done) == 0);

	/* test limit */
	done = nu_sprint(i, nu_utf8_read,
		o, 3 * 2, nu_utf8_write,
		nu_toupper, NU_CASEMAP_DECODING_FUNCTION);
	assert(done == sizeof(i)); /* number larger than limit indicates that string was truncated */
	assert(memcmp(o, "ПРИВЕТ", 3 * 2) == 0);

	/* test limit w/o transform */
	done = nu_sprint(i, nu_utf8_read,
		o, 3 * 2, nu_utf8_write, 0, 0);
	assert(done == sizeof(i));
	assert(memcmp(o, i, 3 * 2) == 0);
}

void test_sprint_estimates() {
	const char i[] = "maße";

	ssize_t need = nu_sprint(i, nu_utf8_read, 0, 0, nu_utf8_write, 0, 0);
	assert(need == sizeof(i)); /* same number of bytes required */

	char *o = malloc(need);
	ssize_t done = nu_sprint(i, nu_utf8_read, o, need, nu_utf8_write, 0, 0);
	assert(done == need);
	assert(memcmp(i, o, done) == 0);
	free(o);

	/* w/ transform */
	need = nu_sprint(i, nu_utf8_read, 0, 0, nu_utf8_write,
		nu_toupper, NU_CASEMAP_DECODING_FUNCTION);
	assert(need == sizeof(i));
	assert(need == sizeof("MASSE")); /* different codepoints, same number of bytes */

	o = malloc(need);
	memset(o, 0, need);
	done = nu_sprint(i, nu_utf8_read, o, need, nu_utf8_write,
		nu_toupper, NU_CASEMAP_DECODING_FUNCTION);
	assert(done == need);
	assert(memcmp(o, "MASSE", done) == 0);
	free(o);
}

void test_snprint() {
	const char i[] = "привет"; /* 2-byte Unicode codepoints */
	char o[sizeof(i)] = { 0 };

	ssize_t done = nu_snprint(i, 3 * 2, nu_utf8_read,
		o, sizeof(i), nu_utf8_write,
		nu_toupper, NU_CASEMAP_DECODING_FUNCTION);
	assert(done == 3 * 2);
	assert(memcmp(o, "ПРИВЕТ", 3 * 2) == 0);

	done = nu_snprint(i, 1024, nu_utf8_read,
		o, sizeof(i), nu_utf8_write,
		nu_toupper, NU_CASEMAP_DECODING_FUNCTION);
	assert(done == sizeof(i)); /* max number of bytes written */
	assert(memcmp(o, "ПРИВЕТ", sizeof(i)) == 0);
}

void test__sprint() {
	const char i[] = "ПРИВЕТ"; /* 2-byte Unicode codepoints */
	char o[sizeof(i)] = { 0 };

	ssize_t done = _nu_sprint(i, nu_utf8_read,
		o, sizeof(i), nu_utf8_write,
		_nu_tolower, NU_CASEMAP_DECODING_FUNCTION, 0);
	assert(done == sizeof(i)); /* same number of bytes written */
	assert(memcmp(o, "привет", done) == 0);

	memset(o, 0, sizeof(o));

	/* test limit */
	done = _nu_sprint(i, nu_utf8_read,
		o, 3 * 2, nu_utf8_write,
		_nu_tolower, NU_CASEMAP_DECODING_FUNCTION, 0);
	assert(done == sizeof(i)); /* number larger than limit indicates that string was truncated */
	assert(memcmp(o, "привет", 3 * 2) == 0);
}

void test__sprint_estimates() {
	const char i[] = "MASSE";

	/* always w/ transform */
	ssize_t need = _nu_sprint(i, nu_utf8_read, 0, 0, nu_utf8_write,
		_nu_tolower, NU_CASEMAP_DECODING_FUNCTION, 0);
	assert(need == sizeof(i));
	assert(need == sizeof("masse")); /* different codepoints, same number of bytes */

	char *o = malloc(need);
	memset(o, 0, need);
	ssize_t done = _nu_sprint(i, nu_utf8_read, o, need, nu_utf8_write,
		_nu_tolower, NU_CASEMAP_DECODING_FUNCTION, 0);
	assert(done == need);
	assert(memcmp(o, "masse", done) == 0);
	free(o);
}

void test__snprint() {
	const char i[] = "ПРИВЕТ"; /* 2-byte Unicode codepoints */
	char o[sizeof(i)] = { 0 };

	ssize_t done = _nu_snprint(i, 4 * 2, nu_utf8_read,
		o, sizeof(i), nu_utf8_write,
		_nu_tolower, NU_CASEMAP_DECODING_FUNCTION, 0);
	assert(done == 4 * 2);
	assert(memcmp(o, "привет", 4 * 2) == 0);

	done = _nu_snprint(i, 1024, nu_utf8_read,
		o, sizeof(i), nu_utf8_write,
		_nu_tolower, NU_CASEMAP_DECODING_FUNCTION, 0);
	assert(done == sizeof(i)); /* max number of bytes written */
	assert(memcmp(o, "привет", sizeof(i)) == 0);
}

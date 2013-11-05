#include "defines.h"
#include "strings.h"

#if defined (NU_WITH_Z_EXTRA) || defined(NU_WITH_N_EXTRA)

static int _nu_readstr(const char *encoded, const char *limit, uint32_t *unicode, nu_read_iterator_t it) {
	const char *p = encoded;
	size_t i = 0;

	while (p < limit) {
		p = it(p, unicode + i);

		if (*p == 0) {
			break;
		}

		++i;
	}

	return 0;
}

static int _nu_writestr(const uint32_t *unicode, const uint32_t *limit, char *encoded, nu_write_iterator_t it) {
	char *p = encoded;
	const uint32_t *u = unicode;

	while (u < limit) {
		p = it(*u, p);

		if (*u == 0) {
			break;
		}

		++u;
	}

	return 0;
}

static int _nu_transformstr(const char *source, const char *limit, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	const char *p = source;
	char *d = dest;

	while (p < limit) {
		uint32_t u = 0;

		p = read_it(p, &u);
		d = write_it(u, d);

		if (*p == 0) {
			break;
		}
	}

	return 0;
}

static ssize_t _nu_strtransformnlen(const char *encoded, const char *limit,
	nu_read_iterator_t read, nu_transformation_t transform) {

	ssize_t unicode_len = 0;
	const char *p = encoded;
	while (p < limit) {
		uint32_t u;
		p = read(p, &u);

		if (u == 0) {
			break;
		}

		nu_read_iterator_t transform_read;
		const char *map = transform(u, &transform_read);

		if (map == 0) {
			++unicode_len;
			continue;
		}

		uint32_t mu;
		while (1) {
			map = transform_read(map, &mu);

			if (mu == 0) {
				break;
			}

			++unicode_len;
		}
	}

	return unicode_len;
}

#endif /* NU_WITH_N_EXTRA || NU_WITH_Z_EXTRA */

#ifdef NU_WITH_Z_EXTRA

int nu_readstr(const char *encoded, uint32_t *unicode, nu_read_iterator_t it) {
	return _nu_readstr(encoded, NU_UNLIMITED, unicode, it);
}

int nu_writestr(const uint32_t *unicode, char *encoded, nu_write_iterator_t it) {
	return _nu_writestr(unicode, NU_UNLIMITED, encoded, it);
}

int nu_transformstr(const char *source, char *dest,
	nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	return _nu_transformstr(source, NU_UNLIMITED, dest, read_it, write_it);
}

ssize_t nu_strtransformlen(const char *encoded, nu_read_iterator_t read,
	nu_transformation_t transform) {
	return _nu_strtransformnlen(encoded, NU_UNLIMITED, read, transform);
}

#endif /* NU_WITH_Z_EXTRA */

#ifdef NU_WITH_N_EXTRA

int nu_readnstr(const char *encoded, size_t max_len, uint32_t *unicode,
	nu_read_iterator_t it) {
	return _nu_readstr(encoded, encoded + max_len, unicode, it);
}

int nu_writenstr(const uint32_t *unicode, size_t max_len, char *encoded,
	nu_write_iterator_t it) {
	return _nu_writestr(unicode, unicode + max_len, encoded, it);
}

int nu_transformnstr(const char *source, size_t max_len, char *dest,
	nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	return _nu_transformstr(source, source + max_len, dest, read_it, write_it);
}

ssize_t nu_strtransformnlen(const char *encoded, size_t max_len, nu_read_iterator_t read,
	nu_transformation_t transform) {
	return _nu_strtransformnlen(encoded, encoded + max_len, read, transform);
}

#endif /* NU_WITH_N_EXTRA */

#include <assert.h>

#include <libnu/libnu.h>

void test_toupper() {
	uint32_t u;
	const char *map = 0;

	map = nu_toupper(0x0061); /* a */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0041); /* A */

	map = nu_toupper(0x0451); /* ё */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0401); /* Ё */

	map = nu_toupper(0x00F4); /* ô */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x00D4); /* Ô */

	map = nu_toupper(0xFB02); /* ﬂ */
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0046); /* F */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x004C); /* L */

	map = nu_toupper(0x00E6); /* æ */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x00C6); /* Æ */

	assert(nu_toupper(0x00A0) == 0);
	assert(nu_toupper(0x0041) == 0);
}

void test_tolower() {
	uint32_t u;
	const char *map = 0;

	map = nu_tolower(0x0041); /* A */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0061); /* a */

	map = nu_tolower(0x0401); /* Ё */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0451); /* ё */

	map = nu_tolower(0x00D4); /* Ô */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x00F4); /* ô */

	map = nu_tolower(0x00C6); /* Æ */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x00E6); /* æ */

	assert(nu_tolower(0x00A0) == 0);
	assert(nu_tolower(0x0061) == 0);
}

void test_tofold() {
	uint32_t u;
	const char *map = 0;

	map = nu_tofold(0x00DF); /* ß */
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0073 && map != 0); /* s */
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0073 && map != 0); /* s */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0);

	map = nu_tofold(0x00C6); /* Æ */
	assert(map != 0);
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x00E6); /* æ */
}

/* simple test of internal versions of toupper() and tofold() */
void test__toupper__tofold() {
	uint32_t u;
	const char *map = 0;

	/* toupper() */
	map = _nu_toupper("ﬂ", NU_UNLIMITED, nu_utf8_read, 0);
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0046); /* F */
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x004C); /* L */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0);

	/* tofold() */
	map = _nu_tofold("ß", NU_UNLIMITED, nu_utf8_read, 0);
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0073 && map != 0); /* s */
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x0073 && map != 0); /* s */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0);
}

/* simple test + internal tolower() includes Sigma casemapping */
void test__tolower() {
	uint32_t u;
	const char *map = 0;

	/* simple */
	map = _nu_tolower("Æ", NU_UNLIMITED, nu_utf8_read, 0);
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x00E6); /* æ */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0);

	/* Sigma */
	map = _nu_tolower("Σ", NU_UNLIMITED, nu_utf8_read, 0);
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x03C2); /* ς */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0);

	map = _nu_tolower("ΣΣ", NU_UNLIMITED, nu_utf8_read, 0);
	assert(map != 0);
	map = NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0x03C3); /* σ */
	NU_CASEMAP_DECODING_FUNCTION(map, &u);
	assert(u == 0);
}

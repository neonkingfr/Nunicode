#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_Z_STRINGS

void test_strings_strlen() {
	assert(nu_strlen("hello", nu_utf8_read) == 5);
	assert(nu_strlen("привет", nu_utf8_read) == 6);
}

void test_strings_bytelen() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */
	const uint32_t zero[] = { 0 };

	assert(nu_bytelen(input, nu_utf8_write) == 12);
	assert(nu_bytelen(zero, nu_utf8_write) == 0);
}
#endif /* NU_WITH_Z_STRINGS */

#ifdef NU_WITH_N_STRINGS

void test_strings_strnlen() {
	assert(nu_strnlen("привет", 1, nu_utf8_read) == 1); /* might happen */
	assert(nu_strnlen("привет", 2, nu_utf8_read) == 1);
	assert(nu_strnlen("привет", 4, nu_utf8_read) == 2);
	assert(nu_strnlen("привет", 400, nu_utf8_read) == 6); /* didn't go over 0 */
}

void test_strings_bytenlen() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */

	assert(nu_bytenlen(input, 1, nu_utf8_write) == 2);
	assert(nu_bytenlen(input, 2, nu_utf8_write) == 4);
	assert(nu_bytenlen(input, 200, nu_utf8_write) == 6 * 2); /* didnt go over 0 */
}

#endif /* NU_WITH_N_STRINGS */

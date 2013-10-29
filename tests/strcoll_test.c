#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strchr() {
	const char *input1 = "Mass";
	const char *input2 = "Maße";

	assert(nu_strchr(input1, 'i', nu_utf8_read) == 0);
	assert(nu_strchr(input1, 'M', nu_utf8_read) == input1);
	assert(nu_strchr(input1, 's', nu_utf8_read) == input1 + 2);
	assert(nu_strchr(input1, 0x00DF, nu_utf8_read) == input1 + 2);

	assert(nu_strchr(input2, 0x00DF, nu_utf8_read) == input2 + 2);
	assert(nu_strchr(input2, 's', nu_utf8_read) == input2 + 2);
}

void test_strnchr() {
	const char *input1 = "Masse";

	assert(nu_strnchr(input1, 200, 'i', nu_utf8_read) == 0);
	assert(nu_strnchr(input1, 200, 'M', nu_utf8_read) == input1);
	assert(nu_strnchr(input1, 1, 'M', nu_utf8_read) == input1);
	assert(nu_strnchr(input1, 0, 'M', nu_utf8_read) == 0);
	assert(nu_strnchr(input1, 2, 's', nu_utf8_read) == 0);
	assert(nu_strnchr(input1, 3, 's', nu_utf8_read) == input1 + 2);
	assert(nu_strnchr(input1, 4, 0x00DF, nu_utf8_read) == input1 + 2);
	assert(nu_strnchr(input1, 3, 0x00DF, nu_utf8_read) == 0);
}

void test_strcasechr() {
	const char *input1 = "MASSE";
	const char *input2 = "Maße";

	assert(nu_strcasechr(input1, 'i', nu_utf8_read) == 0);
	assert(nu_strcasechr(input1, 'e', nu_utf8_read) == input1 + 4);
	assert(nu_strcasechr(input1, 0x00DF /* 'ß' */, nu_utf8_read) == input1 + 2);

	assert(nu_strcasechr(input2, 'S', nu_utf8_read) == input2 + 2);
}

void test_strcasenchr() {
	const char *input1 = "MASSE";

	assert(nu_strcasenchr(input1, 200, 'i', nu_utf8_read) == 0);
	assert(nu_strcasenchr(input1, 4, 'e', nu_utf8_read) == 0);
	assert(nu_strcasenchr(input1, 5, 'e', nu_utf8_read) == input1 + 4);
}

void test_strcoll() {
	assert(nu_strcoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ß", "ss", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ss", "ss", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("s", "ss", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("ss", "s", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcoll("ßs", "sß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ßßs", "sßß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ßss", "ssß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ßss", "sßs", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ßsßs", "sßsß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ßsßs", "ssssss", nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcoll("ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("е", "ё", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Е", "Ё", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("ё", "я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcoll("rôle", "rôle", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("role", "roles", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("roles", "rule", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("role", "rôle", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Role", "role", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Role", "rôle", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Rôle", "rôle", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("vario", "varî", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ß", "ss", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ss", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("Masse", "Maße", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("Maße", "Masse", nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcoll("аб", "а", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcoll("а", "аб", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("аб", "аб", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strncoll() {
	assert(nu_strncoll("vario", 1, "varî", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", 2, "varî", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", 3, "varî", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", 4, "varî", 4, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strncoll("vario", 5, "varî", 5, nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strncoll("абв", 4, "аб", 4, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("абв", 6, "аб", 4, nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strncoll("аб", 4, "абв", 6, nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strncoll("ßss", 2, "sßs", 1, nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strncoll("ßss", 2, "sßs", 3, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strncoll("ßss", 3, "sßs", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("ßss", 3, "sßs", 4, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strncoll("ßss", 4, "sßs", 4, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("ßss", 4, "sßs", 3, nu_utf8_read, nu_utf8_read) > 0);
}

void test_strcasecoll() {
	assert(nu_strcasecoll("ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("ё", "Ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("ёлка", "Ёлка", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Ёлка", "ёлка", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("ё", "я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcasecoll("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcasecoll("RÔLE", "rôle", nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcasecoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("MASSE", "Maße", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Maße", "MASSE", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strcasencoll() {
	assert(nu_strcasencoll("MASSE", 1, "Maßa", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 2, "Maßa", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 3, "Maßa", 3, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcasencoll("MASSE", 4, "Maßa", 4, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 5, "Maßa", 5, nu_utf8_read, nu_utf8_read) > 0);
}

void test_strstr() {
	const char *input1 = "Masse";
	const char *input2 = "Maße";
	const char *input3 = "Massess";

	assert(nu_strstr(input1, "", nu_utf8_read, nu_utf8_read) == input1);
	assert(nu_strstr(input1, "ee", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strstr(input1, "asd", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strstr(input1, "Ma", nu_utf8_read, nu_utf8_read) == input1);
	assert(nu_strstr(input1, "ß", nu_utf8_read, nu_utf8_read) == input1 + 2);

	assert(nu_strstr(input2, "ss", nu_utf8_read, nu_utf8_read) == input2 + 2);

	assert(nu_strstr(input3, "s", nu_utf8_read, nu_utf8_read) == input3 + 2);
	assert(nu_strstr(input3, "ss", nu_utf8_read, nu_utf8_read) == input3 + 2);
	assert(nu_strstr(input3, "ess", nu_utf8_read, nu_utf8_read) == input3 + 4);
}

void test_strnstr() {
	const char *input1 = "Masse";
	const char *input2 = "Maße";

	assert(nu_strnstr(input1, 100, "", 1, nu_utf8_read, nu_utf8_read) == input1);

	assert(nu_strnstr(input1, 100, "ee", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 100, "s", 1, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strnstr(input1, 2, "s", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 200, "ß", 2, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strnstr(input1, 3, "ße", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 4, "ße", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 5, "ße", 3, nu_utf8_read, nu_utf8_read) == input1 + 2);

	assert(nu_strnstr(input2, 2, "ss", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input2, 3, "ss", 2, nu_utf8_read, nu_utf8_read) == input2 + 2);
}

void test_strcasestr() {
	const char *input1 = "MASSE";

	assert(nu_strcasestr(input1, "ße", nu_utf8_read, nu_utf8_read) == input1 + 2);
}

void test_strcasenstr() {
	const char *input1 = "MASSE";

	assert(nu_strcasenstr(input1, 100, "asd", 3, nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcasenstr(input1, 100, "ße", 3, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strcasenstr(input1, 3, "ße", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasenstr(input1, 4, "ße", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasenstr(input1, 5, "ße", 3, nu_utf8_read, nu_utf8_read) == input1 + 2);
}
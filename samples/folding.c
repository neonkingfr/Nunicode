#include <stdio.h>

#include <libnu/libnu.h>

int main() {
	const char *MASSE = "MASSE";
	const char *Masse = "Maße";

	printf("nu_strcoll(%s, %s): %d\n",
		MASSE, Masse,
		nu_strcoll(MASSE, Masse, nu_utf8_read, nu_utf8_read));

	printf("nu_strcasecoll(%s, %s): %d\n",
		MASSE, Masse,
		nu_strcasecoll(MASSE, Masse, nu_utf8_read, nu_utf8_read));

	const char role[] = "rôlÊ";
	char upper_buffer[sizeof(role)] = { 0 };
	char lower_buffer[sizeof(role)] = { 0 };

	const char *p = role;
	char *upper = upper_buffer;
	char *lower = lower_buffer;

	while (*p != 0) {
		uint32_t in = 0;
		p = nu_utf8_read(p, &in);

		nu_read_iterator_t casemap_read = 0;

		const char* up = nu_toupper(in, &casemap_read);
		const char* lo = nu_tolower(in, &casemap_read);

		/* note that nu_toupper and nu_tolower might
		 * return more than one character, but in this
		 * example every lowercase/uppercase character
		 * maps to only one another character */

		if (up != 0) {
			uint32_t u = 0;
			do {
				up = casemap_read(up, &u);
				if (u == 0) break;
				upper = nu_utf8_write(u, upper);
			}
			while (u != 0);
		}
		else {
			upper = nu_utf8_write(in, upper);
		}

		if (lo != 0) {
			uint32_t u = 0;
			do {
				lo = casemap_read(lo, &u);
				if (u == 0) break;
				lower = nu_utf8_write(u, lower);
			}
			while (u != 0);
		}
		else {
			lower = nu_utf8_write(in, lower);
		}
	}

	printf("nu_toupper(\"%s\"): %s\n", role, upper_buffer);
	printf("nu_tolower(\"%s\"): %s\n", role, lower_buffer);
}

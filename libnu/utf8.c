#include "utf8.h"
#include "utf8_internal.h"

#ifdef NU_WITH_UTF8_READER

const char* nu_utf8_read(const char *utf8, uint32_t *unicode) {
	unsigned len = utf8_char_length(*utf8);

	if (unicode != 0) {
		switch (len) {
		case 1: *unicode = *utf8; break;
		case 2: utf8_2b(utf8, unicode); break;
		case 3: utf8_3b(utf8, unicode); break;
		case 4: utf8_4b(utf8, unicode); break;
		default: return 0; /* abort */
		}
	}

	return utf8 + len;
}

#endif /* NU_WITH_UTF8_READER */

#ifdef NU_WITH_UTF8_WRITER

char* nu_utf8_write(uint32_t unicode, char *utf8) {
	unsigned codepoint_len = utf8_codepoint_length(unicode);

	if (utf8 != 0) {
		switch (codepoint_len) {
			case 1: *utf8 = (char)(unicode); break;
			case 2: b2_utf8(unicode, utf8); break;
			case 3: b3_utf8(unicode, utf8); break;
			case 4: b4_utf8(unicode, utf8); break;
			default: return 0; /* abort */
		}
	}

	return utf8 + codepoint_len;
}

#endif /* NU_WITH_UTF8_WRITER */
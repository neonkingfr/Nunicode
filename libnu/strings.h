#ifndef NU_STRINGS_H
#define NU_STRINGS_H

/** @defgroup strings String functions
 *
 * Note on "n" functions variant: those are not for memory overrun control.
 * They are just for strings not having terminating 0 byte and those
 * functions won't go further than m-th *character* in string, not byte.
 */

#include <stdint.h>
#include <sys/types.h>

#include "config.h"
#include "defines.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

/** @defgroup iterators Iterators
 */

/** Read (decode) iterator
 *
 * @ingroup iterators
 * @see nu_utf8_read
 */
typedef const char* (*nu_read_iterator_t)(const char *encoded, uint32_t *unicode);

/** Read (decode) backwards iterator
 *
 * Arguments intentionally reversed to not mix this with nu_read_iterator_t.
 * Reverse read is not compatible with any of string functions.
 *
 * @ingroup iterators
 * @see nu_utf8_revread
 */
typedef const char* (*nu_revread_iterator_t)(uint32_t *unicode, const char *encoded);

/** Write (encode) iterator
 *
 * @ingroup iterators
 * @see nu_utf8_write
 */
typedef char* (*nu_write_iterator_t)(uint32_t unicode, char *encoded);

#ifdef NU_WITH_Z_STRINGS

/** Get decoded string characters length
 *
 * @ingroup strings
 * @param encoded encoded string
 * @param it decoding function
 * @return string length or negative error
 *
 * @see nu_strnlen
 */
NU_EXPORT
ssize_t nu_strlen(const char *encoded,
	nu_read_iterator_t it);

/** Get encoded string bytes length (encoding variant)
 *
 * @ingroup strings
 * @param unicode unicode codepoints
 * @param it encoding function
 * @return byte length or negative error
 *
 * @see nu_bytenlen
 */
NU_EXPORT
ssize_t nu_bytelen(const uint32_t *unicode,
	nu_write_iterator_t it);

/** Get encoded string bytes length
 *
 * @ingroup strings
 * @param encoded encoded string
 * @param it decoding function
 * @return string length or negative error
 */
NU_EXPORT
ssize_t nu_strbytelen(const char *encoded,
	nu_read_iterator_t it);

#endif /* NU_WITH_Z_STRINGS */

#ifdef NU_WITH_N_STRINGS

/** Get character length of string without terminating 0
 *
 * @ingroup strings
 * @see nu_strlen
 */
NU_EXPORT
ssize_t nu_strnlen(const char *encoded, size_t max_len,
	nu_read_iterator_t it);

/** Get length of encoded string
 *
 * @ingroup strings
 * @see nu_bytelen
 */
NU_EXPORT
ssize_t nu_bytenlen(const uint32_t *unicode, size_t max_len,
	nu_write_iterator_t it);

#endif /* NU_WITH_N_STRINGS */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRINGS_H */

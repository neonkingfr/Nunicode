#ifndef NU_STRINGS_H
#define NU_STRINGS_H

/** @defgroup strings String operations
 *
 * Note on "n" functions variant: those are not for memory overrun control.
 * They are just for strings not having terminating 0 byte and those
 * functions won't go further than m-th *character* in string, not byte.
 */

#include <stdint.h>
#include <sys/types.h>

#include "config.h"

/**Read (decoding) iterator
 *
 * @ingroup iterators
 * @see nu_utf8_read
 */
typedef const char* (*nu_read_iterator_t)(const char *encoded, uint32_t *unicode);

/** Write (encoding) iterator
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
 *
 * @see nu_strnlen
 */
ssize_t nu_strlen(const char *encoded, nu_read_iterator_t it);

/** Get encoded string bytes length
 *
 * @ingroup strings
 * @param unicode unicode codepoints
 * @param it encoding function
 *
 * @see nu_bytenlen
 */
ssize_t nu_bytelen(const uint32_t *unicode, nu_write_iterator_t it);

#endif /* NU_WITH_Z_STRINGS */

#ifdef NU_WITH_N_STRINGS

/** Get character length of string without terminating 0
 *
 * @ingroup strings
 * @param max_len nu_strnlen won't normally got further than max_len bytes. It might
 * go further if encoded character is longer than max_len though
 *
 * @see nu_strlen
 */
ssize_t nu_strnlen(const char *encoded, size_t max_len, nu_read_iterator_t it);

/** Get length of encoded string
 *
 * @ingroup strings
 * @param max_len nu_bytenlen won't go further than max_len-th codepoint
 *
 * @see nu_bytelen
 */
ssize_t nu_bytenlen(const uint32_t *unicode, size_t max_len, nu_write_iterator_t it);

#endif /* NU_WITH_N_STRINGS */

#endif /* NU_STRINGS_H */

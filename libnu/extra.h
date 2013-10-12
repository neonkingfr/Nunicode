#ifndef NU_EXTRA_H
#define NU_EXTRA_H

/** @defgroup extra Extra string functions
 *
 * Note on "n" functions variant: those are not for memory overrun control.
 * They are just for strings not having terminating 0 byte and those
 * functions won't go further than m-th *character* in string, not byte.
 */

#include <stdint.h>
#include <sys/types.h>

#include "config.h"
#include "strings.h"

#ifdef NU_WITH_Z_EXTRA

/** Read 0-terminated string
 *
 * @ingroup extra
 * @param encoded source buffer
 * @param unicode destination buffer, should be large enough to hold
 * decoded string
 * @param it read function
 * @return 0 in success or negative error
 *
 * @see nu_utf8_read
 * @see nu_utf8_strlen
 * @see nu_readnstr
 */
int nu_readstr(const char *encoded, uint32_t *unicode, nu_read_iterator_t it);

/** Write 0-terminated string
 *
 * @ingroup extra
 * @param unicode 0x0000-terminated codepoints
 * @param encoded destination buffer, should be large enough to hold
 * encoded string
 * @return 0 on success or negative error
 *
 * @see nu_utf8_write
 * @see nu_utf8_bytelen
 * @see nu_writenstr
 */
int nu_writestr(const uint32_t *unicode, char *encoded, nu_write_iterator_t it);

/** Recode string
 *
 * @ingroup extra
 * @param source source encoded string
 * @param dest dest encoded string, should be large enough
 * @param read_it decoding function
 * @param write_it encoding function
 * @return 0 on success or negative error
 *
 * @see nu_utf8_bytelen
 * @see nu_utf8_read
 * @see nu_utf8_write
 * @see nu_transformnstr
 */
int nu_transformstr(const char *source, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it);

#endif /* NU_WITH_Z_EXTRA */

#ifdef NU_WITH_N_EXTRA

/** Read encoded string
 *
 * @ingroup extra
 * @param max_len nu_readnstr won't normally got further than max_len bytes. It might
 * go further if encoded character is longer than max_len though
 *
 * @see nu_readstr
 */
int nu_readnstr(const char *encoded, size_t max_len, uint32_t *unicode, nu_read_iterator_t it);

/** Write encoded string
 *
 * @ingroup extra
 * @param max_len nu_writenstr won't go further than max_len-th codepoint
 *
 * @see nu_writestr
 */
int nu_writenstr(const uint32_t *unicode, size_t max_len, char *encoded, nu_write_iterator_t it);

/** Recode string
 *
 * @ingroup extra
 * @param max_len nu_transformnstr won't normally got further than max_len bytes. It might
 * go further if encoded character is longer than max_len though
 *
 * @see nu_transformstr
 */
int nu_transformnstr(const char *source, size_t max_len, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it);

#endif /* NU_WITH_N_EXTRA */

#endif /* NU_EXTRA_H */
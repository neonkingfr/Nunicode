#ifndef NU_DUCET_H
#define NU_DUCET_H

#include <stdint.h>

#include "config.h"
#include "defines.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_DUCET

/** Get DUCET value of codepoint
 *
 * By default this function will return (uint32_t)(-1) for unknown codepoints,
 * hence putting all unknown characters to the end of the scale. Note that
 * nu_ducet_codepointcmp() is aware of it, but it work this around,
 * @see nu_ducet_codepointcmp
 *
 * @ingroup udb
 * @param codepoint codepoint
 * @return comparable weight of the codepoint or (uint32_t)(-1)
 */
NU_EXPORT
int32_t nu_ducet_weight(uint32_t codepoint, int32_t state);

#endif /* NU_WITH_DUCET */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_DUCET_H */
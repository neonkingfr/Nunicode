#ifndef NU_TOUPPER_H
#define NU_TOUPPER_H

#include <stdint.h>

#include "config.h"
#include "defines.h"
#include "strings.h"
#include "udb.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#define NU_CASEMAP_DECODING_FUNCTION NU_UDB_DECODING_FUNCTION

/** Casemap codepoint
 * @ingroup transformations
 */
typedef nu_transformation_t nu_casemapping_t;

#ifdef NU_WITH_TOUPPER

/** Return uppercase value of codepoint
 *
 * @ingroup transformations
 * @param codepoint unicode codepoint
 * @return uppercase codepoint or 0 if mapping doesn't exist
 */
NU_EXPORT
const char* nu_toupper(uint32_t codepoint);

#endif /* NU_WITH_TOUPPER */

#ifdef NU_WITH_TOLOWER

/** Return lowercase value of codepoint
 *
 * @ingroup transformations
 * @param codepoint unicode codepoint
 * @return lowercase codepoint or 0 if mapping doesn't exist
 */
NU_EXPORT
const char* nu_tolower(uint32_t codepoint);

/** Return value of codepoint with case differences eliminated
 *
 * @ingroup transformations
 * @param codepoint unicode codepoint
 * @return casefolded codepoint or 0 if mapping doesn't exist
 */
NU_EXPORT
const char* nu_tofold(uint32_t codepoint);

#endif /* NU_WITH_TOLOWER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_TOUPPER_H */

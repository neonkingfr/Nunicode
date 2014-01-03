#ifndef NU_UDB_H
#define NU_UDB_H

#include <stdint.h>
#include <sys/types.h>

#include "config.h"
#include "defines.h"
#include "strings.h"

/** @defgroup udb Unicode Database (kind of)
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UDB

typedef const int16_t nu_fnv_table_t;

/** Unicode database record reference
 *
 * @ingroup udb
 */
typedef struct {
	/** Original unicode codepoint
	 */
	uint32_t codepoint;
	/** Offset in COMBINED associated with codepoint
	 */
	uint32_t combined_offset;
} nu_udb_t;

/** Lookup value in UDB
 */
NU_EXPORT
uint32_t nu_udb_lookup_value(uint32_t codepoint,
	nu_fnv_table_t *G, size_t G_SIZE, const nu_udb_t *VALUES);

/** Lookup data in UDB
 *
 * Returned data is encoded, therefore you need to use p = it(p, &u) to
 * fetch it. Returned string might contain more than 1 character.
 *
 * @ingroup udb
 * @param codepoint unicode codepoint
 * @param it returned read iterator for looked up data
 * @param G first MPH table
 * @param G_SIZE first table number of elements (original MPH set size)
 * @param VALUES second MPH table
 * @param COMBINED joined values addressed by index stored in VALUES
 * @return looked up data or 0
 */
NU_EXPORT
const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	nu_fnv_table_t *G, size_t G_SIZE, const nu_udb_t *VALUES,
	const uint8_t *COMBINED);

#endif /* NU_WITH_UDB */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UDB_H */

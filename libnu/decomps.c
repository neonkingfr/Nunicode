#include "decomps.h"
#include "udb.h"

#ifdef NU_WITH_DECOMPOSITION

#include "gen/_decomps.h"

static const size_t G_SIZE = sizeof(G) / sizeof(*G);

const char* nu_decompose(uint32_t codepoint, nu_read_iterator_t *it) {
	return nu_udb_lookup(codepoint, it, G, G_SIZE, VALUES, COMBINED);
}

#endif /* NU_WITH_DECOMPOSITION */

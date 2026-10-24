/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/i5bootn/8010A8.c, func_008010A8.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
/* Sony 2.9-ee library code: word copy of n bytes (n rounded down to whole words). */
int func_001A4A58(unsigned int *d, unsigned int *s, unsigned int n) {
    unsigned int i;
    n >>= 2;
    for (i = 0; i < n; i++)
        *d++ = *s++;
    return 0;
}

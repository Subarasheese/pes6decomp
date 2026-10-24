/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/i5bootn/800488.c, func_00800790.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
/* Sony 2.9-ee library code: byte copy. */
int func_001A4BC8(unsigned char *d, unsigned char *s, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++)
        *d++ = *s++;
    return 0;
}

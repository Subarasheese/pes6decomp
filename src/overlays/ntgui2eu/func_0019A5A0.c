/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/boot_elf/core/12A948.c, func_0012D5F0.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
u32 func_0019A5A0(u32 a) {
    if ((a >> 28) == 7) {
        a &= 0x0FFFFFFF;
        a |= 0x80000000;
    }
    return a;
}

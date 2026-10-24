/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/boot_elf/core/124988.c, func_00124A28.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
u32 *func_001A4848(u32 *p, u32 *end, u32 val) {
    while (*p != val && p < end) {
        p++;
    }
    return p < end ? p : 0;
}

/* compiler: ee-gcc-2.96 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/boot_elf/core/116F80.c, func_00119F08.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
s32 func_001B39D8(s32 r, s32 *pwc, u8 *s, u32 n) {
    s32 dummy;
    s32 ret = 0;
    if (pwc == 0) {
        pwc = &dummy;
    }
    if (s != 0) {
        ret = -1;
        if (n != 0) {
            *pwc = *s;
            ret = *s; ret = ret != 0;
        }
    }
    return ret;
}

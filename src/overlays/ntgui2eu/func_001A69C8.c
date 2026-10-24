/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/11FA10.c, func_0011FF30.
 * See config/cross_project_matches.json for per-image address mappings. */
extern s32 func_0019B550(s32, s32 *);
s32 func_001A69C8(s32 a, s8 b) {
    s32 buf[4];
    buf[0] = a;
    buf[1] = b;
    return func_0019B550(3, buf);
}

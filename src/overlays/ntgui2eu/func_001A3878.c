/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/11FA10.c, func_00123EA0.
 * See config/cross_project_matches.json for per-image address mappings. */
extern s32 func_001AE7D8(s32, s32, s32);
extern s32 D_005CAC00[];
extern u8 D_01204F28[];
s32 func_001A3878(void) {
    D_005CAC00[0] = -1;
    ((void (*)(void *, s32, s32))func_001AE7D8)(D_01204F28, 0, 4);
    return 0;
}

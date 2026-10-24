/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/11FA10.c, func_00122A68.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; s32 f14; } S_122A68;
extern s32 D_005CABF0[];
extern s32 D_005CABF4[];
extern char D_006004D0[];
extern char D_006004E0[];
extern int func_0019B120();

void func_0019F560(void) {
    S_122A68 sp;
    if (D_005CABF0[0] == -1) {
        sp.f8 = 1;
        sp.f14 = (s32)D_006004D0;
        sp.f4 = 1;
        D_005CABF0[0] = func_0019B120(&sp);
        sp.f14 = (s32)D_006004E0;
        D_005CABF4[0] = func_0019B120(&sp);
    }
}

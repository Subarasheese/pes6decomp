/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/124988.c, func_00124988.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct { s32 pad0; s32 f4; s32 f8; s32 fc; s32 f10; void *f14; s32 f18; s32 f1c; s32 f20; s32 f24; s32 f28; s32 f2c; s32 f30; void *f34; } S_124988;
extern s32 D_005CAC20[];
extern s32 D_005CAC24[];
extern u8 D_006007C0[];
extern u8 D_006007D0[];
extern s32 func_0019B120(void *);
void func_001A4790(void) {
    S_124988 s;
    s.f4 = 1;
    s.f8 = 1;
    s.f14 = D_006007C0;
    s.f24 = 1;
    s.f28 = 1;
    s.f34 = D_006007D0;
    D_005CAC20[0] = func_0019B120(&s);
    D_005CAC24[0] = func_0019B120((u8 *)&s + 0x20);
}

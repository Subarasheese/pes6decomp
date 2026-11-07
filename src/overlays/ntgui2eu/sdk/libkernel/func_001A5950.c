/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/124988.c, func_00125878.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 p0[0xC];
    s32 xC;
    s32 x10;
    s32 x14;
} G_125878;
typedef struct {
    s32 next;
    u8 p4[0x4];
    s32 x8;
    s32 xC;
    u8 p10[0x8];
    s32 x18;
    s32 x1C;
    s32 x20;
    s32 x24;
    s32 x28;
} N_125878;
extern G_125878 D_005CBB98;

s32 func_001A5950(void) {
    N_125878 *n;
    s32 i; s32 v; s32 c; s32 u; s32 t;
    n = (N_125878 *)D_005CBB98.x14;
    if (n == 0) {
        return 0x80008005;
    }
    i = *(volatile s32 *)&D_005CBB98.x10;
    u = (s32)n << 4;
    v = *(volatile s32 *)&n->next;
    t = i + 1;
    do {
        *(volatile s32 *)&n->x28 = 0;
        D_005CBB98.x10 = t;
        n->xC = 0;
        D_005CBB98.x14 = v;
        c = D_005CBB98.xC;
        *(unsigned long *)&n->x18 = 0;
        D_005CBB98.xC = c + 1;
        n->x8 = (((*(volatile s32 *)&D_005CBB98.xC) << 1) & 0x3FE) | 1;
        return u | *(volatile s32 *)&n->x8;
    } while (0);
}

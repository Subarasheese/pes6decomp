/* compiler: ee-gcc-2.96 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/boot_elf/core/11FA10.c, func_00122278.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
typedef struct { u8 pad[0x14]; s32 x14; s32 x18; u8 pad2[8]; s32 x24; } S_122278;
s32 func_0019E738(S_122278 *p) {
    s32 i = p->x24 % p->x18;
    s32 r = p->x14 + i * 64;
    p->x24 = i + 1;
    return r;
}

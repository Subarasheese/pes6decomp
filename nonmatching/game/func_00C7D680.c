/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA864;
extern s32 D_003EA868;
extern char D_00CCC014[];

void func_00C7D680(s32 arg0) {
    s32 temp_a2;

    D_003EA864 = 0;
    if (D_003EA868 != 0) {
        temp_a2 = 0 & 1;
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~2) | ((arg0 & 1) * 2);
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~1) | 1;
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~4) | (temp_a2 * 4);
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~1) | 1;
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~0x10) | (temp_a2 * 0x10);
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~1) | 1;
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~8) | (temp_a2 * 8);
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~1) | 1;
    }
}

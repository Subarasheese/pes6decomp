/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA864;
extern s32 D_003EA868;
extern char D_00CCC014[];
extern char D_00CCC020[];
extern char D_00CCC024[];
extern char D_00CCC028[];

void func_00C7D400(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;

    D_003EA864 = 0;
    if (D_003EA868 != 0) {
        temp_a2 = arg2 & 0xFF;
        var_a0 = arg0 & 0xFF;
        switch (temp_a2) {                          /* irregular */
        case 2:
            if ((var_a0 & 0xFF) < 0x10) {
                var_v1 = var_a0 + 0x5A;
block_15:
                var_a0 = var_v1 & 0xFF;
            }
            break;
        case 1:
            if ((var_a0 & 0xFF) < 0x2E) {
                var_v1 = var_a0 + 0x2D;
                goto block_15;
            }
            break;
        case 3:
            if ((var_a0 & 0xFF) < 0x10) {
                var_v1 = var_a0 + 0x69;
                goto block_15;
            }
            break;
        }
        var_a1 = var_a0 & 0xFF;
        if (var_a1 >= 0xC7) {
            var_a1 = 0xC7;
        }
        (*(s32 *)D_00CCC020) = var_a1;
        (*(s32 *)D_00CCC024) = temp_a2;
        (*(s32 *)D_00CCC028) = arg3 & 0xFF;
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~0x10) | 0x10;
        (*(u8 *)D_00CCC014) = ((*(u8 *)D_00CCC014) & ~1) | 1;
    }
}

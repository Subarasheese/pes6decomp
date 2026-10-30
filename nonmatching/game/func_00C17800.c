/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];
extern char D_00CCAE40[];

void func_00C17800(void) {
    M2C_UNK *var_a5;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a6;
    u8 temp_v1_2;

    var_a6 = 0;
    var_a5 = ((void *)D_0058E7F0);
    do {
        temp_a2 = var_a6 & 0xFF;
        var_a4 = 0;
loop_2:
        if (temp_a2 < 2) {
            temp_v1 = var_a4 & 0xFF;
            if (temp_v1 < 0x20) {
                M2C_FIELD((((void *)D_00CCAE40) + (temp_a2 << 5) + temp_v1), s8 *, 0x80) = 0xFF;
            }
        }
        var_a4 += 1;
        if (var_a4 < 0x20) {
            goto loop_2;
        }
        var_a6 += 1;
    } while (var_a6 < 2);
    var_a4_2 = 0;
    do {
        var_a3 = 0;
loop_9:
        temp_v1_2 = M2C_FIELD(var_a5, u8 *, 0x12);
        if ((s32) temp_v1_2 < 2) {
            temp_a0 = M2C_FIELD(var_a5, u8 *, 0x11) & 0xFF;
            if (temp_a0 < 0x20) {
                M2C_FIELD((((void *)D_00CCAE40) + (temp_v1_2 << 5) + temp_a0), u8 *, 0x80) = (u8) M2C_FIELD(var_a5, u8 *, 0);
            }
        }
        var_a3 += 1;
        var_a5 += 0x240;
        if (var_a3 < 0xB) {
            goto loop_9;
        }
        var_a4_2 += 1;
    } while (var_a4_2 < 2);
}

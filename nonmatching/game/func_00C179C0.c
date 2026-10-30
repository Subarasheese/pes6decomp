/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];
extern char D_00591A90[];
extern char D_00CCAE40[];

void func_00C179C0(void) {
    M2C_UNK *var_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_t0;
    u8 temp_a4;

    var_a6 = 0;
    var_v1 = ((void *)D_0058E7F0);
    do {
        temp_a3 = var_a6 & 0xFF;
        var_a5 = 0;
loop_2:
        if (temp_a3 < 2) {
            temp_a0 = var_a5 & 0xFF;
            if (temp_a0 < 0x20) {
                M2C_FIELD((((void *)D_00CCAE40) + (temp_a3 << 5) + temp_a0), s8 *, 0x80) = 0xFF;
            }
        }
        var_a5 += 1;
        if (var_a5 < 0x20) {
            goto loop_2;
        }
        var_a6 += 1;
    } while (var_a6 < 2);
    var_t0 = 0;
    do {
        var_a7 = 0;
loop_9:
        temp_a4 = M2C_FIELD(var_v1, u8 *, 0x12);
        if ((s32) temp_a4 < 2) {
            temp_a1 = M2C_FIELD((var_a7 + (((void *)D_00591A90) + (temp_a4 * 0x8B))), u8 *, 7) & 0xFF;
            if (temp_a1 < 0x20) {
                M2C_FIELD((((void *)D_00CCAE40) + (temp_a4 << 5) + temp_a1), u8 *, 0x80) = (u8) M2C_FIELD(var_v1, u8 *, 0);
            }
        }
        var_a7 += 1;
        var_v1 += 0x240;
        if (var_a7 < 0xB) {
            goto loop_9;
        }
        var_t0 += 1;
    } while (var_t0 < 2);
}

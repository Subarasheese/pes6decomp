/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A76BF0[];
extern char D_00A76BF1[];
extern char D_00A76BF4[];
extern char D_00A76BF5[];

s32 func_00953440(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a4;
    s32 temp_a6;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 & 8) {
        temp_a2 = arg2 & 0xFF & 0xFF;
        temp_a6 = arg1 & 0xFF & 0xFF;
        temp_a1 = (*(u8 *)D_00A76BF0) + (*(u8 *)D_00A76BF1);
        temp_a3 = (*(u8 *)D_00A76BF4) + (*(u8 *)D_00A76BF5);
        temp_a3_2 = (temp_a2 + temp_a3) & 0xFFFF;
        temp_a2_2 = (temp_a6 + (temp_a1 * 2)) & 0xFFFF;
        temp_a4 = (temp_a6 + temp_a1) & 0xFFFF;
        temp_a1_2 = (temp_a3 + (temp_a2 * 2)) & 0xFFFF;
        if (temp_v0 & 1) {
            if ((temp_a4 & 0xFFFF) != (temp_a3_2 & 0xFFFF)) {
                return 0;
            }
            if (!(temp_v0 & 0x10)) {
                return 2;
            }
            if ((temp_a2_2 & 0xFFFF) != (temp_a1_2 & 0xFFFF)) {
                var_v0_3 = 0;
            } else {
                var_v0_3 = 2;
            }
            return var_v0_3;
        }
        if ((temp_a4 & 0xFFFF) != (temp_a3_2 & 0xFFFF)) {
            return 0;
        }
        if (!(temp_v0 & 0x10)) {
            return 1;
        }
        var_v0 = (temp_a2_2 & 0xFFFF) ^ (temp_a1_2 & 0xFFFF);
        goto block_30;
    }
    temp_a2_3 = ((*(u8 *)D_00A76BF0) + (*(u8 *)D_00A76BF1)) & 0xFFFF;
    temp_a1_3 = ((*(u8 *)D_00A76BF4) + (*(u8 *)D_00A76BF5)) & 0xFFFF;
    if (temp_v0 & 1) {
        if ((temp_a2_3 & 0xFFFF) != (temp_a1_3 & 0xFFFF)) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 2;
        }
        return var_v0_2;
    }
    if (!(temp_v0 & 4)) {
        return 0;
    }
    var_v0 = (temp_a2_3 & 0xFFFF) ^ (temp_a1_3 & 0xFFFF);
block_30:
    return var_v0 == 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00228F20(s32);                             /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234870(s32, s32, M2C_UNK, s32);          /* extern */
extern s32 D_003E77B4;

s32 func_0098D9F0(s32 arg0, s32 arg1) {
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    u8 temp_s6;

    temp_s6 = M2C_FIELD((((arg0 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4ABB);
    var_s0 = 0;
    if ((s32) temp_s6 > 0) {
loop_1:
        temp_s4 = func_00234870(arg1, var_s0 & 0xFF, 0, arg0) & 0xFF;
        temp_v1 = temp_s4 & 0xFF;
        temp_s5 = func_00234870(arg1, var_s0 & 0xFF, 1, arg0) & 0xFF;
        if (temp_v1 < 0x71) {
            temp_v0 = temp_s5 & 0xFF;
            if ((temp_v0 < 0x71) && (temp_v1 != temp_v0)) {
                temp_s3 = func_00229010(temp_s4) & 0xFF;
                temp_v1_2 = func_00229010(temp_s5) & 0xFF;
                if (((temp_s3 & 0xFF) < 0x50) && ((temp_v1_2 & 0xFF) < 0x50) && (func_00233EF0(temp_s4, arg1) == 0) && (func_00233EF0(temp_s5, arg1) == 0)) {
                    if ((func_00228F20(temp_s4) & 0xFF) <= 0) {
                        if ((func_00228F20(temp_s5) & 0xFF) > 0) {
                            goto block_11;
                        }
                        goto block_12;
                    }
block_11:
                    return 0;
                }
            }
        }
block_12:
        var_s0 += 1;
        if (var_s0 >= (s32) temp_s6) {
            goto block_13;
        }
        goto loop_1;
    }
block_13:
    return 1;
}

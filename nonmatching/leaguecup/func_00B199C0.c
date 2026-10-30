/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00229010(s32);                             /* extern */
s32 func_00234870(s32, s32, M2C_UNK, s32);          /* extern */
extern s32 D_003E77B4;

s32 func_00B199C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s1 = 0xFF;
    temp_s0 = func_00225820() & 0xFF;
    var_s2 = arg1 & 0xFF;
loop_11:
    if ((arg2 & 0xFF) >= (var_s2 & 0xFF)) {
        if ((var_s1 & 0xFF) == 0xFF) {
            var_s3 = 0;
loop_7:
            if ((var_s3 & 0xFF) < (s32) M2C_FIELD((((var_s2 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4ABB)) {
                if ((var_s1 & 0xFF) != 0xFF) {

                } else {
                    temp_s4 = func_00234870(arg0, var_s3, 0, var_s2) & 0xFF;
                    if (temp_s0 != (func_00229010(func_00234870(arg0, var_s3, 1, var_s2) & 0xFF) & 0xFF)) {
                        if (temp_s0 == (func_00229010(temp_s4) & 0xFF)) {
                            goto block_5;
                        }
                    } else {
block_5:
                        var_s1 = var_s2 & 0xFF;
                    }
                    var_s3 = (var_s3 + 1) & 0xFF;
                    goto loop_7;
                }
            }
            var_s2 = (var_s2 + 1) & 0xFF;
            goto loop_11;
        }
    }
    return var_s1;
}

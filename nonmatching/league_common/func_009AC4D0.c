/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00229280(s32);
s32 func_00225B20(u8);                              /* extern */
s32 func_00229010(s32);                             /* extern */
M2C_UNK func_002290D0(s32);                         /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_009AC4D0(s32 arg0) {
    u8 sp6F;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s1;
    u8 temp_s3;

    temp_v0 = func_00229280(arg0 & 0xFF);
    if (temp_v0 != 0) {
        var_s1 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 2) > 0) {
loop_5:
            temp_s4 = ((var_s1 & 0xFF) + (func_00236680(arg0) & 0xFF)) & 0xFF;
            temp_s3 = func_00229010(temp_s4) & 0xFF;
            func_002290D0(temp_s4);
            if (&sp6F != NULL) {
                sp6F = temp_s3;
            }
            if (func_00225B20(sp6F) != 1) {
                var_s1 = (var_s1 + 1) & 0xFF;
                if (var_s1 >= (s32) M2C_FIELD(temp_v0, u8 *, 2)) {
                    goto block_12;
                }
                goto loop_5;
            }
            return var_s1;
        }
        goto block_12;
    }
block_12:
    return 0xFF;
}

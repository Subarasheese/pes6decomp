/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC5FA0(s32);
extern s32 func_00BC57E0(s32, s32, s32);
extern void func_00222E80(int, int, u16);
M2C_UNK func_00BC5750(M2C_UNK, s32, s32);           /* extern */
s32 func_00BC59F0(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_00BC5DF0(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */

s32 func_00BE4E10(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0;

    var_s3 = 0;
loop_1:
    if ((arg0 & 0xFFFF) != (func_00BC5DF0(0x35, var_s3 & 0xFF, 2) & 0xFFFF)) {
        var_s3 += 1;
        if (var_s3 >= 0x17) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    } else {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        var_s3_2 = func_00BC57E0(arg0, 0x35, 1) & 0xFF;
        var_s2 = 0;
loop_12:
        if ((var_s3_2 == (func_00BC59F0(0x35, var_s2 & 0xFF, 0) & 0xFF)) && (arg3 != var_s2)) {
            var_s3_2 = func_00BC5FA0(0x35) & 0xFF;
        } else {
            var_s2 += 1;
            if (var_s2 >= 0x17) {

            } else {
                goto loop_12;
            }
        }
        func_00BC5750(0x35, arg3 & 0xFF, var_s3_2 & 0xFF);
        func_00222E80(0x35, arg3 & 0xFF, (u16) arg0);
        func_00C1B380(6);
        return 1;
    }
    return 0;
}

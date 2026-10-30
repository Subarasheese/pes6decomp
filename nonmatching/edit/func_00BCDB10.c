/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC5FA0(s32);
extern s32 func_00221A60(s32);
extern s32 func_00BC57E0(s32, s32, s32);
M2C_UNK func_00BC5750(s32, s32, s32);               /* extern */
s32 func_00BC59F0(s32, s32, M2C_UNK);               /* extern */
s32 func_00BC5DF0(s32, s32, M2C_UNK);               /* extern */

void func_00BCDB10(s32 arg0) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;

    temp_s0 = func_00221A60(arg0) & 0xFF;
    var_s2 = 0;
    if (temp_s0 > 0) {
        do {
            func_00BC5750(arg0, var_s2, func_00BC57E0(func_00BC5DF0(arg0, var_s2, 0) & 0xFFFF, arg0, 1) & 0xFF);
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < temp_s0);
    }
    var_s2_2 = 0;
    if (temp_s0 > 0) {
        do {
            var_s3 = func_00BC59F0(arg0, var_s2_2, 0) & 0xFF;
            if (var_s3 == 0xFF) {
                if (func_00BC5DF0(arg0, var_s2_2, 0) & 0xFFFF) {
                    var_s3 = func_00BC5FA0(arg0) & 0xFF;
                }
                func_00BC5750(arg0, var_s2_2, var_s3);
            }
            var_s2_2 = (var_s2_2 + 1) & 0xFF;
        } while (var_s2_2 < temp_s0);
    }
}

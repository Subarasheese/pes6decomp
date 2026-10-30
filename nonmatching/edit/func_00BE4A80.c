/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00221A60(s32);
extern void func_00222E80(int, int, u16);
M2C_UNK func_00BC5750(s32, s32, s32);               /* extern */
s32 func_00BC59F0(s32, s32, M2C_UNK);               /* extern */
s32 func_00BC5DF0(s32, s32, M2C_UNK);               /* extern */

void func_00BE4A80(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = arg0 & 0xFFFF;
    temp_s1 = arg1 & 0xFFFF;
    if (temp_s1 >= var_s3) {
        do {
            temp_s0 = func_00221A60(var_s3) & 0xFF;
            var_s2 = 0;
            if (temp_s0 > 0) {
                do {
                    func_00222E80(var_s3, var_s2 & 0xFF, func_00BC5DF0(var_s3, var_s2 & 0xFF, 1) & 0xFFFF);
                    func_00BC5750(var_s3, var_s2 & 0xFF, func_00BC59F0(var_s3, var_s2 & 0xFF, 1) & 0xFF);
                    var_s2 += 1;
                } while (var_s2 < temp_s0);
            }
            var_s3 = (var_s3 + 1) & 0xFFFF;
        } while (temp_s1 >= var_s3);
    }
}

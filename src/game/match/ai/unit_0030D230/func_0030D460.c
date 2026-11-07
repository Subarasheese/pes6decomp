/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_0030D460(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = arg0;
    if (arg1 > 0) {
        temp_v1 = arg1 - 1;
        if (arg2 & 0x10) {
            var_s0 -= 1;
        } else if (arg2 & 0x40) {
            var_s0 += 1;
        }
        if (var_s0 < 0) {
            var_s0 = temp_v1;
        }
        if (temp_v1 < var_s0) {
            var_s0 = 0;
        }
    }
    if (var_s0 != arg0) {
        func_0026E840(0x8400F802);
    }
    return var_s0;
}

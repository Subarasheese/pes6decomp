/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00221500(s32);                             /* extern */
s32 func_00B9FBB0();                                /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BF4420(M2C_UNK);                         /* extern */
s32 func_00BF73D0();                                /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */

void func_00BDDF60(s32 arg0) {
    M2C_UNK var_s1;
    s32 temp_s0;

    var_s1 = 3;
    if (arg0 == 0) {
        if (func_00BF73D0() == 0) {
            var_s1 = 0x40003;
        } else {
            var_s1 = 0x40013;
        }
    } else {
        temp_s0 = func_00C1B460(0) & 0xFFFF;
        if ((func_00B9FBB0() != 0) && (func_00221500(func_00BF4420(0) & 0xFFFF) == 0)) {
            if ((temp_s0 & 0xFFFF) != 0xFFFF) {
                var_s1 = 0x23;
            } else {
                var_s1 = 0x01000023;
            }
        }
    }
    func_00BC3FB0(var_s1);
}

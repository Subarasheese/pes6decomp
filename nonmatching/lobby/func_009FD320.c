/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
s32 func_009FDF20(s32, u8 *, M2C_UNK);              /* extern */

s32 func_009FD320(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4, s32 arg5) {
    u8 sp90;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;

    var_s5 = arg0;
    var_s1 = 0;
    var_s0 = 0;
loop_9:
    if (var_s1 < arg5) {
loop_1:
        var_s5 = func_009FDF20(var_s5, &sp90, 0x400);
        if (var_s5 != 0) {
            if (sp90 == 0) {
                goto loop_1;
            }
        }
        if (var_s5 != 0) {
            var_s0 = M2C_FIELD((arg4 + (var_s1 * 8)), s32 (**)(u8 *, s32), 4)(&sp90, arg1);
            if (var_s0 == 0) {
                var_s1 += 1;
                goto loop_9;
            }
        } else {
            var_s0 = -2;
        }
    }
    if (var_s0 != 0) {
        func_001C48E8(arg1, 0, arg2);
    }
    *arg3 = var_s0;
    return var_s5;
}

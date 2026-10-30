/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, s32);                /* extern */
s32 func_009FDF20(s32, u8 *, M2C_UNK);              /* extern */

s32 func_009FD200(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 (*arg6)(s32, s32, s32 *, s32 *), s32 (*arg7)(u8 *, s32)) {
    u8 sp80;
    s32 sp488;
    s32 sp48C;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;

    func_001C48E8(0, arg1);
    var_s3 = arg6(arg2, arg0, &sp48C, &sp488);
    if (sp48C == 0) {
        var_s4 = 0;
        var_s5 = 0;
loop_16:
        if (var_s4 >= sp488) {
            *arg5 = sp488;
            return 0;
        }
loop_5:
        var_s3 = func_009FDF20(var_s3, &sp80, 0x400);
        if (var_s3 != 0) {
            if (sp80 == 0) {
                goto loop_5;
            }
        }
        if (var_s3 != 0) {
            if (arg7(&sp80, arg3 + var_s5) >= 0) {
                var_s4 += 1;
                var_s5 += arg4;
                goto loop_16;
            }
            return -5;
        }
        *arg5 = var_s4;
        return -5;
    }
    return sp48C;
}

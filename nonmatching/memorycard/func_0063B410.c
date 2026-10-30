/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 vsprintf(s32, s64, s32);                   /* extern */
s32 func_0063B4F0(s64, s32);                        /* extern */

s32 func_0063B410(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, M2C_UNK arg_sp0) {
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;

    sp60 = arg2;
    var_s0 = 0;
    sp68 = arg3;
    sp70 = arg4;
    sp78 = arg5;
    sp80 = arg6;
    sp88 = arg7;
    if (2 >= 8) {
        var_v1 = 0;
    } else {
        var_v1 = (8 - 2) * 8;
    }
    if ((u32) (func_0063B4F0((s64) (arg1 << 0x20) >> 0x20, &arg_sp0 - var_v1) + 1) < 0x200U) {
        if (2 < 8) {
            var_v1_2 = (8 - 2) * 8;
        } else {
            var_v1_2 = 0;
        }
        var_s0 = vsprintf(arg0, (s64) (arg1 << 0x20) >> 0x20, &arg_sp0 - var_v1_2);
    }
    return var_s0;
}

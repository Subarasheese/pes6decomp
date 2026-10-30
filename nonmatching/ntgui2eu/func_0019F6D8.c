/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019C198(s32);                         /* extern */
u32 func_0019EE30(s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

u32 func_0019F6D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    s32 sp10;
    s32 sp14;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s0;

    var_s2 = 0;
    var_s1 = 1;
    sp10 = arg0;
    sp14 = arg1;
loop_1:
    temp_s0 = func_0019EE30(sp10, sp14, arg2, arg3, arg4, arg5, arg6, arg7, arg_sp0) >> 0x1F;
    if ((temp_s0 != 0) && (arg_sp8 == 0)) {
        func_0019C198(var_s1 * 0x3E8);
        if (var_s1 < 0x7F) {
            var_s1 *= 2;
        }
        var_s2 += 1;
        if (var_s2 < 0x65) {
            goto loop_1;
        }
    }
    return temp_s0;
}

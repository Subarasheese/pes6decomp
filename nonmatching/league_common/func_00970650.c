/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
s32 func_00222850(s32, s32);                        /* extern */
s32 func_00225720(u8);                              /* extern */
s32 func_00229750(s32);                             /* extern */
s32 func_00230410();                                /* extern */
s32 func_0024EC90(s32);                             /* extern */
s32 func_00AF7160(s32);                             /* extern */
extern char D_00591C09[];

s32 func_00970650(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 3;
    if (func_00230410() == 1) {
        temp_v1 = arg0 & 0xFFFF;
        if ((temp_v1 >= 0x7000) && (temp_v1 < 0x7020)) {
            temp_v0 = func_00229750(arg0);
            if (temp_v0 != 0) {
                var_v0 = temp_v0 + 0x4C;
            } else {
                var_v0 = 0;
            }
            return var_v0;
        }
    }
    var_a0 = 1;
    if (func_00210DF0() == 1) {
        temp_v1_2 = arg0 & 0xFFFF;
        if ((temp_v1_2 >= 0x1770) && (temp_v1_2 < 0x18F7)) {

        } else {
            var_a0 = 0;
        }
        if (var_a0 == 1) {
            return func_00AF7160(arg0);
        }
        goto block_15;
    }
block_15:
    if (((*(u8 *)D_00591C09) == 1) || ((*(u8 *)D_00591C09) == 2) || ((*(u8 *)D_00591C09) == 0xE)) {
        var_s0 = func_0024EC90(func_00225720((*(u8 *)D_00591C09)) & 0xFF);
    }
    return func_00222850(arg0, var_s0);
}

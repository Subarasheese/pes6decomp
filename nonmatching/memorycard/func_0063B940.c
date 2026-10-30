/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00628F80();                            /* extern */
M2C_UNK func_00628FC0(u8, M2C_UNK);                 /* extern */
s32 func_0063BA40(s32, u8 *, s32, s32, s32);        /* extern */
s32 func_00655660();                                /* extern */
M2C_UNK func_00655760();                            /* extern */
extern s32 D_003EA17C;

s32 func_0063B940(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_v0;
    s32 var_s5;

    var_s5 = 0;
    if (D_003EA17C != 1) {
        func_00628FC0(*arg1, 1);
        func_00655760();
        if (func_00655660() != 0) {
            D_003EA17C = 1;
            goto block_3;
        }
    } else {
block_3:
        temp_v0 = func_0063BA40(arg0, arg1, arg2, arg3 & 0xFF, arg4 & 0xFF);
        if (temp_v0 == 2) {
            *arg1 = arg5;
        }
        func_00628FC0(*arg1, 1);
        if (temp_v0 != 0) {
            func_00628F80();
            D_003EA17C = 0;
            var_s5 = 1;
        }
    }
    return var_s5;
}

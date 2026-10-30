/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF6B50(void);
s32 func_0021EE40(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BF6680();                                /* extern */
s8 func_00BF6790(s32);                              /* extern */

s32 func_00C04150(s32 arg0, s8 *arg1) {
    s32 temp_v0;
    s32 var_s0;
    s8 temp_s0;

    var_s0 = 0;
    temp_v0 = func_00BF6680();
    switch (temp_v0) {                              /* irregular */
    case 0:
        if ((1 != 0x126) && (func_00BCF3A0(0x08000000) != 0)) {
            var_s0 = 3;
            func_0026E840(0x84028400);
        }
        break;
    case 1:
        *arg1 = func_00BF6790(func_00BF6B50());
        var_s0 = 1;
        break;
    case 2:
        temp_s0 = func_00BF6790(func_00BF6B50());
        if (temp_s0 == (func_0021EE40(arg0, 0) & 0xFF)) {
            var_s0 = 2;
        } else {
            var_s0 = 4;
        }
        break;
    }
    if ((arg0 & 0xFFFF) != 0x126) {
        func_00BC3FB0(0x10000B);
    } else {
        func_00BC3FB0(0x100003);
    }
    return var_s0;
}

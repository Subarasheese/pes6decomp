/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008F79E0();                                /* extern */
M2C_UNK func_008FB320(s32);                         /* extern */
s32 func_009A3650(s32);                             /* extern */
s32 func_009A6D40();                                /* extern */
M2C_UNK func_00B2A3E0(M2C_UNK);                     /* extern */
extern char D_00591DB4[];

s32 func_008F7BB0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_s0;

    var_s0 = func_008F79E0();
    if (var_s0 != 0) {
        var_s0 &= func_009A3650(func_009A6D40() + 8);
    }
    if (var_s0 != 0) {
        func_0026E840(0x84028400);
        func_00B2A3E0(1);
        func_008FB320(arg3);
        (*(s8 *)D_00591DB4) = 0;
        return 2;
    }
    func_0026E840(0x8C008005);
    return 0;
}

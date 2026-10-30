/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern void func_00930D50(void);
extern s32 func_0017F8A0(s32);
M2C_UNK func_00151EA0(M2C_UNK);                     /* extern */
s32 func_0021FDC0();                                /* extern */
M2C_UNK func_00930630();                            /* extern */
s32 func_00931220();                                /* extern */
extern s32 D_003EAC70;

s32 func_00930540(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    switch (D_003EAC70) {                           /* irregular */
    default:
        func_00930D50();
        D_003EAC70 = 1;
        break;
    case 1:
        if (func_0021FDC0() != 0) {
            if (func_0017F8A0(func_0021DF90(0)) != 0) {
                var_v0 = 1;
            } else {
                goto block_12;
            }
        } else {
block_12:
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            D_003EAC70 = 2;
        case 2:
            func_00930630();
            D_003EAC70 = 3;
        } else {
            func_00151EA0(0xFFFF);
        }
        break;
    case 3:
        if (func_00931220() != 0) {
        case 6:
            D_003EAC70 = 0;
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}

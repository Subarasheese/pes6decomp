/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E8C60(void);
extern s32 func_002E84D0(void);
extern s32 func_002E8CB0(s32, s8);
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */

s32 func_00C74890(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_v1 = func_009E1C90(1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        var_s0 = 1;
        break;
    case 1:
        if (func_002E8CB0(0x2C, 0) == 0) {
            func_009E1D30(1, 3);
        } else {
            func_009E1D30(1, 2);
        }
        break;
    default:
        func_009E1D30(1, 0);
        break;
    case 0:
        if (func_002E84D0() != 1) {
            func_009E1D30(1, 3);
        } else {
            func_009E1D30(1, 1);
        }
        break;
    case 2:
        if (func_002E8C60() != 0) {
            func_009E1D30(1, 3);
        }
        break;
    }
    return var_s0;
}

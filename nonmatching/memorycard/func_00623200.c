/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0021DB60(int);
s32 func_00216520();                                /* extern */
extern s32 D_003EA0C4;
extern s8 D_003EA0C8;

s32 func_00623200(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EA0C4) {                           /* irregular */
    case 0:
        if (func_00216520() != 0) {
            D_003EA0C4 += 1;
        }
        break;
    case 1:
        if (func_0021DB60(arg2) != 0) {
            D_003EA0C4 = 0;
            var_s0 = func_0021DB60(arg2);
            if ((var_s0 == -0x7C) && (D_003EA0C8 < 4)) {
                D_003EA0C4 = 0;
                D_003EA0C8 += 1;
                var_s0 = 0;
            } else {
                D_003EA0C8 = 0;
            }
        }
        break;
    }
    return var_s0;
}

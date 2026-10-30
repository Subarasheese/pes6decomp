/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0021DB60(int);
s32 func_00218770(s64, s32, M2C_UNK, s32, s32);     /* extern */
M2C_UNK func_0063B760();                            /* extern */
extern u8 D_003EA0A4;
extern u8 D_003EA0A8;

s32 func_00623690(M2C_UNK arg0, s64 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EA0A4 != 1) {
        if (func_00218770((s64) (arg1 << 0x20) >> 0x20, arg2, 0, arg3 & 0xFF, arg4 & 0xFF) == 1) {
            D_003EA0A4 = 1;
        }
    } else {
        func_0063B760();
        var_s0 = func_0021DB60(arg2);
        if ((var_s0 == -0x7C) && ((s32) D_003EA0A8 < 4)) {
            D_003EA0A4 = 0;
            D_003EA0A8 += 1;
            var_s0 = 0;
        } else if (var_s0 != 0) {
            D_003EA0A8 = 0;
            D_003EA0A4 = 0;
        }
    }
    return var_s0;
}

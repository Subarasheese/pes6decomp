/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0021DB60(int);
s32 func_00215BD0(s64, M2C_UNK);                    /* extern */
extern u8 D_003EA098;
extern s8 D_003EA09C;

s32 func_006237E0(M2C_UNK arg0, s64 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EA098 != 1) {
        if (func_00215BD0((s64) (arg1 << 0x20) >> 0x20, 0) == 1) {
            D_003EA098 = 1;
        }
    } else {
        var_s0 = func_0021DB60(arg2);
        if ((var_s0 == -0x7C) && (D_003EA09C < 4)) {
            D_003EA098 = 0;
            D_003EA09C += 1;
            var_s0 = 0;
        } else if (var_s0 != 0) {
            D_003EA09C = 0;
            D_003EA098 = 0;
        }
    }
    return var_s0;
}

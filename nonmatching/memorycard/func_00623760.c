/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0021DB60(int);
s32 func_00216920(M2C_UNK, s64, s32, M2C_UNK);      /* extern */
extern u8 D_003EA0A0;

s32 func_00623760(s64 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EA0A0 != 1) {
        if (func_00216920(0, (s64) (arg0 << 0x20) >> 0x20, arg1, 0) == 1) {
            D_003EA0A0 = 1;
        }
    } else {
        var_s0 = func_0021DB60(arg1);
        if (var_s0 != 0) {
            D_003EA0A0 = 0;
        }
    }
    return var_s0;
}

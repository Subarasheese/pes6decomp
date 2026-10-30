/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00253F40(M2C_UNK);                         /* extern */
s32 func_0026E1A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_005F0978[];

s32 func_00332FA0(void) {
    s32 var_v0;

    var_v0 = func_0026E1A0(0, 6, 0, 0, 0, 0, 0) != 0;
    if (var_v0 == 0) {
        var_v0 = (*(s32 *)D_005F0978) != 0;
    }
    if ((var_v0 == 0) && (func_0026E1A0(0, 9, 0, 0, 0, 0, 0) == 0)) {
        if (func_00253F40(0) == 0) {
            return 0;
        }
        goto block_7;
    }
block_7:
    return 1;
}

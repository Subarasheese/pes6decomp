/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0026E1A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_005F0978[];

s32 func_00333370(void) {
    s32 var_v0;

    var_v0 = func_0026E1A0(0, 6, 0, 0, 0, 0, 0) != 0;
    if (var_v0 == 0) {
        var_v0 = (*(s32 *)D_005F0978) != 0;
    }
    return var_v0;
}

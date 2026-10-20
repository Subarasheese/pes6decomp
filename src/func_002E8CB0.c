/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_002E92B0(M2C_UNK);                     /* extern */
extern s32 D_003E9DF0;
extern s32 D_003E9DF4;
extern s32 D_003E9DF8;
extern s8 D_003E9E20;

s32 func_002E8CB0(s32 arg0, s8 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (D_003E9DF0 == 0) {
        D_003E9DF8 = arg0;
        D_003E9E20 = arg1;
        func_002E92B0(0);
        D_003E9DF4 = 0;
        var_v0 = 1;
    }
    return var_v0;
}

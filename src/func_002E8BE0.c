/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002E8CF0();                                /* extern */
M2C_UNK func_002E92B0(M2C_UNK);                     /* extern */
extern s32 D_003E9DEC;
extern s32 D_003E9DF8;

s32 func_002E8BE0(void) {
    s32 var_s0;

    var_s0 = 1;
    D_003E9DEC = 1;
    if (D_003E9DF8 == 0) {
        func_002E92B0(0);
    } else {
        var_s0 = func_002E8CF0();
    }
    return var_s0;
}

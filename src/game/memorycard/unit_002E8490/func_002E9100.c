/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6SaveData_GetUnavailableFlag();                                /* extern */
extern s32 D_003E9DF8;

s32 func_002E9100(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((Pes6SaveData_GetUnavailableFlag() != 0) && ((D_003E9DF8 == 0x1C) || (D_003E9DF8 == 0xC))) {
        var_s0 = 1;
    }
    return var_s0;
}

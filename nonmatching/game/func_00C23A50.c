/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB52A0[];

s32 func_00C23A50(u8 *arg0, s32 arg1) {
    u8 *var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a0 = (u8 *)D_00CB52A0;
    do {
        if ((var_a0[0x6CC] == *arg0) && (M2C_FIELD(var_a0, s32 *, 0x6BC) == arg1)) {
            return 1;
        }
        var_a2 += 1;
        var_a0 += 0x40;
    } while (var_a2 < 0x16);
    return 0;
}

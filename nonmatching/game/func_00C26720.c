/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB52A0[];

s32 func_00C26720(u8 *arg0) {
    u8 *var_a1;
    s32 var_a2;

    var_a1 = (u8 *)D_00CB52A0;
    for (var_a2 = 0; var_a2 < 0x16; var_a2++) {
        if ((M2C_FIELD(var_a1, u8 *, 0x6CC) == *arg0) && (M2C_FIELD(var_a1, s32 *, 0x6BC) == 2)) {
            return 1;
        }
        var_a1 += 0x40;
    }
    return 0;
}

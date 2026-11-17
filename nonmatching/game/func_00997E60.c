/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00592800[];

s32 func_00997E60(u8 *arg0) {
    u8 *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = (u8 *)D_00592800;
    do {
        if ((*arg0 == var_a0[0x10]) && ((s32)var_a0[0] < 8)) {
            return 1;
        }
        var_a1 += 1;
        var_a0 += 0x28;
    } while (var_a1 < 8);
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_00181FA0(s32 arg0, s32 arg1, s8 arg2) {
    s32 var_a1;
    s32 var_a3;

    var_a1 = arg1;
    if (var_a1 != 0) {
        var_a3 = arg0 * 0x60;
        do {
            var_a1 -= 1;
            M2C_FIELD((*(s32 *)0x51FF38 + var_a3), s8 *, 0x51) = arg2;
            var_a3 += 0x60;
        } while (var_a1 != 0);
    }
}

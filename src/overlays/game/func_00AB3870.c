/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00A1FE80(s32, s32);

s32 func_00AB3870(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;

    var_a2 = arg2;
    if (arg1 >= 0x801) {
        return *(s32 *)(arg0 + 0x58);
    }
    if (arg1 >= 0x201) {
        var_a2 = func_00A1FE80(var_a2, 0x1900 - (arg0[0x5C] * 0xC));
    }
    return var_a2;
}

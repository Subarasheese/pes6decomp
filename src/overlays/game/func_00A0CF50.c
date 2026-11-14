/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00A0CF50(u8 *arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (arg0[0x13] == 0) {
        var_v0 = 1;
        if (*(f32 *)(arg0 + 0xE0) < 0.0f) {
            var_v0 = 0;
        }
        return var_v0 ^ 1;
    }
    var_v0_2 = 1;
    if (*(f32 *)(arg0 + 0xE0) < 0.0f) {
        var_v0_2 = 0;
    }
    return var_v0_2;
}

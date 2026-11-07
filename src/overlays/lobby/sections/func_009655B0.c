/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_008429A0(s32);
s32 func_0094C7A0(s32);

s32 func_009655B0(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (func_0094C7A0(0)) {
    case 0:
        break;
    case 4:
        func_008429A0(0);
        var_s0 = 1;
        break;
    case 1:
        var_s0 = -1;
        break;
    case 2:
        var_s0 = -2;
        break;
    case 3:
        var_s0 = -3;
        break;
    default:
        var_s0 = -4;
        break;
    }
    return var_s0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001B4270(s32, s32, s32);                   /* extern */
M2C_UNK func_002F7D30(s32, s32, s32, s32);          /* extern */

void func_002CD200(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_002F7D30(arg0, var_s0, arg1, func_001B4270(arg0, arg1, var_s0));
        var_s0 += 1;
    } while (var_s0 < 9);
}

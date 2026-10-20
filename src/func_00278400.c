/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00278280(s32);                         /* extern */

void func_00278400(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_00278280(var_s0 & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 8);
}

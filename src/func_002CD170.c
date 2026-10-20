/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001B3C20(s32);                         /* extern */
M2C_UNK func_002CD270(s32);                         /* extern */

void func_002CD170(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_002CD270(var_s0);
        var_s0 += 1;
    } while (var_s0 < 9);
    func_001B3C20(arg0);
}

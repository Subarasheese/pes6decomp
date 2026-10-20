/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F3D10(s32, M2C_UNK);                /* extern */

s32 func_002F3940(s8 *arg0) {
    s32 var_s1;
    s8 *var_s0;

    if (arg0 == NULL) {
        return 0;
    }
    var_s1 = 0;
    *arg0 = 1;
    var_s0 = arg0;
    do {
        func_001F3D10(M2C_FIELD(var_s0, s32 *, 0xA4), 0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    return 1;
}

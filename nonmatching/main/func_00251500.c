/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002511D0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_00251500(void) {
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0;
    do {
        func_002511D0(var_s0, 0xC, 0);
        func_002511D0(var_s0, 0xE, 0);
        func_002511D0(var_s0, 4, 0x64);
        func_002511D0(var_s0, 0xF, 0);
        func_002511D0(var_s0, 0x10, 0);
        var_s0 += 1;
    } while (var_s0 < 8);
    var_s0_2 = 0;
    do {
        func_002511D0(var_s0_2, 0x12, 0);
        var_s0_2 += 1;
    } while (var_s0_2 < 8);
}

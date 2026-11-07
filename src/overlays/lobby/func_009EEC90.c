/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002DBC20(s32, s32, s32, s32);

s32 func_009EEC90(s32 arg0, void *arg1, s32 *arg2) {
    s32 temp_a3;
    s32 len;
    s32 var_v0;

    temp_a3 = M2C_FIELD(arg1, s32 *, 0x10);
    len = M2C_FIELD(arg1, s32 *, 0x14);
    var_v0 = 0;
    if (temp_a3 <= arg0 && arg0 < temp_a3 + len) {
        func_002DBC20(*arg2, arg0 - temp_a3, 0, temp_a3);
        var_v0 = 1;
    }
    return var_v0;
}

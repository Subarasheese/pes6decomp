/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_002F82D0(M2C_UNK, s32, s32, s32);        /* extern */

void func_002F8050(s32 arg0, s32 arg1) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        temp_v0 = func_002F82D0(3, arg0, var_s0, arg1);
        var_s0 += 1;
        M2C_FIELD(temp_v0, s8 *, 3) = 0x58;
    } while (var_s0 < 4);
}

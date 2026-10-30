/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00817190(M2C_UNK);                         /* extern */

s32 func_00AE6220(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    temp_v0 = func_00817190(0);
    switch (temp_v0) {                              /* irregular */
    case -1:
        var_v0 = 7;
        var_s0 = 1;
block_13:
        M2C_FIELD(arg0, s32 *, 0x10) = var_v0;
        break;
    case 1:
        var_s0 = 1;
        break;
    default:
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC) + 1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_v0_2;
        if (temp_v0_2 < 0x708) {
            if (arg1 & 0x1000) {
                func_0026E840(0x84008401);
                var_v0 = 4;
                var_s0 = 1;
                goto block_13;
            }
        } else {
            var_v0 = 3;
            var_s0 = 1;
            goto block_13;
        }
        break;
    }
    return var_s0;
}

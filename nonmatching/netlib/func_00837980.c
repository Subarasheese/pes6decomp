/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00837980(void) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;
    s32 var_s0;
    s32 var_v1;

    if (func_00D0BAF0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A5CB0);
    }
    if (var_v0 == NULL) {
        return 0;
    }
    if (func_00D0BAF0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008A5CB0);
    }
    if (var_v0_2 != NULL) {
        var_s0 = M2C_FIELD(var_v0_2, s32 *, 0x224);
    } else {
        var_s0 = 4;
    }
    if (func_00D0BAF0() == 0) {
        var_v0_3 = NULL;
    } else {
        var_v0_3 = ((void *)D_008A5CB0);
    }
    var_v1 = 4;
    if (var_s0 != 4) {
        if (var_v0_3 != NULL) {
            var_v1 = M2C_FIELD(var_v0_3, s32 *, 0x228);
        }
        if (var_v1 != 4) {
            return 0;
        }
        goto block_21;
    }
block_21:
    return 1;
}

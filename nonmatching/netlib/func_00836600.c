/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

void *func_00836600(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v0;
    s8 var_v0_2;

    if (func_00D0BAF0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = ((void *)D_008A5CB0);
    }
    if (var_s0 == NULL) {
        goto block_24;
    }
    if (func_00D0BAF0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A5CB0);
    }
    if (var_v0 != NULL) {
        var_v0_2 = M2C_FIELD(var_v0, s8 *, 0x2B4);
    } else {
        var_v0_2 = 0;
    }
    if (var_v0_2 == 0) {
        goto block_24;
    }
    if (arg0 != 0) {
        if (M2C_FIELD(var_s0, s8 *, 0x279) != 0) {
            return var_s0 + 0x279;
        }
        goto block_24;
    }
    if (M2C_FIELD(var_s0, s8 *, 0x248) != 0) {
        return var_s0 + 0x248;
    }
block_24:
    return NULL;
}

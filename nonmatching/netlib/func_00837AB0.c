/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00837AB0(s32 arg0) {
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_4;
    M2C_UNK *var_v0_6;
    M2C_UNK *var_v1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_5;

    if (func_00D0BAF0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008A5CB0);
    }
    if (var_v0_2 == NULL) {
        goto block_36;
    }
    if (func_00D0BAF0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A5CB0);
    }
    if (var_v1 != NULL) {
        if ((arg0 != 1) && (arg0 != 0)) {
            var_v0_3 = 4;
        } else {
            var_v0_3 = M2C_FIELD(((arg0 * 4) + var_v1), s32 *, 0x224);
        }
    } else {
        var_v0_3 = 4;
    }
    var_v0 = var_v0_3 + 1;
    if ((var_v0 <= 0) || (var_v0 >= 5)) {
        if (arg0 == 0) {
            if (func_00D0BAF0() == 0) {
                var_v0_4 = NULL;
            } else {
                var_v0_4 = ((void *)D_008A5CB0);
            }
            if (var_v0_4 != NULL) {
                var_v0_5 = M2C_FIELD(var_v0_4, s32 *, 0x228);
            } else {
                var_v0_5 = 4;
            }
        } else {
            if (func_00D0BAF0() == 0) {
                var_v0_6 = NULL;
            } else {
                var_v0_6 = ((void *)D_008A5CB0);
            }
            if (var_v0_6 != NULL) {
                var_v0_5 = M2C_FIELD(var_v0_6, s32 *, 0x224);
            } else {
                var_v0_5 = 4;
            }
        }
        var_v0 = var_v0_5 + 1;
        if ((var_v0 <= 0) || (var_v0 >= 5)) {
block_36:
            var_v0 = 0;
        }
    }
    return var_v0;
}

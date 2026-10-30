/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_008381E0(void) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    s32 temp_s0;

    if (func_00D0BAF0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A5CB0);
    }
    if (var_v0 != NULL) {
        temp_s0 = M2C_FIELD(var_v0, s32 *, 0x230);
        if (func_00D0BAF0() == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = ((void *)D_008A5CB0);
        }
        if (var_v0_2 == NULL) {
            return 0;
        }
        if (temp_s0 < 0) {
            return 0;
        }
        if (temp_s0 < 4) {
            if (temp_s0 < M2C_FIELD(var_v0_2, s32 *, 0x220)) {
                return temp_s0 + 1;
            }
            goto block_19;
        }
block_19:
        return 0;
    }
    return 0;
}

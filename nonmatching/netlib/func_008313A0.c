/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0082C2A0();                                /* extern */
s32 func_008428B0();                                /* extern */
extern char D_008A8394[];

u16 func_008313A0(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v0_2;
    s32 temp_v0;
    u8 var_v1;
    void *var_v0;

    if (func_0082C2A0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = ((void *)D_008A8394);
    }
    if (var_s0 == NULL) {
        var_s0 = NULL;
    }
    if (func_0082C2A0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008A8394);
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        if (arg0 < 0) {
            var_v1 = -1U;
        } else if (arg0 >= (s32) M2C_FIELD(var_v0_2, u16 *, 0x10)) {
            var_v1 = -1U;
        } else {
            temp_v0 = func_008428B0();
            if (temp_v0 != 0) {
                var_v1 = M2C_FIELD((arg0 + temp_v0), u8 *, 6);
            } else {
                var_v1 = -1U;
            }
        }
    } else {
        var_v1 = -1U;
    }
    if (var_s0 == NULL) {
        var_v0 = NULL;
    } else if ((s32) var_v1 < 0) {
        var_v0 = NULL;
    } else if ((s32) var_v1 < 0x28) {
        if ((s32) var_v1 < (s32) M2C_FIELD(var_s0, u16 *, 0x10)) {
            var_v0 = var_s0 + (var_v1 * 0x30) + 0x8E;
        } else {
            goto block_33;
        }
    } else {
block_33:
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u16 *, 0x24);
    }
    return 0U;
}

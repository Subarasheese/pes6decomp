/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern char D_00A03A00[];

s32 func_009320F0(s32 arg0) {
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;
    s32 *var_v0_4;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_v0_5;
    void *var_s0;
    void *var_v0;

    temp_s0 = func_0082C2A0();
    if (func_0082C2A0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_00A03A00);
    }
    if (var_v0_2 == NULL) {
        var_s0 = NULL;
    } else if (temp_s0 != 0) {
        var_s0 = var_v0_2 + 0x2F17C;
    } else {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else {
        temp_s2 = func_0082C2A0();
        if (func_0082C2A0() == 0) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = ((void *)D_00A03A00);
        }
        if (var_v0_3 == NULL) {
            var_v0_4 = NULL;
        } else if (temp_s2 != 0) {
            var_v0_4 = var_v0_3 + 0x2F17C;
        } else {
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_v0_5 = *var_v0_4;
        } else {
            var_v0_5 = -1;
        }
        if (arg0 < var_v0_5) {
            if (arg0 < 0x32) {
                var_v0 = var_s0 + (arg0 * 0x14C) + 4;
            } else {
                goto block_33;
            }
        } else {
block_33:
            var_v0 = NULL;
        }
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s32 *, 0x80);
    }
    return 0;
}

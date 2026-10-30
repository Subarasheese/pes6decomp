/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern char D_00A03A00[];

void *func_009335D0(s32 arg0) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    s32 *var_v0_3;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_v0_4;
    void *var_s0;
    void *var_v1;

    temp_s0 = func_0082C2A0();
    if (func_0082C2A0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_00A03A00);
    }
    if (var_v0 == NULL) {
        var_s0 = NULL;
    } else if (temp_s0 != 0) {
        var_s0 = var_v0 + 0x28414;
    } else {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        var_v1 = NULL;
    } else if (arg0 < 0) {
        var_v1 = NULL;
    } else {
        temp_s2 = func_0082C2A0();
        if (func_0082C2A0() == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = ((void *)D_00A03A00);
        }
        if (var_v0_2 == NULL) {
            var_v0_3 = NULL;
        } else if (temp_s2 != 0) {
            var_v0_3 = var_v0_2 + 0x28414;
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_4 = *var_v0_3;
        } else {
            var_v0_4 = -1;
        }
        if (arg0 < var_v0_4) {
            var_v1 = var_s0 + (arg0 * 0x118) + 4;
        } else {
            var_v1 = NULL;
        }
    }
    if (var_v1 == NULL) {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0x50) != 0) {
            return var_v1 + 0x50;
        }
        return NULL;
    }
    return NULL;
}

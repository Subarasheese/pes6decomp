/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern void *D_003E7BC0;
extern char D_00A03A00[];

void *func_00933990(s32 arg0) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_5;
    M2C_UNK *var_v0_7;
    s32 *var_v0_3;
    s32 *var_v0_8;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 var_v0_4;
    s32 var_v0_9;
    s8 var_v0_10;
    void *var_s0;
    void *var_s0_2;
    void *var_s1;
    void *var_v0_6;

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
        var_s1 = NULL;
    } else if (arg0 < 0) {
        var_s1 = NULL;
    } else {
        temp_s1 = func_0082C2A0();
        if (func_0082C2A0() == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = ((void *)D_00A03A00);
        }
        if (var_v0_2 == NULL) {
            var_v0_3 = NULL;
        } else if (temp_s1 != 0) {
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
            var_s1 = var_s0 + (arg0 * 0x118) + 4;
        } else {
            var_s1 = NULL;
        }
    }
    if (var_s1 == NULL) {
        return NULL;
    }
    temp_s0_2 = func_0082C2A0();
    if (func_0082C2A0() == 0) {
        var_v0_5 = NULL;
    } else {
        var_v0_5 = ((void *)D_00A03A00);
    }
    if (var_v0_5 == NULL) {
        var_s0_2 = NULL;
    } else if (temp_s0_2 != 0) {
        var_s0_2 = var_v0_5 + 0x28414;
    } else {
        var_s0_2 = NULL;
    }
    if (var_s0_2 == NULL) {
        var_v0_6 = NULL;
    } else if (arg0 < 0) {
        var_v0_6 = NULL;
    } else {
        temp_s3 = func_0082C2A0();
        if (func_0082C2A0() == 0) {
            var_v0_7 = NULL;
        } else {
            var_v0_7 = ((void *)D_00A03A00);
        }
        if (var_v0_7 == NULL) {
            var_v0_8 = NULL;
        } else if (temp_s3 != 0) {
            var_v0_8 = var_v0_7 + 0x28414;
        } else {
            var_v0_8 = NULL;
        }
        if (var_v0_8 != NULL) {
            var_v0_9 = *var_v0_8;
        } else {
            var_v0_9 = -1;
        }
        if (arg0 < var_v0_9) {
            var_v0_6 = var_s0_2 + (arg0 * 0x118) + 4;
        } else {
            var_v0_6 = NULL;
        }
    }
    if (var_v0_6 == NULL) {
        var_v0_6 = NULL;
    }
    if (var_v0_6 != NULL) {
        var_v0_10 = M2C_FIELD(var_v0_6, s8 *, 0x49);
    } else {
        var_v0_10 = 9;
    }
    if (((s64) ((s64) var_v0_10 << 0x38) >> 0x38) != 8) {
        if (M2C_FIELD(var_s1, u8 *, 0x94) != 0) {
            return var_s1 + 0x94;
        }
        return D_003E7BC0;
    }
    return NULL;
}

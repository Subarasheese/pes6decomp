/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00836250(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v0_2;
    s32 *var_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v0_3;
    void *var_v0_6;

    if (func_00D0BAF0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = ((void *)D_008A5CB0);
    }
    if (var_s0 == NULL) {
        var_s0_2 = 0;
    } else {
        if (func_00D0BAF0() == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = ((void *)D_008A5CB0);
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = M2C_FIELD(var_v0_2, s8 *, 0x2B4);
        } else {
            var_v0_3 = 0;
        }
        if (var_v0_3 == 0) {
            var_s0_2 = 0;
        } else if (arg0 != 0) {
            var_s0_2 = M2C_FIELD(var_s0, s32 *, 0x2B0);
        } else {
            var_s0_2 = M2C_FIELD(var_s0, s32 *, 0x2AC);
        }
    }
    var_s1 = 0;
loop_61:
    if (var_s1 >= 2) {
        return 0;
    }
    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0x16144;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0_4 = NULL;
    } else if (var_s1 < 0) {
        var_v0_4 = NULL;
    } else if (var_s1 < 2) {
        var_v0_4 = var_v1 + (var_s1 * 0xC) + 0x60;
    } else {
        var_v0_4 = NULL;
    }
    if (var_v0_4 != NULL) {
        var_v0_5 = *var_v0_4;
    } else {
        var_v0_5 = 0;
    }
    if (var_s0_2 != var_v0_5) {
        var_s1 += 1;
        goto loop_61;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != 0) {
        var_v1_2 = temp_v0_2 + 0x16144;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v0_6 = NULL;
    } else if (var_s1 < 0) {
        var_v0_6 = NULL;
    } else if (var_s1 < 2) {
        var_v0_6 = var_v1_2 + (var_s1 * 0xC) + 0x60;
    } else {
        var_v0_6 = NULL;
    }
    if (var_v0_6 != NULL) {
        var_v0 = M2C_FIELD(var_v0_6, s32 *, 4);
    } else {
        var_v0 = 0;
    }
    return var_v0;
}

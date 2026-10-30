/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828290(s32);                             /* extern */
s32 func_00828320(s32);                             /* extern */
s32 func_008283A0(s32);                             /* extern */
s32 func_00828460();                                /* extern */
s32 func_0082C2A0();                                /* extern */
extern char D_00A03A00[];

s32 func_00933EE0(s32 arg0) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_3;
    s32 *var_v0_2;
    s32 *var_v0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0_5;
    void *var_s0;

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
        var_v0_2 = NULL;
    } else if (arg0 < 0) {
        var_v0_2 = NULL;
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
            var_v0_4 = var_v0_3 + 0x28414;
        } else {
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_v0_5 = *var_v0_4;
        } else {
            var_v0_5 = -1;
        }
        if (arg0 < var_v0_5) {
            var_v0_2 = var_s0 + (arg0 * 0x118) + 4;
        } else {
            var_v0_2 = NULL;
        }
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_s1 = *var_v0_2;
    } else {
        var_s1 = 0;
    }
    temp_s0_2 = func_00828460();
    if (var_s1 == 0) {
        goto block_48;
    }
    var_s2 = 0;
    if (temp_s0_2 > 0) {
loop_43:
        if ((var_s1 == func_008283A0(var_s2)) && !(func_00828320(var_s2) & 0xFF)) {
            return func_00828290(var_s2);
        }
        var_s2 += 1;
        if (var_s2 >= temp_s0_2) {
            goto block_48;
        }
        goto loop_43;
    }
block_48:
    return 0;
}

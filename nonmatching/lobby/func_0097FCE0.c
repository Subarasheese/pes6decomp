/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_0097FC40(M2C_UNK, s32, M2C_UNK, s32);      /* extern */
s32 func_00980590(s32);                             /* extern */
s32 func_009812C0();                                /* extern */

s32 func_0097FCE0(s32 arg0) {
    M2C_UNK var_a0;
    s32 *var_v0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0_3;
    void *var_v0_2;

    if (func_0082C2A0() == 0) {
        var_s0 = 0;
    } else {
        var_s0 = func_009812C0();
    }
    if (var_s0 != 0) {
        temp_v0 = func_00980590(arg0);
        if (temp_v0 < 0) {
            var_v0 = NULL;
        } else if (temp_v0 < 0x19) {
            var_v0 = var_s0 + (temp_v0 * 0x670) + 4;
        } else {
            var_v0 = NULL;
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s2 = *var_v0;
    } else {
        var_s2 = 0;
    }
    temp_s3 = func_0082C2A0();
    if (func_0082C2A0() == 0) {
        var_s0_2 = 0;
    } else {
        var_s0_2 = func_009812C0();
    }
    if (var_s0_2 != 0) {
        temp_v0_2 = func_00980590(arg0);
        if (temp_v0_2 < 0) {
            var_v0_2 = NULL;
        } else if (temp_v0_2 < 0x19) {
            var_v0_2 = var_s0_2 + (temp_v0_2 * 0x670) + 4;
        } else {
            var_v0_2 = NULL;
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_s1 = M2C_FIELD(var_v0_2, s32 *, 4);
    } else {
        var_s1 = 0;
    }
    if (temp_s3 == 0) {
        return 0;
    }
    if (func_0082C2A0() == 0) {
        var_s0_3 = 0;
    } else {
        var_s0_3 = func_009812C0();
    }
    if (var_s0_3 != 0) {
        temp_v0_3 = func_00980590(arg0);
        if (temp_v0_3 < 0) {
            var_v0_3 = 0;
        } else if (temp_v0_3 < 0x19) {
            var_v0_3 = var_s0_3 + (temp_v0_3 * 0x670) + 4;
        } else {
            var_v0_3 = 0;
        }
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 != 0) {
        if (func_00862110(temp_s3, 3) != 1) {
            if (func_00862110(temp_s3, 8) != 1) {
                if (func_00862110(temp_s3, 4) != 1) {
                    if (func_00862110(temp_s3, 5) != 1) {
                        return 0;
                    }
                    var_a0 = 5;
                    goto block_79;
                }
                var_a0 = 4;
                goto block_79;
            }
            var_a0 = 8;
            goto block_79;
        }
        var_a0 = 3;
block_79:
        return func_0097FC40(var_a0, var_s2, 1, var_s1);
    }
    return 0;
}

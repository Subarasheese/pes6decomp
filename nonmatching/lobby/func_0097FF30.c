/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00871690(s32, s32, s32);                   /* extern */
s32 func_00980590(s32);                             /* extern */
s32 func_009812C0();                                /* extern */

s32 func_0097FF30(s32 arg0, s8 arg1) {
    s32 *var_v0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
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
        var_s1 = *var_v0;
    } else {
        var_s1 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 == 0) {
        return 0;
    }
    if (func_0082C2A0() == 0) {
        var_s0_2 = 0;
    } else {
        var_s0_2 = func_009812C0();
    }
    if (var_s0_2 != 0) {
        temp_v0_3 = func_00980590(arg0);
        if (temp_v0_3 < 0) {
            var_v0_2 = NULL;
        } else if (temp_v0_3 < 0x19) {
            var_v0_2 = var_s0_2 + (temp_v0_3 * 0x670) + 4;
        } else {
            var_v0_2 = NULL;
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        M2C_FIELD(var_v0_2, s8 *, 0x258) = arg1;
        if (func_00862110(temp_v0_2, 3) != 1) {
            if (func_00862110(temp_v0_2, 8) != 1) {
                if (func_00862110(temp_v0_2, 4) != 1) {
                    if (func_00862110(temp_v0_2, 5) == 1) {
                        var_s2 = 5;
                        goto block_56;
                    }
                    goto block_67;
                }
                var_s2 = 4;
                goto block_56;
            }
            var_s2 = 8;
            goto block_56;
        }
        var_s2 = 3;
block_56:
        temp_v0_4 = func_0082C2A0();
        if (temp_v0_4 == 0) {
            return 0;
        }
        if (var_s2 >= 0) {
            if (var_s2 < 9) {
                if (func_00871690(temp_v0_4 + (var_s2 * 0x24), var_s1, ((s64) ((s64) arg1 << 0x38) >> 0x38) == 1) == 0) {
                    return 1;
                }
                return 0;
            }
            return 0;
        }
block_67:
        return 0;
    }
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_0097F940(s32);                             /* extern */
s32 func_0097FC40(M2C_UNK, s32, M2C_UNK, s32);      /* extern */
void *func_009812C0();                              /* extern */

s32 func_0097F0F0(s32 arg0) {
    M2C_UNK var_a0;
    s32 *var_v0;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0_3;
    s32 var_v0_6;
    s32 var_v0_9;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;
    void *var_v0_2;
    void *var_v0_4;
    void *var_v0_5;
    void *var_v0_7;
    void *var_v0_8;

    if (func_0082C2A0() == 0) {
        var_s1 = NULL;
    } else {
        var_s1 = func_009812C0();
    }
    if (var_s1 == NULL) {
        var_v0 = NULL;
    } else {
        if (func_0082C2A0() == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = func_009812C0();
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = M2C_FIELD(var_v0_2, s32 *, 0x141E8);
        } else {
            var_v0_3 = 0;
        }
        if (arg0 < var_v0_3) {
            temp_v0 = func_0097F940(arg0);
            if (temp_v0 < 0x19) {
                var_v0 = NULL;
            } else if (temp_v0 < 0x32) {
                var_v0 = var_s1 + (temp_v0 * 0x670) + 4;
            } else {
                var_v0 = NULL;
            }
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s3 = *var_v0;
    } else {
        var_s3 = 0;
    }
    temp_s4 = func_0082C2A0();
    if (func_0082C2A0() == 0) {
        var_s1_2 = NULL;
    } else {
        var_s1_2 = func_009812C0();
    }
    if (var_s1_2 == NULL) {
        var_v0_4 = NULL;
    } else {
        if (func_0082C2A0() == 0) {
            var_v0_5 = NULL;
        } else {
            var_v0_5 = func_009812C0();
        }
        if (var_v0_5 != NULL) {
            var_v0_6 = M2C_FIELD(var_v0_5, s32 *, 0x141E8);
        } else {
            var_v0_6 = 0;
        }
        if (arg0 < var_v0_6) {
            temp_v0_2 = func_0097F940(arg0);
            if (temp_v0_2 < 0x19) {
                var_v0_4 = NULL;
            } else if (temp_v0_2 < 0x32) {
                var_v0_4 = var_s1_2 + (temp_v0_2 * 0x670) + 4;
            } else {
                var_v0_4 = NULL;
            }
        } else {
            var_v0_4 = NULL;
        }
    }
    if (var_v0_4 == NULL) {
        var_v0_4 = NULL;
    }
    if (var_v0_4 != NULL) {
        var_s2 = M2C_FIELD(var_v0_4, s32 *, 4);
    } else {
        var_s2 = 0;
    }
    if (temp_s4 == 0) {
        return 0;
    }
    if (func_0082C2A0() == 0) {
        var_s1_3 = NULL;
    } else {
        var_s1_3 = func_009812C0();
    }
    if (var_s1_3 == NULL) {
        var_v0_7 = NULL;
    } else {
        if (func_0082C2A0() == 0) {
            var_v0_8 = NULL;
        } else {
            var_v0_8 = func_009812C0();
        }
        if (var_v0_8 != NULL) {
            var_v0_9 = M2C_FIELD(var_v0_8, s32 *, 0x141E8);
        } else {
            var_v0_9 = 0;
        }
        if (arg0 < var_v0_9) {
            temp_v0_3 = func_0097F940(arg0);
            if (temp_v0_3 < 0x19) {
                var_v0_7 = NULL;
            } else if (temp_v0_3 < 0x32) {
                var_v0_7 = var_s1_3 + (temp_v0_3 * 0x670) + 4;
            } else {
                var_v0_7 = NULL;
            }
        } else {
            var_v0_7 = NULL;
        }
    }
    if (var_v0_7 != NULL) {
        if (func_00862110(temp_s4, 3) != 1) {
            if (func_00862110(temp_s4, 8) != 1) {
                if (func_00862110(temp_s4, 4) != 1) {
                    if (func_00862110(temp_s4, 5) != 1) {
                        return 0;
                    }
                    var_a0 = 5;
                    goto block_109;
                }
                var_a0 = 4;
                goto block_109;
            }
            var_a0 = 8;
            goto block_109;
        }
        var_a0 = 3;
block_109:
        return func_0097FC40(var_a0, var_s3, 0, var_s2);
    }
    return 0;
}

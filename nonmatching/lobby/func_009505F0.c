/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

u8 *func_009505F0(u32 arg0, s32 arg1) {
    s32 *var_v0_4;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0_10;
    s32 var_v1;
    u16 *var_v0_11;
    u16 *var_v0_5;
    u16 *var_v0_8;
    u16 var_v0_12;
    u16 var_v0_6;
    u16 var_v0_9;
    u32 *var_v0_2;
    u32 var_v0_3;
    u8 *var_v0;
    void *var_v0_7;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x3884;
    } else {
        var_s0 = 0;
    }
    if (var_s0 != 0) {
        if (arg0 >= 0x64U) {
            var_v1 = 0;
        } else {
            temp_v0_2 = func_00936B90();
            if (temp_v0_2 != 0) {
                var_v0_2 = temp_v0_2 + 0x3884;
            } else {
                var_v0_2 = NULL;
            }
            if (var_v0_2 != NULL) {
                var_v0_3 = *var_v0_2;
            } else {
                var_v0_3 = 0;
            }
            if (arg0 < var_v0_3) {
                var_v1 = var_s0 + (arg0 * 0x2F0) + 8;
            } else {
                var_v1 = 0;
            }
        }
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0_4 = NULL;
    } else if (arg1 < 0) {
        var_v0_4 = NULL;
    } else if (arg1 < 8) {
        var_v0_4 = var_v1 + (arg1 * 0xC) + 0x4C;
    } else {
        var_v0_4 = NULL;
    }
    if (var_v0_4 != NULL) {
        var_s2 = *var_v0_4;
    } else {
        var_s2 = 0;
    }
    temp_v0_3 = func_00936B90();
    if (temp_v0_3 != 0) {
        var_v0_5 = temp_v0_3 + 0x4F0;
    } else {
        var_v0_5 = NULL;
    }
    if (var_v0_5 != NULL) {
        var_v0_6 = *var_v0_5;
    } else {
        var_v0_6 = 0;
    }
    temp_s1 = var_v0_6 & 0xFFFF;
    if (temp_s1 == 0) {
        goto block_84;
    }
    if (var_s2 != 0) {
        var_s3 = 0;
loop_83:
        temp_s4 = var_s3 & 0xFFFF;
        if (temp_s4 >= temp_s1) {
            goto block_84;
        }
        temp_v0_4 = func_00936B90();
        if (temp_v0_4 != 0) {
            var_s0_2 = temp_v0_4 + 0x4F0;
        } else {
            var_s0_2 = 0;
        }
        if (var_s0_2 != 0) {
            if (temp_s4 >= 0x64) {
                var_v0_7 = NULL;
            } else {
                temp_v0_5 = func_00936B90();
                if (temp_v0_5 != 0) {
                    var_v0_8 = temp_v0_5 + 0x4F0;
                } else {
                    var_v0_8 = NULL;
                }
                if (var_v0_8 != NULL) {
                    var_v0_9 = *var_v0_8;
                } else {
                    var_v0_9 = 0;
                }
                if (temp_s4 < (var_v0_9 & 0xFFFF)) {
                    var_v0_7 = var_s0_2 + ((var_s3 & 0xFFFF) * 0x84) + 4;
                } else {
                    var_v0_7 = NULL;
                }
            }
        } else {
            var_v0_7 = NULL;
        }
        if (var_v0_7 != NULL) {
            var_v0_10 = M2C_FIELD(var_v0_7, s32 *, 0x34);
        } else {
            var_v0_10 = 0;
        }
        if (var_s2 != var_v0_10) {
            var_s3 = (var_s3 + 1) & 0xFFFF;
            goto loop_83;
        }
        var_s2_2 = var_s3 & 0xFFFF;
    } else {
block_84:
        var_s2_2 = 0x64;
    }
    temp_v0_6 = func_00936B90();
    if (temp_v0_6 != 0) {
        var_s1 = temp_v0_6 + 0x4F0;
    } else {
        var_s1 = 0;
    }
    if (var_s1 != 0) {
        temp_s0 = var_s2_2 & 0xFFFF;
        if (temp_s0 >= 0x64) {
            var_v0 = NULL;
        } else {
            temp_v0_7 = func_00936B90();
            if (temp_v0_7 != 0) {
                var_v0_11 = temp_v0_7 + 0x4F0;
            } else {
                var_v0_11 = NULL;
            }
            if (var_v0_11 != NULL) {
                var_v0_12 = *var_v0_11;
            } else {
                var_v0_12 = 0;
            }
            if (temp_s0 < (var_v0_12 & 0xFFFF)) {
                var_v0 = var_s1 + ((var_s2_2 & 0xFFFF) * 0x84) + 4;
            } else {
                var_v0 = NULL;
            }
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        if (*var_v0 == 0) {
            goto block_113;
        }
    } else {
block_113:
        var_v0 = NULL;
    }
    return var_v0;
}

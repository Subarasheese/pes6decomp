/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */
s32 func_009602B0();                                /* extern */
s32 func_00960370();                                /* extern */

s8 func_0095F540(s32 arg0) {
    s16 var_s0_2;
    s16 var_s4_2;
    s32 *var_v0_16;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 temp_v1_9;
    s8 var_s1;
    u16 *var_v0_12;
    u16 *var_v0_14;
    u16 *var_v0_17;
    u16 *var_v0_19;
    u16 *var_v0_2;
    u16 *var_v0_4;
    u16 *var_v0_7;
    u16 *var_v0_9;
    u16 var_v0_10;
    u16 var_v0_13;
    u16 var_v0_15;
    u16 var_v0_18;
    u16 var_v0_20;
    u16 var_v0_3;
    u16 var_v0_5;
    u16 var_v0_8;
    void *var_v0;
    void *var_v0_11;
    void *var_v0_6;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x3DFD0;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v0 = NULL;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0_2 = temp_v0_2 + 0x3DFD0;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = *var_v0_2;
        } else {
            var_v0_3 = 0;
        }
        temp_v1 = var_v0_3 & 0xFFFF;
        temp_v0_3 = arg0 & 0xFFFF;
        if (temp_v0_3 < temp_v1) {
            temp_v0_4 = func_00936B90();
            if (temp_v0_4 != 0) {
                var_v0_4 = temp_v0_4 + 0x3DFD0;
            } else {
                var_v0_4 = NULL;
            }
            if (var_v0_4 != NULL) {
                var_v0_5 = *var_v0_4;
            } else {
                var_v0_5 = 0;
            }
            temp_v1_2 = ((temp_v1 - temp_v0_3) - 1) & 0xFFFF & 0xFFFF;
            if (temp_v1_2 < (var_v0_5 & 0xFFFF)) {
                var_v0 = var_s0 + (temp_v1_2 * 0xE4) + 4;
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
        var_s1 = M2C_FIELD(var_v0, s8 *, 0x4D);
        temp_v0_5 = func_00936B90();
        if (temp_v0_5 != 0) {
            var_s3 = temp_v0_5 + 0x3DFD0;
        } else {
            var_s3 = 0;
        }
        if (var_s3 == 0) {
            var_v0_6 = NULL;
        } else {
            temp_v0_6 = func_00936B90();
            if (temp_v0_6 != 0) {
                var_v0_7 = temp_v0_6 + 0x3DFD0;
            } else {
                var_v0_7 = NULL;
            }
            if (var_v0_7 != NULL) {
                var_v0_8 = *var_v0_7;
            } else {
                var_v0_8 = 0;
            }
            temp_v1_3 = var_v0_8 & 0xFFFF;
            temp_v0_7 = arg0 & 0xFFFF;
            if (temp_v0_7 < temp_v1_3) {
                temp_v0_8 = func_00936B90();
                if (temp_v0_8 != 0) {
                    var_v0_9 = temp_v0_8 + 0x3DFD0;
                } else {
                    var_v0_9 = NULL;
                }
                if (var_v0_9 != NULL) {
                    var_v0_10 = *var_v0_9;
                } else {
                    var_v0_10 = 0;
                }
                temp_v1_4 = ((temp_v1_3 - temp_v0_7) - 1) & 0xFFFF & 0xFFFF;
                if (temp_v1_4 < (var_v0_10 & 0xFFFF)) {
                    var_v0_6 = var_s3 + (temp_v1_4 * 0xE4) + 4;
                } else {
                    var_v0_6 = NULL;
                }
            } else {
                var_v0_6 = NULL;
            }
        }
        if (var_v0_6 == NULL) {
            var_v0_6 = NULL;
        }
        if (var_v0_6 != NULL) {
            var_s0_2 = M2C_FIELD(var_v0_6, s16 *, 0x4E);
        } else {
            var_s0_2 = 0;
        }
        temp_v0_9 = func_00936B90();
        if (temp_v0_9 != 0) {
            var_s4 = temp_v0_9 + 0x3DFD0;
        } else {
            var_s4 = 0;
        }
        if (var_s4 == 0) {
            var_v0_11 = NULL;
        } else {
            temp_v0_10 = func_00936B90();
            if (temp_v0_10 != 0) {
                var_v0_12 = temp_v0_10 + 0x3DFD0;
            } else {
                var_v0_12 = NULL;
            }
            if (var_v0_12 != NULL) {
                var_v0_13 = *var_v0_12;
            } else {
                var_v0_13 = 0;
            }
            temp_v1_5 = var_v0_13 & 0xFFFF;
            temp_v0_11 = arg0 & 0xFFFF;
            if (temp_v0_11 < temp_v1_5) {
                temp_v0_12 = func_00936B90();
                if (temp_v0_12 != 0) {
                    var_v0_14 = temp_v0_12 + 0x3DFD0;
                } else {
                    var_v0_14 = NULL;
                }
                if (var_v0_14 != NULL) {
                    var_v0_15 = *var_v0_14;
                } else {
                    var_v0_15 = 0;
                }
                temp_v1_6 = ((temp_v1_5 - temp_v0_11) - 1) & 0xFFFF & 0xFFFF;
                if (temp_v1_6 < (var_v0_15 & 0xFFFF)) {
                    var_v0_11 = var_s4 + (temp_v1_6 * 0xE4) + 4;
                } else {
                    var_v0_11 = NULL;
                }
            } else {
                var_v0_11 = NULL;
            }
        }
        if (var_v0_11 == NULL) {
            var_v0_11 = NULL;
        }
        if (var_v0_11 != NULL) {
            var_s4_2 = M2C_FIELD(var_v0_11, s16 *, 0x58);
        } else {
            var_s4_2 = 0;
        }
        temp_v0_13 = func_00936B90();
        if (temp_v0_13 != 0) {
            var_s3_2 = temp_v0_13 + 0x3DFD0;
        } else {
            var_s3_2 = 0;
        }
        if (var_s3_2 == 0) {
            var_v0_16 = NULL;
        } else {
            temp_v0_14 = func_00936B90();
            if (temp_v0_14 != 0) {
                var_v0_17 = temp_v0_14 + 0x3DFD0;
            } else {
                var_v0_17 = NULL;
            }
            if (var_v0_17 != NULL) {
                var_v0_18 = *var_v0_17;
            } else {
                var_v0_18 = 0;
            }
            temp_v1_7 = var_v0_18 & 0xFFFF;
            temp_v0_15 = arg0 & 0xFFFF;
            if (temp_v0_15 < temp_v1_7) {
                temp_v0_16 = func_00936B90();
                if (temp_v0_16 != 0) {
                    var_v0_19 = temp_v0_16 + 0x3DFD0;
                } else {
                    var_v0_19 = NULL;
                }
                if (var_v0_19 != NULL) {
                    var_v0_20 = *var_v0_19;
                } else {
                    var_v0_20 = 0;
                }
                temp_v1_8 = ((temp_v1_7 - temp_v0_15) - 1) & 0xFFFF & 0xFFFF;
                if (temp_v1_8 < (var_v0_20 & 0xFFFF)) {
                    var_v0_16 = var_s3_2 + (temp_v1_8 * 0xE4) + 4;
                } else {
                    var_v0_16 = NULL;
                }
            } else {
                var_v0_16 = NULL;
            }
        }
        if (var_v0_16 == NULL) {
            var_v0_16 = NULL;
        }
        if (var_v0_16 != NULL) {
            var_s2 = *var_v0_16;
        } else {
            var_s2 = 0;
        }
        temp_v0_17 = func_009602B0();
        if (var_s2 == 0) {
            var_v1 = 1;
        } else if (temp_v0_17 == 0) {
            var_v1 = 1;
        } else if (var_s2 != temp_v0_17) {
            var_v1 = 1;
        } else {
            var_v1 = 4;
        }
        if (var_v1 == 4) {
            var_v1_2 = 2;
        } else {
            temp_v0_18 = func_00960370();
            if (var_s2 == 0) {
                var_v1_3 = 1;
            } else if (temp_v0_18 == 0) {
                var_v1_3 = 1;
            } else if (var_s2 != temp_v0_18) {
                var_v1_3 = 1;
            } else {
                var_v1_3 = 4;
            }
            if (var_v1_3 != 4) {
                var_v1_2 = 0;
            } else {
                var_v1_2 = 1;
            }
        }
        if ((var_v1_2 == 1) || ((u32) (var_v1_2 - 2) < 2U)) {
            var_s4_2 -= 1;
            if (var_s4_2 < 0) {
                var_s4_2 = 0;
            }
        }
        temp_v1_9 = (s64) ((s64) var_s1 << 0x38) >> 0x38;
        if (((temp_v1_9 == 5) || (temp_v1_9 == 4) || (temp_v1_9 == 2)) && (var_s0_2 != 0) && (var_s4_2 != 0) && (var_s0_2 == var_s4_2)) {
            var_s1 = 6;
        }
        return var_s1;
    }
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, s32, void *, void *); /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
s32 func_00828160();                                /* extern */
void *func_00841140();                              /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */
s32 func_00936B90();                                /* extern */
void *func_00D0BAF0();                              /* extern */
extern char D_0086A7E0[];

s32 func_0094CA60(void) {
    s32 *var_v0_11;
    s32 temp_a5;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0_14;
    s32 var_v0_17;
    s32 var_v0_6;
    s32 var_v1;
    u16 *var_v0;
    u16 *var_v0_4;
    u16 *var_v0_8;
    u16 var_v0_2;
    u16 var_v0_5;
    u16 var_v0_9;
    u32 *var_v0_10;
    u32 *var_v0_12;
    u32 *var_v0_15;
    u32 var_s0;
    u32 var_s2_2;
    u32 var_v0_13;
    u32 var_v0_16;
    u8 temp_a0;
    void *temp_a6;
    void *temp_a7;
    void *temp_s3;
    void *temp_s5;
    void *temp_v1_2;
    void *var_s0_2;
    void *var_v0_3;
    void *var_v0_7;

    temp_s3 = func_00D0BAF0();
    temp_s5 = func_00841140();
    temp_s2 = func_00828160();
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x4F0;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = *var_v0;
    } else {
        var_v0_2 = 0;
    }
    temp_s6 = var_v0_2 & 0xFFFF;
    if (temp_s6 == 0) {
        goto block_47;
    }
    if (temp_s2 != 0) {
        var_s4 = 0;
loop_46:
        temp_s0 = var_s4 & 0xFFFF;
        if (temp_s0 >= temp_s6) {
            goto block_47;
        }
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_s1 = temp_v0_2 + 0x4F0;
        } else {
            var_s1 = 0;
        }
        if (var_s1 != 0) {
            if (temp_s0 >= 0x64) {
                var_v0_3 = NULL;
            } else {
                temp_v0_3 = func_00936B90();
                if (temp_v0_3 != 0) {
                    var_v0_4 = temp_v0_3 + 0x4F0;
                } else {
                    var_v0_4 = NULL;
                }
                if (var_v0_4 != NULL) {
                    var_v0_5 = *var_v0_4;
                } else {
                    var_v0_5 = 0;
                }
                if (temp_s0 < (var_v0_5 & 0xFFFF)) {
                    var_v0_3 = var_s1 + ((var_s4 & 0xFFFF) * 0x84) + 4;
                } else {
                    var_v0_3 = NULL;
                }
            }
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_6 = M2C_FIELD(var_v0_3, s32 *, 0x34);
        } else {
            var_v0_6 = 0;
        }
        if (temp_s2 != var_v0_6) {
            var_s4 = (var_s4 + 1) & 0xFFFF;
            goto loop_46;
        }
        var_s2 = var_s4 & 0xFFFF;
    } else {
block_47:
        var_s2 = 0x64;
    }
    temp_v0_4 = func_00936B90();
    if (temp_v0_4 != 0) {
        var_s1_2 = temp_v0_4 + 0x4F0;
    } else {
        var_s1_2 = 0;
    }
    if (var_s1_2 != 0) {
        temp_s0_2 = var_s2 & 0xFFFF;
        if (temp_s0_2 >= 0x64) {
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
            if (temp_s0_2 < (var_v0_9 & 0xFFFF)) {
                var_v0_7 = var_s1_2 + ((var_s2 & 0xFFFF) * 0x84) + 4;
            } else {
                var_v0_7 = NULL;
            }
        }
    } else {
        var_v0_7 = NULL;
    }
    if (var_v0_7 != NULL) {
        var_s4_2 = M2C_FIELD(var_v0_7, s32 *, 0x38);
    } else {
        var_s4_2 = 0;
    }
    if (var_s4_2 == 0) {
        goto block_121;
    }
    temp_v0_6 = func_00936B90();
    if (temp_v0_6 != 0) {
        var_v0_10 = temp_v0_6 + 0x3884;
    } else {
        var_v0_10 = NULL;
    }
    if (var_v0_10 != NULL) {
        var_s2_2 = *var_v0_10;
    } else {
        var_s2_2 = 0;
    }
    if (var_s2_2 < 0x65U) {
        var_s0 = 0;
loop_120:
        if (var_s0 >= var_s2_2) {
            goto block_121;
        }
        temp_v0_7 = func_00936B90();
        if (temp_v0_7 != 0) {
            var_s1_3 = temp_v0_7 + 0x3884;
        } else {
            var_s1_3 = 0;
        }
        if (var_s1_3 != 0) {
            if (var_s0 >= 0x64U) {
                var_v0_11 = NULL;
            } else {
                temp_v0_8 = func_00936B90();
                if (temp_v0_8 != 0) {
                    var_v0_12 = temp_v0_8 + 0x3884;
                } else {
                    var_v0_12 = NULL;
                }
                if (var_v0_12 != NULL) {
                    var_v0_13 = *var_v0_12;
                } else {
                    var_v0_13 = 0;
                }
                if (var_s0 < var_v0_13) {
                    var_v0_11 = var_s1_3 + (var_s0 * 0x2F0) + 8;
                } else {
                    var_v0_11 = NULL;
                }
            }
        } else {
            var_v0_11 = NULL;
        }
        if (var_v0_11 != NULL) {
            var_v0_14 = *var_v0_11;
        } else {
            var_v0_14 = 0;
        }
        if (var_s4_2 != var_v0_14) {
            var_s0 += 1;
            goto loop_120;
        }
    } else {
block_121:
        var_s0 = 0x64;
    }
    temp_v0_9 = func_00936B90();
    if (temp_v0_9 != 0) {
        var_s1_4 = temp_v0_9 + 0x3884;
    } else {
        var_s1_4 = 0;
    }
    if (var_s1_4 != 0) {
        if (var_s0 >= 0x64U) {
            var_s0_2 = NULL;
        } else {
            temp_v0_10 = func_00936B90();
            if (temp_v0_10 != 0) {
                var_v0_15 = temp_v0_10 + 0x3884;
            } else {
                var_v0_15 = NULL;
            }
            if (var_v0_15 != NULL) {
                var_v0_16 = *var_v0_15;
            } else {
                var_v0_16 = 0;
            }
            if (var_s0 < var_v0_16) {
                var_s0_2 = var_s1_4 + (var_s0 * 0x2F0) + 8;
            } else {
                var_s0_2 = NULL;
            }
        }
    } else {
        var_s0_2 = NULL;
    }
    if (temp_s5 == NULL) {
        return 0;
    }
    if (var_s0_2 == NULL) {
        return 0;
    }
    if (temp_s3 != NULL) {
        M2C_FIELD(temp_s3, s32 *, 0xF8A0) = (s32) M2C_FIELD(var_s0_2, s32 *, 0);
        M2C_FIELD(temp_s5, s8 *, 0x8D6) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x45);
        M2C_FIELD(temp_s5, s8 *, 0x8D7) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x46);
        M2C_FIELD(temp_s5, s8 *, 0x8E9) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x47);
        M2C_FIELD(temp_s5, s8 *, 0x8EA) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x4A);
        M2C_FIELD(temp_s5, s8 *, 0x8D5) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x4B);
        M2C_FIELD(temp_s5, s8 *, 0x8FF) = (s8) M2C_FIELD(var_s0_2, s8 *, 0xBB);
        M2C_FIELD(temp_s5, s8 *, 0x8EB) = (s8) M2C_FIELD(var_s0_2, s8 *, 0xBA);
        func_001C8590(temp_s5 + 0x894, var_s0_2 + 4, 0x40);
        var_a4 = 0;
        do {
            temp_v1 = var_a4 * 2;
            var_a3 = 0;
            M2C_FIELD((temp_s5 + temp_v1), u16 *, 0x8F0) = (u16) M2C_FIELD((var_s0_2 + temp_v1), u16 *, 0xAC);
            temp_v0_11 = var_a4 * 5;
loop_156:
            temp_v1_2 = temp_s5 + temp_v0_11 + var_a3;
            temp_a0 = M2C_FIELD((var_s0_2 + temp_v0_11 + var_a3), u8 *, 0xB0);
            var_a3 += 1;
            M2C_FIELD(temp_v1_2, u8 *, 0x8F4) = temp_a0;
            if (var_a3 < 5) {
                goto loop_156;
            }
            var_a4 += 1;
        } while (var_a4 < 2);
        var_v1 = 0;
        do {
            var_a0 = 0;
            var_v0_17 = 0;
            temp_a7 = temp_s5 + (var_v1 * 0xB8);
loop_160:
            temp_a6 = var_s0_2 + (var_v0_17 * 0xC);
            temp_a5 = M2C_FIELD(temp_a6, s32 *, 0x4C);
            if (temp_a5 == M2C_FIELD(temp_a7, s32 *, 0)) {
                var_a0 = 1;
                M2C_FIELD(temp_a7, u8 *, 0xB6) = (u8) M2C_FIELD(temp_a6, u8 *, 0x50);
                M2C_FIELD(temp_a7, u8 *, 0xB7) = (u8) M2C_FIELD(temp_a6, u8 *, 0x51);
                M2C_FIELD(temp_a7, s8 *, 0x7E) = (s8) M2C_FIELD(temp_a6, s8 *, 0x52);
                M2C_FIELD(temp_a7, s8 *, 0x7F) = (s8) M2C_FIELD(temp_a6, s8 *, 0x53);
            }
            var_v0_17 += 1;
            if (var_v0_17 < 8) {
                goto loop_160;
            }
            if (var_a0 == 0) {
                M2C_FIELD(temp_a7, s32 *, 0) = 0;
                M2C_FIELD(temp_a7, u8 *, 0xB6) = 0U;
                M2C_FIELD(temp_a7, u8 *, 0xB7) = 0U;
                M2C_FIELD(temp_a7, s8 *, 0x7E) = -1;
                M2C_FIELD(temp_a7, s8 *, 0x7F) = 0;
                M2C_FIELD(temp_a7, s8 *, 0x35) = 0xFF;
                M2C_FIELD(temp_a7, s8 *, 0x49) = 0xFF;
            }
            var_v1 += 1;
        } while (var_v1 < 8);
        func_001C6158(temp_s5, 8, 0xB8, ((void *)D_0086A7E0), 1, temp_a5, temp_a6, temp_a7);
        func_008429F0(1);
        return 1;
    }
    M2C_FIELD(temp_s3, s32 *, 0xF8A0) = 0;
    return 0;
}

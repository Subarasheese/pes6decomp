/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
s32 func_00828160();                                /* extern */
M2C_UNK func_00838940();                            /* extern */
void *func_00841140();                              /* extern */
M2C_UNK func_008429F0(M2C_UNK, s32, s32);           /* extern */
s32 func_00936B90();                                /* extern */
void *func_00D0BAF0();                              /* extern */
extern char D_0086A7E0[];

s32 func_0094CF80(void) {
    s32 *var_v0_11;
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
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_a2_2;
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
    s32 var_v0_6;
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
    u8 temp_v0_12;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_s3;
    void *temp_s5;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
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
    if (temp_s3 == NULL) {
        M2C_FIELD(temp_s3, s32 *, 0xF8A0) = 0;
        return 0;
    }
    func_00838940();
    M2C_FIELD(temp_s3, s32 *, 0xF8A0) = (s32) M2C_FIELD(var_s0_2, s32 *, 0);
    M2C_FIELD(temp_s5, s8 *, 0x8D6) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x45);
    M2C_FIELD(temp_s5, s8 *, 0x8D7) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x46);
    M2C_FIELD(temp_s5, s8 *, 0x8E9) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x47);
    M2C_FIELD(temp_s5, s8 *, 0x8EA) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x4A);
    M2C_FIELD(temp_s5, s8 *, 0x8D5) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x4B);
    M2C_FIELD(temp_s5, u8 *, 0x8FE) = 0U;
    M2C_FIELD(temp_s5, s8 *, 0x8FF) = (s8) M2C_FIELD(var_s0_2, s8 *, 0xBB);
    M2C_FIELD(temp_s5, s8 *, 0x8EB) = (s8) M2C_FIELD(var_s0_2, s8 *, 0xBA);
    M2C_FIELD(temp_s5, s8 *, 0x878) = (s8) M2C_FIELD(temp_s3, s8 *, 0x101A6);
    M2C_FIELD(temp_s5, s8 *, 0x87F) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x48);
    M2C_FIELD(temp_s5, s8 *, 0x880) = (s8) M2C_FIELD(var_s0_2, s8 *, 0x49);
    M2C_FIELD(temp_s5, s8 *, 0x87B) = (s8) M2C_FIELD(var_s0_2, s8 *, 0xBB);
    func_001C8590(temp_s5 + 0x894, var_s0_2 + 4, 0x40);
    var_a4 = 0;
    do {
        temp_v1 = var_a4 * 2;
        var_a3 = 0;
        M2C_FIELD((temp_s5 + temp_v1), u16 *, 0x8F0) = (u16) M2C_FIELD((var_s0_2 + temp_v1), u16 *, 0xAC);
        temp_v0_11 = var_a4 * 5;
loop_154:
        temp_v1_2 = temp_s5 + temp_v0_11 + var_a3;
        temp_a0 = M2C_FIELD((var_s0_2 + temp_v0_11 + var_a3), u8 *, 0xB0);
        var_a3 += 1;
        M2C_FIELD(temp_v1_2, u8 *, 0x8F4) = temp_a0;
        if (var_a3 < 5) {
            goto loop_154;
        }
        var_a4 += 1;
    } while (var_a4 < 2);
    M2C_FIELD(temp_s5, s32 *, 0x800) = 0;
    var_a1 = 0;
    do {
        temp_a0_2 = var_s0_2 + (var_a1 * 0xC);
        temp_v1_3 = temp_s5 + (var_a1 * 0xB8);
        M2C_FIELD(temp_v1_3, s32 *, 0) = (s32) M2C_FIELD(temp_a0_2, s32 *, 0x4C);
        M2C_FIELD(temp_v1_3, u8 *, 0xB6) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x50);
        M2C_FIELD(temp_v1_3, u8 *, 0xB7) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x51);
        M2C_FIELD(temp_v1_3, s8 *, 0x7E) = (s8) M2C_FIELD(temp_a0_2, s8 *, 0x52);
        M2C_FIELD(temp_v1_3, s8 *, 0x7F) = (s8) M2C_FIELD(temp_a0_2, s8 *, 0x53);
        M2C_FIELD(temp_v1_3, u8 *, 0x35) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x54);
        M2C_FIELD(temp_v1_3, u8 *, 0x49) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x55);
        if (M2C_FIELD(temp_v1_3, s32 *, 0) != 0) {
            M2C_FIELD(temp_s5, u8 *, 0x8FE) = (u8) (M2C_FIELD(temp_s5, u8 *, 0x8FE) + 1);
        }
        var_a1 += 1;
    } while (var_a1 < 8);
    func_001C6158(temp_s5, 8, 0xB8, ((void *)D_0086A7E0), var_a4);
    var_a1_2 = 0;
    do {
        temp_a0_3 = temp_s5 + (var_a1_2 * 0xB8);
        temp_v0_12 = M2C_FIELD(temp_a0_3, u8 *, 0x49);
        if (((s32) temp_v0_12 >= 0) && ((s32) temp_v0_12 < 4)) {
            temp_v1_4 = temp_s5 + (temp_v0_12 * 0x10);
            M2C_FIELD(temp_v1_4, s32 *, 0x7C0) = (s32) M2C_FIELD(temp_a0_3, s32 *, 0);
            M2C_FIELD(temp_v1_4, s8 *, 0x7C8) = (s8) M2C_FIELD(temp_a0_3, s8 *, 0x7E);
            M2C_FIELD(temp_s5, s32 *, 0x800) = (s32) (M2C_FIELD(temp_s5, s32 *, 0x800) + 1);
        }
        var_a1_2 += 1;
    } while (var_a1_2 < 8);
    var_a2 = 0;
    M2C_FIELD(temp_s5, s32 *, 0x88C) = 4;
    var_a1_3 = 0;
    M2C_FIELD(temp_s5, s32 *, 0x890) = 4;
    do {
        temp_a0_4 = temp_s5 + (var_a1_3 * 0x10) + 0x7C0;
        if ((var_a2 == 0) && (M2C_FIELD(temp_a0_4, s8 *, 8) == 0)) {
            M2C_FIELD(temp_a0_4, s8 *, 0xB) = 1;
            var_a2 = 1;
            M2C_FIELD(temp_s5, s32 *, 0x88C) = var_a1_3;
        }
        var_a1_3 += 1;
    } while (var_a1_3 < 8);
    var_a1_4 = 0;
    var_a2_2 = 0;
    do {
        temp_a0_5 = temp_s5 + (var_a2_2 * 0x10) + 0x7C0;
        if ((var_a1_4 == 0) && (M2C_FIELD(temp_a0_5, s8 *, 8) == 1)) {
            M2C_FIELD(temp_a0_5, s8 *, 0xB) = 1;
            var_a1_4 = 1;
            M2C_FIELD(temp_s5, s32 *, 0x890) = var_a2_2;
        }
        var_a2_2 += 1;
    } while (var_a2_2 < 8);
    func_008429F0(1, var_a1_4, var_a2_2);
    return 1;
}

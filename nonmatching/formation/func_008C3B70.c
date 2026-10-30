/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008BC3B0();                                /* extern */
s32 func_008BF0E0(u8);                              /* extern */

s32 func_008C3B70(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a6;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a0;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_a1_3;
    u8 temp_a1_4;
    u8 temp_a1_7;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_a2_3;
    void *temp_a3_2;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_a1;
    void *var_a1_2;
    void *var_a4;
    void *var_a7;

    var_s2 = arg1;
    var_s1 = arg2;
    temp_s4 = var_s2 & 0xFF;
    temp_s0 = var_s1 & 0xFF;
    if (temp_s0 == temp_s4) {
        return 0;
    }
    if (func_008BC3B0() != 0) {
        if ((temp_s4 == 0xB) && (M2C_FIELD((M2C_FIELD((temp_s0 + arg0), u8 *, 0x766) + arg0), u8 *, 0x193) != 0)) {
            return 0;
        }
        if ((temp_s0 == 0xB) && (M2C_FIELD((M2C_FIELD(((var_s2 & 0xFF) + arg0), u8 *, 0x766) + arg0), u8 *, 0x193) != 0)) {
            return 0;
        }
        goto block_9;
    }
block_9:
    if (temp_s0 < temp_s4) {
        temp_v0 = var_s1 & 0xFF;
        var_s1 = var_s2 & 0xFF;
        var_s2 = temp_v0 & 0xFF;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 5);
    temp_s0_2 = var_s1 & 0xFF;
    if (temp_s0_2 >= (s32) temp_v1) {
        temp_a1 = var_s2 & 0xFF;
        if (temp_a1 < (s32) temp_v1) {
            if ((M2C_FIELD(arg0, u8 *, 0x73A) == 0) && (M2C_FIELD((M2C_FIELD((temp_s0_2 + arg0), u8 *, 0x766) + arg0), u8 *, 0x33) == 0)) {
                return 0;
            }
            if (M2C_FIELD((M2C_FIELD(((var_s1 & 0xFF) + arg0), u8 *, 0x766) + arg0), u8 *, 0x173) != 0) {
                var_a0 = 1;
                var_a2 = 0;
                if ((s32) temp_v1 > 0) {
                    do {
                        if ((var_a2 != temp_a1) && (M2C_FIELD((arg0 + M2C_FIELD((arg0 + var_a2), u8 *, 0x766)), u8 *, 0x173) != 0)) {
                            var_a0 = (var_a0 + 1) & 0xFF;
                        }
                        var_a2 += 1;
                    } while (var_a2 < (s32) temp_v1);
                }
                if ((s32) M2C_FIELD(arg0, u8 *, 7) < (var_a0 & 0xFF)) {
                    return 0;
                }
                goto block_24;
            }
            goto block_24;
        }
    }
block_24:
    if (((temp_s0_2 < 0xB) && (var_v1 = var_s2 & 0xFF, ((var_v1 < 0xB) != 0))) || ((temp_s0_2 >= 0xB) && (var_v1 = var_s2 & 0xFF, ((var_v1 < 0xB) == 0)))) {
        if ((var_v1 == 0) && (M2C_FIELD(arg0, u8 *, 0x73A) == 0)) {
            temp_a1_2 = var_s1 & 0xFF;
            temp_a3 = M2C_FIELD((temp_a1_2 + arg0), u8 *, 0x766);
            if (M2C_FIELD((temp_a3 + arg0), u8 *, 0x33) == 0) {
                temp_a0 = M2C_FIELD(arg0, u8 *, 0x75C);
                var_a2_2 = 0;
                if ((s32) temp_a0 > 0) {
                    var_a4 = arg0;
loop_33:
                    if (M2C_FIELD(var_a4, u8 *, 0x74F) != M2C_FIELD((arg0 + temp_s0_2), u8 *, 0x766)) {
                        var_a2_2 += 1;
                        var_a4 += 2;
                        if (var_a2_2 >= (s32) temp_a0) {
                            goto block_39;
                        }
                        goto loop_33;
                    }
                    temp_a2 = temp_a1_2 + arg0;
                    temp_a0_2 = (var_s2 & 0xFF) + arg0;
                    temp_a1_3 = M2C_FIELD(temp_a2, u8 *, 0x73F);
                    M2C_FIELD(temp_a2, u8 *, 0x766) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x766);
                    M2C_FIELD(temp_a2, u8 *, 0x73F) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x73F);
                    M2C_FIELD(temp_a0_2, u8 *, 0x766) = temp_a3;
                    M2C_FIELD(temp_a2, u8 *, 0x73F) = temp_a1_3;
                    return 1;
                }
block_39:
                return 0;
            }
        }
        temp_a3_2 = (var_s1 & 0xFF) + arg0;
        temp_a0_3 = (var_s2 & 0xFF) + arg0;
        temp_a2_2 = M2C_FIELD(temp_a3_2, u8 *, 0x766);
        temp_a1_4 = M2C_FIELD(temp_a3_2, u8 *, 0x73F);
        M2C_FIELD(temp_a3_2, u8 *, 0x766) = (u8) M2C_FIELD(temp_a0_3, u8 *, 0x766);
        M2C_FIELD(temp_a3_2, u8 *, 0x73F) = (u8) M2C_FIELD(temp_a0_3, u8 *, 0x73F);
        M2C_FIELD(temp_a0_3, u8 *, 0x766) = temp_a2_2;
        M2C_FIELD(temp_a3_2, u8 *, 0x73F) = temp_a1_4;
        return 1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x75C);
    var_v0 = 0;
    if ((s32) temp_v1_2 > 0) {
        temp_a4 = var_s2 & 0xFF;
        var_a7 = arg0;
loop_43:
        var_a6 = 0;
        if (M2C_FIELD(var_a7, u8 *, 0x74E) == M2C_FIELD((arg0 + temp_s0_2), u8 *, 0x766)) {
            var_a6 = 1 & 0xFF;
        }
        if (M2C_FIELD(var_a7, u8 *, 0x74F) == M2C_FIELD((arg0 + temp_a4), u8 *, 0x766)) {
            var_a6 = (var_a6 + 1) & 0xFF;
        }
        temp_a0_4 = var_a6 & 0xFF;
        if (temp_a0_4 == 2) {
            if ((temp_a4 == 0) && (M2C_FIELD((M2C_FIELD(((var_s2 & 0xFF) + arg0), u8 *, 0x766) + arg0), u8 *, 0x33) == 0)) {
                return 0;
            }
            if (var_v0 < 6) {
                temp_a1_5 = 6 - var_v0;
                if (temp_a1_5 >= 9) {
                    var_a3 = 0;
                    var_a0_2 = 0;
                    var_v1_2 = 0;
                    if ((var_v0 < 7) && (var_v0 < 0x7FFFFFFF)) {
                        var_v1_2 = 1;
                    }
                    if ((var_v1_2 != 0) && (var_v0 != 0x80000000)) {
                        var_a0_2 = 1;
                    }
                    if (var_a0_2 != 0) {
                        var_a2_3 = 1;
                        if (!(-var_v0 & 0x80000000) && (temp_a1_5 & 0x80000000)) {
                            var_a2_3 = 0;
                        }
                        if (var_a2_3 != 0) {
                            var_a3 = 1;
                        }
                    }
                    if (var_a3 != 0) {
                        var_a1 = arg0 + (var_v0 * 2);
                        do {
                            var_v0 += 8;
                            M2C_FIELD(var_a1, u8 *, 0x74E) = (u8) M2C_FIELD(var_a1, u8 *, 0x750);
                            M2C_FIELD(var_a1, u8 *, 0x74F) = (u8) M2C_FIELD(var_a1, u8 *, 0x751);
                            M2C_FIELD(var_a1, u8 *, 0x750) = (u8) M2C_FIELD(var_a1, u8 *, 0x752);
                            M2C_FIELD(var_a1, u8 *, 0x751) = (u8) M2C_FIELD(var_a1, u8 *, 0x753);
                            M2C_FIELD(var_a1, u8 *, 0x752) = (u8) M2C_FIELD(var_a1, u8 *, 0x754);
                            M2C_FIELD(var_a1, u8 *, 0x753) = (u8) M2C_FIELD(var_a1, u8 *, 0x755);
                            M2C_FIELD(var_a1, u8 *, 0x754) = (u8) M2C_FIELD(var_a1, u8 *, 0x756);
                            M2C_FIELD(var_a1, u8 *, 0x755) = (u8) M2C_FIELD(var_a1, u8 *, 0x757);
                            M2C_FIELD(var_a1, u8 *, 0x756) = (u8) M2C_FIELD(var_a1, u8 *, 0x758);
                            M2C_FIELD(var_a1, u8 *, 0x757) = (u8) M2C_FIELD(var_a1, u8 *, 0x759);
                            M2C_FIELD(var_a1, u8 *, 0x758) = (u8) M2C_FIELD(var_a1, u8 *, 0x75A);
                            M2C_FIELD(var_a1, u8 *, 0x759) = (u8) M2C_FIELD(var_a1, u8 *, 0x75B);
                            M2C_FIELD(var_a1, u8 *, 0x75A) = (u8) M2C_FIELD(var_a1, u8 *, 0x75C);
                            M2C_FIELD(var_a1, u8 *, 0x75B) = (u8) M2C_FIELD(var_a1, u8 *, 0x75D);
                            M2C_FIELD(var_a1, u8 *, 0x75C) = (u8) M2C_FIELD(var_a1, u8 *, 0x75E);
                            M2C_FIELD(var_a1, u8 *, 0x75D) = (u8) M2C_FIELD(var_a1, u8 *, 0x75F);
                            var_a1 += 0x10;
                        } while (var_v0 < -2);
                    }
                }
                if (var_v0 < 6) {
                    var_a1_2 = arg0 + (var_v0 * 2);
                    do {
                        var_v0 += 1;
                        M2C_FIELD(var_a1_2, u8 *, 0x74E) = (u8) M2C_FIELD(var_a1_2, u8 *, 0x750);
                        M2C_FIELD(var_a1_2, u8 *, 0x74F) = (u8) M2C_FIELD(var_a1_2, u8 *, 0x751);
                        var_a1_2 += 2;
                    } while (var_v0 < 6);
                }
            }
            M2C_FIELD(arg0, s8 *, 0x75A) = 0xFF;
            M2C_FIELD(arg0, s8 *, 0x75B) = 0xFF;
            M2C_FIELD(arg0, u8 *, 0x75C) = (u8) (M2C_FIELD(arg0, u8 *, 0x75C) - 1);
            return 1;
        }
        if (temp_a0_4 != 1) {
            var_v0 += 1;
            var_a7 += 2;
            if (var_v0 >= (s32) temp_v1_2) {
                goto block_80;
            }
            goto loop_43;
        }
        return 0;
    }
block_80:
    temp_s4_2 = var_s1 & 0xFF;
    temp_v0_2 = temp_s4_2 + arg0;
    temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x766);
    if (M2C_FIELD((temp_v0_3 + arg0), u8 *, 0x173) != 0) {
        var_a3_2 = 1;
        var_a2_4 = 0;
        do {
            if ((var_a2_4 != (var_s2 & 0xFF)) && (M2C_FIELD((arg0 + M2C_FIELD((arg0 + var_a2_4), u8 *, 0x766)), u8 *, 0x173) != 0)) {
                var_a3_2 = (var_a3_2 + 1) & 0xFF;
            }
            var_a2_4 += 1;
        } while (var_a2_4 < 0xB);
        if ((s32) M2C_FIELD(arg0, u8 *, 6) < (var_a3_2 & 0xFF)) {
            return 0;
        }
        goto block_88;
    }
block_88:
    temp_a0_5 = M2C_FIELD(arg0, u8 *, 0x738);
    if ((s32) temp_v1_2 < (s32) temp_a0_5) {
        if (M2C_FIELD(arg0, u8 *, 0x73A) == 0) {
            if (M2C_FIELD((M2C_FIELD(((var_s2 & 0xFF) + arg0), u8 *, 0x766) + arg0), u8 *, 0x53) != 0) {
                temp_v1_3 = temp_v0_3 + arg0;
                if (M2C_FIELD(temp_v1_3, u8 *, 0x53) != 0) {
                    if (M2C_FIELD(temp_v1_3, u8 *, 0x33) == 0) {
                        return 0;
                    }
                    goto block_103;
                }
                return 0;
            }
            return 0;
        }
block_103:
        if (func_008BF0E0(temp_a0_5) == 0) {
            M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x75C) * 2) + arg0), u8 *, 0x74E) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x766);
            M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x75C) * 2) + arg0), u8 *, 0x74F) = (u8) M2C_FIELD(((var_s2 & 0xFF) + arg0), u8 *, 0x766);
            M2C_FIELD(arg0, u8 *, 0x75C) = (u8) (M2C_FIELD(arg0, u8 *, 0x75C) + 1);
        } else {
            var_a3_3 = 0;
            do {
                temp_v1_4 = arg0 + var_a3_3;
                if (M2C_FIELD(temp_v1_4, u8 *, 0x7CF) == M2C_FIELD((arg0 + (var_s2 & 0xFF)), u8 *, 0x766)) {
                    M2C_FIELD(temp_v1_4, u8 *, 0x7CF) = (u8) M2C_FIELD((arg0 + temp_s0_2), u8 *, 0x766);
                }
                var_a3_3 += 1;
            } while (var_a3_3 < 5);
            temp_a1_6 = var_s2 & 0xFF;
            temp_v0_4 = temp_a1_6 + arg0;
            if (M2C_FIELD(arg0, u8 *, 0x7D4) == M2C_FIELD(temp_v0_4, u8 *, 0x766)) {
                M2C_FIELD(arg0, u8 *, 0x7D4) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x766);
            }
            if (M2C_FIELD(arg0, u8 *, 0x74A) == M2C_FIELD(temp_v0_4, u8 *, 0x766)) {
                M2C_FIELD(arg0, u8 *, 0x74A) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x766);
            }
            if (M2C_FIELD(arg0, u8 *, 0x74B) == M2C_FIELD(temp_v0_4, u8 *, 0x766)) {
                M2C_FIELD(arg0, u8 *, 0x74B) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x766);
            }
            temp_a2_3 = temp_s4_2 + arg0;
            temp_v1_5 = temp_a1_6 + arg0;
            temp_a1_7 = M2C_FIELD(temp_a2_3, u8 *, 0x766);
            temp_a0_6 = M2C_FIELD(temp_a2_3, u8 *, 0x73F);
            M2C_FIELD(temp_a2_3, u8 *, 0x766) = (u8) M2C_FIELD(temp_v1_5, u8 *, 0x766);
            M2C_FIELD(temp_a2_3, u8 *, 0x73F) = (u8) M2C_FIELD(temp_v1_5, u8 *, 0x73F);
            M2C_FIELD(temp_v1_5, u8 *, 0x766) = temp_a1_7;
            M2C_FIELD(temp_a2_3, u8 *, 0x73F) = temp_a0_6;
        }
        return 1;
    }
    return 0;
}

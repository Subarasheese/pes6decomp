/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00321E40(s16 *arg0) {
    s16 *var_s0;
    s16 *var_t9;
    s16 var_s1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_s2;
    s32 temp_s3_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a6;
    s32 var_s1_2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_t9_2;
    s8 var_s2;
    s8 var_v0;
    s8 var_v1;
    void *temp_s3;
    void *temp_s4;
    void *var_s5;

    var_v1 = 0;
    var_a1 = 0;
    var_v0 = 1;
    var_s2 = 0;
    var_s1 = 0;
    if (*arg0 > 0) {
        var_s0 = arg0;
        do {
            if (var_a1 != 0) {
                if (M2C_FIELD(var_s0, s16 *, -0xA) != M2C_FIELD(var_s0, s16 *, 6)) {
                    var_s1_2 = 0;
                    if (var_v1 >= 0) {
                        if ((var_v1 + 1) >= 9) {
                            var_s3 = 0;
                            var_a2 = 0;
                            if ((var_v1 >= 0) && (var_v1 < 0x7FFFFFFF)) {
                                var_a2 = 1;
                            }
                            if (var_a2 != 0) {
                                var_s2_2 = 1;
                                if (!(var_v1 & 0x80000000) && ((var_v1 + 1) & 0x80000000)) {
                                    var_s2_2 = 0;
                                }
                                if (var_s2_2 != 0) {
                                    var_s3 = 1;
                                }
                            }
                            if (var_s3 != 0) {
                                temp_a2 = var_a1 - 1;
                                do {
                                    M2C_FIELD((arg0 + ((temp_a2 - var_s1_2) * 0x10)), s8 *, 0x12) = var_v1;
                                    M2C_FIELD((arg0 + (((-2 - var_s1_2) + var_a1) * 0x10)), s8 *, 0x12) = var_v1;
                                    M2C_FIELD((arg0 + ((temp_a2 - (var_s1_2 + 2)) * 0x10)), s8 *, 0x12) = var_v1;
                                    M2C_FIELD((arg0 + ((temp_a2 - (var_s1_2 + 3)) * 0x10)), s8 *, 0x12) = var_v1;
                                    M2C_FIELD((arg0 + ((temp_a2 - (var_s1_2 + 4)) * 0x10)), s8 *, 0x12) = var_v1;
                                    M2C_FIELD((arg0 + ((temp_a2 - (var_s1_2 + 5)) * 0x10)), s8 *, 0x12) = var_v1;
                                    temp_s3 = arg0 + ((temp_a2 - (var_s1_2 + 6)) * 0x10);
                                    temp_s2 = temp_a2 - (var_s1_2 + 7);
                                    var_s1_2 += 8;
                                    M2C_FIELD(temp_s3, s8 *, 0x12) = var_v1;
                                    M2C_FIELD((arg0 + (temp_s2 * 0x10)), s8 *, 0x12) = var_v1;
                                } while ((var_v1 - 8) >= var_s1_2);
                            }
                        }
                        if (var_v1 >= var_s1_2) {
                            do {
                                temp_a2_2 = ((var_a1 - 1) - var_s1_2) * 0x10;
                                var_s1_2 += 1;
                                M2C_FIELD((arg0 + temp_a2_2), s8 *, 0x12) = var_v1;
                            } while (var_v1 >= var_s1_2);
                        }
                    }
                    var_s1 = M2C_FIELD(var_s0, s16 *, -0xA);
                    var_s2 = var_v0;
                    var_v1 = 0;
                    var_v0 = var_a1 + 1;
                    if (var_s2 == 1) {
                        var_a6 = 0;
                        if (var_a1 > 0) {
                            if (var_a1 >= 9) {
                                var_s3_2 = 0;
                                if ((var_a1 >= 0) && (var_a1 < 0x7FFFFFFF)) {
                                    var_s3_2 = 1;
                                }
                                if (var_s3_2 != 0) {
                                    var_t9 = arg0;
                                    do {
                                        var_a6 += 8;
                                        M2C_FIELD(var_t9, s8 *, 0x10) = (s8) (M2C_FIELD(var_t9, s16 *, 6) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x20) = (s8) (M2C_FIELD(var_t9, s16 *, 0x16) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x30) = (s8) (M2C_FIELD(var_t9, s16 *, 0x26) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x40) = (s8) (M2C_FIELD(var_t9, s16 *, 0x36) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x50) = (s8) (M2C_FIELD(var_t9, s16 *, 0x46) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x60) = (s8) (M2C_FIELD(var_t9, s16 *, 0x56) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x70) = (s8) (M2C_FIELD(var_t9, s16 *, 0x66) - M2C_FIELD(var_s0, s16 *, 6));
                                        M2C_FIELD(var_t9, s8 *, 0x80) = (s8) (M2C_FIELD(var_t9, s16 *, 0x76) - M2C_FIELD(var_s0, s16 *, 6));
                                        var_t9 += 0x80;
                                    } while (var_a6 < (var_a1 - 8));
                                }
                            }
                            if (var_a6 < var_a1) {
                                var_s5 = arg0 + (var_a6 * 0x10);
                                do {
                                    var_a6 += 1;
                                    M2C_FIELD(var_s5, s8 *, 0x10) = (s8) (M2C_FIELD(var_s5, s16 *, 6) - M2C_FIELD(var_s0, s16 *, 6));
                                    var_s5 += 0x10;
                                } while (var_a6 < var_a1);
                            }
                        }
                    }
                } else {
                    var_v1 += 1;
                    if (var_a1 == (*arg0 - 1)) {
                        var_t9_2 = 0;
                        if (var_v1 >= 0) {
                            if ((var_v1 + 1) >= 9) {
                                var_a2_2 = 0;
                                var_s3_3 = 0;
                                if ((var_v1 >= 0) && (var_v1 < 0x7FFFFFFF)) {
                                    var_s3_3 = 1;
                                }
                                if (var_s3_3 != 0) {
                                    var_s4 = 1;
                                    if (!(var_v1 & 0x80000000) && ((var_v1 + 1) & 0x80000000)) {
                                        var_s4 = 0;
                                    }
                                    if (var_s4 != 0) {
                                        var_a2_2 = 1;
                                    }
                                }
                                if (var_a2_2 != 0) {
                                    temp_a2_3 = var_a1 - 1;
                                    do {
                                        M2C_FIELD((arg0 + ((temp_a2_3 - var_t9_2) * 0x10)), s8 *, 0x12) = var_v1;
                                        M2C_FIELD((arg0 + (((-2 - var_t9_2) + var_a1) * 0x10)), s8 *, 0x12) = var_v1;
                                        M2C_FIELD((arg0 + ((temp_a2_3 - (var_t9_2 + 2)) * 0x10)), s8 *, 0x12) = var_v1;
                                        M2C_FIELD((arg0 + ((temp_a2_3 - (var_t9_2 + 3)) * 0x10)), s8 *, 0x12) = var_v1;
                                        M2C_FIELD((arg0 + ((temp_a2_3 - (var_t9_2 + 4)) * 0x10)), s8 *, 0x12) = var_v1;
                                        M2C_FIELD((arg0 + ((temp_a2_3 - (var_t9_2 + 5)) * 0x10)), s8 *, 0x12) = var_v1;
                                        temp_s4 = arg0 + ((temp_a2_3 - (var_t9_2 + 6)) * 0x10);
                                        temp_s3_2 = temp_a2_3 - (var_t9_2 + 7);
                                        var_t9_2 += 8;
                                        M2C_FIELD(temp_s4, s8 *, 0x12) = var_v1;
                                        M2C_FIELD((arg0 + (temp_s3_2 * 0x10)), s8 *, 0x12) = var_v1;
                                    } while ((var_v1 - 8) >= var_t9_2);
                                }
                            }
                            if (var_v1 >= var_t9_2) {
                                do {
                                    temp_a2_4 = ((var_a1 - 1) - var_t9_2) * 0x10;
                                    var_t9_2 += 1;
                                    M2C_FIELD((arg0 + temp_a2_4), s8 *, 0x12) = var_v1;
                                } while (var_v1 >= var_t9_2);
                            }
                        }
                    }
                }
            }
            M2C_FIELD(var_s0, s8 *, 0x11) = var_s2;
            M2C_FIELD(var_s0, s16 *, 8) = (s16) var_v0;
            var_a1 += 1;
            M2C_FIELD(var_s0, s8 *, 0x10) = (s8) (var_s1 - M2C_FIELD(var_s0, s16 *, 6));
            var_s0 += 0x10;
        } while (var_a1 < *arg0);
    }
    return 1;
}

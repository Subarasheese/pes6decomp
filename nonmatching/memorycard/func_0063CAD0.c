/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0063CAD0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_t0;
    s32 temp_t3;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6_2;
    s32 var_a7_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_t0;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t8;
    s32 var_v1;
    void *var_a0;
    void *var_a6;
    void *var_a7;
    void *var_t1;

    var_a0 = arg0;
    var_t0 = 0;
    if (arg1 > 0) {
        if (arg1 >= 9) {
            var_v1 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                var_a7 = var_a0;
                do {
                    M2C_FIELD(var_a7, s8 *, 0) = -0x7E;
                    var_t0 += 8;
                    M2C_FIELD(var_a7, s8 *, 1) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 2) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 3) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 4) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 5) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 6) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 7) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 8) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 9) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 0xA) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 0xB) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 0xC) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 0xD) = 0x4F;
                    M2C_FIELD(var_a7, s8 *, 0xE) = -0x7E;
                    M2C_FIELD(var_a7, s8 *, 0xF) = 0x4F;
                    var_a7 += 0x10;
                } while (var_t0 < (arg1 - 8));
            }
        }
        if (var_t0 < arg1) {
            var_a6 = var_a0 + (var_t0 * 2);
            do {
                M2C_FIELD(var_a6, s8 *, 0) = -0x7E;
                var_t0 += 1;
                M2C_FIELD(var_a6, s8 *, 1) = 0x4F;
                var_a6 += 2;
            } while (var_t0 < arg1);
        }
    }
    var_a7_2 = 0;
    if (arg1 > 0) {
        var_t1 = var_a0;
        do {
            temp_t0 = (arg1 - 1) - var_a7_2;
            var_t3 = 1;
            var_t8 = 1;
            if (temp_t0 > 0) {
                if (temp_t0 >= 9) {
                    var_t2 = 0;
                    var_s4 = 0;
                    var_s0 = 0;
                    if ((temp_t0 > 0) && (temp_t0 < 0x7FFFFFFF)) {
                        var_s0 = 1;
                    }
                    if (var_s0 != 0) {
                        temp_s1 = temp_t0 & 0x80000000;
                        var_s3 = 1;
                        if ((temp_s1 == 0x80000000) && (temp_s1 != ((temp_t0 - 1) & 0x80000000))) {
                            var_s3 = 0;
                        }
                        if (var_s3 != 0) {
                            var_s4 = 1;
                        }
                    }
                    if (var_s4 != 0) {
                        var_s1 = 1;
                        if (!((temp_t0 - 1) & 0x80000000) && (temp_t0 & 0x80000000)) {
                            var_s1 = 0;
                        }
                        if (var_s1 != 0) {
                            var_t2 = 1;
                        }
                    }
                    if (var_t2 != 0) {
                        do {
                            var_t8 += 8;
                            var_t3 *= 0x05F5E100;
                        } while ((temp_t0 - 8) >= var_t8);
                    }
                }
                if (temp_t0 >= var_t8) {
                    do {
                        var_t8 += 1;
                        var_t3 *= 0xA;
                    } while (temp_t0 >= var_t8);
                }
            }
            var_a7_2 += 1;
            M2C_FIELD(var_t1, s8 *, 1) = (s8) (M2C_FIELD(var_t1, s8 *, 1) + ((s64) ((s64) ((s32) (arg2 / var_t3) % 10) << 0x38) >> 0x38));
            var_t1 += 2;
        } while (var_a7_2 < arg1);
    }
    if (arg3 != 0) {
        temp_a1 = arg1 - 1;
        var_a3 = 0;
        if (temp_a1 > 0) {
            do {
                temp_s0 = temp_a1 - var_a3;
                var_a5 = 1;
                var_a6_2 = 1;
                if (temp_s0 > 0) {
                    if (temp_s0 >= 9) {
                        var_a4 = 0;
                        var_s2 = 0;
                        var_t2_2 = 0;
                        if ((temp_s0 > 0) && (temp_s0 < 0x7FFFFFFF)) {
                            var_t2_2 = 1;
                        }
                        if (var_t2_2 != 0) {
                            temp_t3 = temp_s0 & 0x80000000;
                            var_s1_2 = 1;
                            if ((temp_t3 == 0x80000000) && (temp_t3 != ((temp_s0 - 1) & 0x80000000))) {
                                var_s1_2 = 0;
                            }
                            if (var_s1_2 != 0) {
                                var_s2 = 1;
                            }
                        }
                        if (var_s2 != 0) {
                            var_t3_2 = 1;
                            if (!((temp_s0 - 1) & 0x80000000) && (temp_s0 & 0x80000000)) {
                                var_t3_2 = 0;
                            }
                            if (var_t3_2 != 0) {
                                var_a4 = 1;
                            }
                        }
                        if (var_a4 != 0) {
                            do {
                                var_a6_2 += 8;
                                var_a5 *= 0x05F5E100;
                            } while ((temp_s0 - 8) >= var_a6_2);
                        }
                    }
                    if (temp_s0 >= var_a6_2) {
                        do {
                            var_a6_2 += 1;
                            var_a5 *= 0xA;
                        } while (temp_s0 >= var_a6_2);
                    }
                }
                if (arg2 < var_a5) {
                    M2C_FIELD(var_a0, s8 *, 0) = -0x7F;
                    M2C_FIELD(var_a0, s8 *, 1) = 0x40;
                }
                var_a3 += 1;
                var_a0 += 2;
            } while (var_a3 < temp_a1);
        }
    }
}

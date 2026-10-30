/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096DA00(void *);                      /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */

void func_0098AC90(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, void *arg4) {
    s32 *var_a4_3;
    s32 temp_a0;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a4_3;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_a6_3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_t0;
    s32 temp_t1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a4;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_t3;
    s32 var_t9;
    s32 var_t9_2;
    void *temp_v0;
    void *var_a1;
    void *var_a1_2;
    void *var_a4_2;
    void *var_s0;
    void *var_s4_2;
    void *var_s4_3;
    void *var_t8;
    void *var_t8_2;
    void *var_t8_3;

    var_s0 = arg4;
    temp_v0 = func_0096DB90(0x1260);
    var_a3 = 0;
    if (arg1 > 0) {
        if (arg1 >= 9) {
            var_a0 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                var_a2 = 0;
                var_a1 = temp_v0;
                var_a0_2 = 1;
                do {
                    M2C_FIELD(var_a1, s32 *, 0) = var_a2;
                    M2C_FIELD(var_a1, s32 *, 4) = var_a0_2;
                    temp_a4 = (var_a3 + 1) * 2;
                    M2C_FIELD(var_a1, s32 *, 8) = temp_a4;
                    var_a2 += 0x10;
                    var_a0_2 += 0x10;
                    M2C_FIELD(var_a1, s32 *, 0xC) = (s32) (temp_a4 + 1);
                    temp_a5 = (var_a3 + 2) * 2;
                    M2C_FIELD(var_a1, s32 *, 0x10) = temp_a5;
                    temp_a6 = (var_a3 + 3) * 2;
                    M2C_FIELD(var_a1, s32 *, 0x14) = (s32) (temp_a5 + 1);
                    M2C_FIELD(var_a1, s32 *, 0x18) = temp_a6;
                    temp_a4_2 = (var_a3 + 4) * 2;
                    M2C_FIELD(var_a1, s32 *, 0x1C) = (s32) (temp_a6 + 1);
                    M2C_FIELD(var_a1, s32 *, 0x20) = temp_a4_2;
                    M2C_FIELD(var_a1, s32 *, 0x24) = (s32) (temp_a4_2 + 1);
                    temp_a4_3 = (var_a3 + 5) * 2;
                    M2C_FIELD(var_a1, s32 *, 0x28) = temp_a4_3;
                    M2C_FIELD(var_a1, s32 *, 0x2C) = (s32) (temp_a4_3 + 1);
                    temp_a6_2 = (var_a3 + 6) * 2;
                    M2C_FIELD(var_a1, s32 *, 0x30) = temp_a6_2;
                    temp_a5_2 = (var_a3 + 7) * 2;
                    M2C_FIELD(var_a1, s32 *, 0x34) = (s32) (temp_a6_2 + 1);
                    M2C_FIELD(var_a1, s32 *, 0x38) = temp_a5_2;
                    var_a3 += 8;
                    M2C_FIELD(var_a1, s32 *, 0x3C) = (s32) (temp_a5_2 + 1);
                    var_a1 += 0x40;
                } while (var_a3 < (arg1 - 8));
            }
        }
        if (var_a3 < arg1) {
            var_a2_2 = var_a3 * 2;
            var_a1_2 = temp_v0 + (var_a3 * 8);
            var_a0_3 = var_a2_2 + 1;
            do {
                M2C_FIELD(var_a1_2, s32 *, 0) = var_a2_2;
                var_a3 += 1;
                M2C_FIELD(var_a1_2, s32 *, 4) = var_a0_3;
                var_a2_2 += 2;
                var_a1_2 += 8;
                var_a0_3 += 2;
            } while (var_a3 < arg1);
        }
    }
    var_t3 = 0;
    if (arg0 > 0) {
        temp_a0 = arg1 - 1;
        temp_t0 = arg1 - 2;
        temp_t1 = arg1 & 0x80000000;
        temp_a6_3 = arg1 - 8;
        do {
            var_t9 = 0;
            if (arg1 > 0) {
                if (arg1 >= 9) {
                    var_a4 = 0;
                    if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                        var_a4 = 1;
                    }
                    if (var_a4 != 0) {
                        var_t8 = temp_v0;
                        var_a4_2 = var_s0;
                        do {
                            var_t9 += 8;
                            M2C_FIELD(var_a4_2, s32 *, 0) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 0)) | (1 << M2C_FIELD(var_t8, s32 *, 4)));
                            M2C_FIELD(var_a4_2, s32 *, 4) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 8)) | (1 << M2C_FIELD(var_t8, s32 *, 0xC)));
                            M2C_FIELD(var_a4_2, s32 *, 8) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 0x10)) | (1 << M2C_FIELD(var_t8, s32 *, 0x14)));
                            M2C_FIELD(var_a4_2, s32 *, 0xC) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 0x18)) | (1 << M2C_FIELD(var_t8, s32 *, 0x1C)));
                            M2C_FIELD(var_a4_2, s32 *, 0x10) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 0x20)) | (1 << M2C_FIELD(var_t8, s32 *, 0x24)));
                            M2C_FIELD(var_a4_2, s32 *, 0x14) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 0x28)) | (1 << M2C_FIELD(var_t8, s32 *, 0x2C)));
                            M2C_FIELD(var_a4_2, s32 *, 0x18) = (s32) ((1 << M2C_FIELD(var_t8, s32 *, 0x30)) | (1 << M2C_FIELD(var_t8, s32 *, 0x34)));
                            temp_s5 = 1 << M2C_FIELD(var_t8, s32 *, 0x38);
                            temp_s4 = 1 << M2C_FIELD(var_t8, s32 *, 0x3C);
                            var_t8 += 0x40;
                            M2C_FIELD(var_a4_2, s32 *, 0x1C) = (s32) (temp_s5 | temp_s4);
                            var_a4_2 += 0x20;
                        } while (var_t9 < temp_a6_3);
                    }
                }
                if (var_t9 < arg1) {
                    var_t8_2 = temp_v0 + (var_t9 * 8);
                    var_a4_3 = var_s0 + (var_t9 * 4);
                    do {
                        var_t9 += 1;
                        temp_s5_2 = 1 << M2C_FIELD(var_t8_2, s32 *, 0);
                        temp_s4_2 = 1 << M2C_FIELD(var_t8_2, s32 *, 4);
                        var_t8_2 += 8;
                        *var_a4_3 = temp_s5_2 | temp_s4_2;
                        var_a4_3 += 4;
                    } while (var_t9 < arg1);
                }
            }
            var_t9_2 = 2;
            if (arg1 >= 3) {
                if (temp_t0 >= 9) {
                    var_s4 = 0;
                    var_s3 = 0;
                    if ((arg1 >= 2) && (arg1 < 0x7FFFFFFF)) {
                        var_s3 = 1;
                    }
                    if (var_s3 != 0) {
                        var_s3_2 = 1;
                        if ((temp_t1 == 0x80000000) && (temp_t1 != (temp_t0 & 0x80000000))) {
                            var_s3_2 = 0;
                        }
                        if (var_s3_2 != 0) {
                            var_s4 = 1;
                        }
                    }
                    if (var_s4 != 0) {
                        var_t8_3 = temp_v0 + 0x10;
                        do {
                            var_t9_2 += 8;
                            M2C_FIELD(var_t8_3, s32 *, -8) = (s32) M2C_FIELD(var_t8_3, s32 *, 0);
                            M2C_FIELD(var_t8_3, s32 *, 0) = (s32) M2C_FIELD(var_t8_3, s32 *, 8);
                            M2C_FIELD(var_t8_3, s32 *, 8) = (s32) M2C_FIELD(var_t8_3, s32 *, 0x10);
                            M2C_FIELD(var_t8_3, s32 *, 0x10) = (s32) M2C_FIELD(var_t8_3, s32 *, 0x18);
                            M2C_FIELD(var_t8_3, s32 *, 0x18) = (s32) M2C_FIELD(var_t8_3, s32 *, 0x20);
                            M2C_FIELD(var_t8_3, s32 *, 0x20) = (s32) M2C_FIELD(var_t8_3, s32 *, 0x28);
                            M2C_FIELD(var_t8_3, s32 *, 0x28) = (s32) M2C_FIELD(var_t8_3, s32 *, 0x30);
                            M2C_FIELD(var_t8_3, s32 *, 0x30) = (s32) M2C_FIELD(var_t8_3, s32 *, 0x38);
                            var_t8_3 += 0x40;
                        } while (var_t9_2 < temp_a6_3);
                    }
                }
                if (var_t9_2 < arg1) {
                    var_s4_2 = temp_v0 + (var_t9_2 * 8);
                    do {
                        var_t9_2 += 1;
                        M2C_FIELD(var_s4_2, s32 *, -8) = (s32) M2C_FIELD(var_s4_2, s32 *, 0);
                        var_s4_2 += 8;
                    } while (var_t9_2 < arg1);
                }
            }
            var_s3_3 = temp_a0;
            if (temp_a0 >= 0) {
                var_s4_3 = temp_v0 + (temp_a0 * 8);
                do {
                    if (temp_a0 == var_s3_3) {
                        M2C_FIELD(var_s4_3, s32 *, 0) = (s32) M2C_FIELD(var_s4_3, s32 *, 4);
                    } else {
                        M2C_FIELD(var_s4_3, s32 *, 0xC) = (s32) M2C_FIELD(var_s4_3, s32 *, 4);
                    }
                    var_s3_3 -= 1;
                    var_s4_3 -= 8;
                } while (var_s3_3 >= 0);
            }
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(temp_v0, s32 *, 8);
            var_t3 += 1;
            var_s0 += 0x50;
        } while (var_t3 < arg0);
    }
    func_0096DA00(temp_v0);
}

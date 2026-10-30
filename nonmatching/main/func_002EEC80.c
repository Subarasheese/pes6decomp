/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A80(void);
M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_002EF110();                            /* extern */

void func_002EEC80(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_5;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 *var_a1;
    u8 *var_a1_4;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s3_3;
    u8 *var_s4_2;
    u8 *var_v0;
    u8 *var_v0_2;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 var_s1_4;
    u8 var_s3_2;

    temp_s7 = func_00223A80();
    func_00223A80();
    temp_s0 = M2C_FIELD(temp_s7, u8 *, 4);
    var_s5 = 0;
    if ((s32) temp_s0 > 0) {
        var_s1 = 0;
        do {
            if ((var_s5 >= 0) && (var_s5 < 0x32)) {
                var_s3 = var_s1 + func_00223A80() + 0xA4;
            } else {
                var_s3 = NULL;
            }
            if (*var_s3 == 0) {
                var_s4 = var_s5 + 1;
                if (var_s4 < (s32) temp_s0) {
                    var_s6 = var_s4 * 0x1440;
loop_10:
                    if ((var_s4 >= 0) && (var_s4 < 0x32)) {
                        var_s2 = var_s6 + func_00223A80() + 0xA4;
                    } else {
                        var_s2 = NULL;
                    }
                    if (*var_s2 == 1) {
                        var_a0 = 0x288;
                        var_a1 = var_s2;
                        do {
                            var_a0 -= 1;
                            temp_v0 = M2C_FIELD(var_a1, s32 *, 4);
                            M2C_FIELD(var_s3, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
                            var_a1 += 8;
                            M2C_FIELD(var_s3, s32 *, 4) = temp_v0;
                            var_s3 += 8;
                        } while (var_a0 > 0);
                        func_001C48E8(var_s2, 0, 0x1440);
                        *var_s2 = 0;
                    } else {
                        var_s4 += 1;
                        var_s6 += 0x1440;
                        if (var_s4 < (s32) temp_s0) {
                            goto loop_10;
                        }
                    }
                }
            }
            var_s5 += 1;
            var_s1 += 0x1440;
        } while (var_s5 < (s32) temp_s0);
    }
    temp_s0_2 = M2C_FIELD(temp_s7, u8 *, 4);
    var_s3_2 = 0;
    var_s1_2 = 0;
    if ((s32) temp_s0_2 > 0) {
        var_s2_2 = 0;
        do {
            if ((var_s1_2 >= 0) && (var_s1_2 < 0x32)) {
                var_v0 = var_s2_2 + func_00223A80() + 0xA4;
            } else {
                var_v0 = NULL;
            }
            if (*var_v0 == 1) {
                var_s3_2 = (var_s3_2 + 1) & 0xFF;
            }
            var_s1_2 += 1;
            var_s2_2 += 0x1440;
        } while (var_s1_2 < (s32) temp_s0_2);
    }
    M2C_FIELD(temp_s7, u8 *, 4) = var_s3_2;
    temp_s0_3 = M2C_FIELD(temp_s7, u8 *, 5) + 0x32;
    var_s2_3 = 0x32;
    if (temp_s0_3 >= 0x33) {
        do {
            if ((var_s2_3 >= 0x32) && (var_s2_3 < 0x96)) {
                temp_v0_2 = func_00223A80();
                temp_v1 = var_s2_3 - 0x32;
                var_a1_2 = temp_v1 >> 1;
                if (temp_v1 < 0) {
                    var_a1_2 = (s32) (temp_v1 + 1) >> 1;
                }
                temp_a0 = var_s2_3 - 0x32;
                var_v1 = temp_a0 & 1;
                if ((temp_a0 < 0) && (var_v1 != 0)) {
                    var_v1 -= 2;
                }
                var_s4_2 = (var_v1 * 0x880) + (((0x31 - var_a1_2) * 0x1440) + temp_v0_2) + 0xA4;
            } else {
                var_s4_2 = NULL;
            }
            if (*var_s4_2 == 0) {
                var_s1_3 = var_s2_3 + 1;
                if (var_s1_3 < temp_s0_3) {
loop_44:
                    if ((var_s1_3 >= 0x32) && (var_s1_3 < 0x96)) {
                        temp_v0_3 = func_00223A80();
                        temp_v1_2 = var_s1_3 - 0x32;
                        var_a1_3 = temp_v1_2 >> 1;
                        if (temp_v1_2 < 0) {
                            var_a1_3 = (s32) (temp_v1_2 + 1) >> 1;
                        }
                        temp_a0_2 = var_s1_3 - 0x32;
                        var_v1_2 = temp_a0_2 & 1;
                        if ((temp_a0_2 < 0) && (var_v1_2 != 0)) {
                            var_v1_2 -= 2;
                        }
                        var_s3_3 = (var_v1_2 * 0x880) + (((0x31 - var_a1_3) * 0x1440) + temp_v0_3) + 0xA4;
                    } else {
                        var_s3_3 = NULL;
                    }
                    if (*var_s3_3 == 1) {
                        var_a0_2 = 0x110;
                        var_a1_4 = var_s3_3;
                        do {
                            var_a0_2 -= 1;
                            temp_v0_4 = M2C_FIELD(var_a1_4, s32 *, 4);
                            M2C_FIELD(var_s4_2, s32 *, 0) = (s32) M2C_FIELD(var_a1_4, s32 *, 0);
                            var_a1_4 += 8;
                            M2C_FIELD(var_s4_2, s32 *, 4) = temp_v0_4;
                            var_s4_2 += 8;
                        } while (var_a0_2 > 0);
                        func_001C48E8(var_s3_3, 0, 0x880);
                        *var_s3_3 = 0;
                    } else {
                        var_s1_3 += 1;
                        if (var_s1_3 < temp_s0_3) {
                            goto loop_44;
                        }
                    }
                }
            }
            var_s2_3 += 1;
        } while (var_s2_3 < temp_s0_3);
    }
    var_s1_4 = 0;
    temp_s0_4 = M2C_FIELD(temp_s7, u8 *, 5) + 0x32;
    var_s2_4 = 0x32;
    if (temp_s0_4 >= 0x33) {
        do {
            if ((var_s2_4 >= 0x32) && (var_s2_4 < 0x96)) {
                temp_v0_5 = func_00223A80();
                temp_v1_3 = var_s2_4 - 0x32;
                var_a1_5 = temp_v1_3 >> 1;
                if (temp_v1_3 < 0) {
                    var_a1_5 = (s32) (temp_v1_3 + 1) >> 1;
                }
                temp_a0_3 = var_s2_4 - 0x32;
                var_v1_3 = temp_a0_3 & 1;
                if ((temp_a0_3 < 0) && (var_v1_3 != 0)) {
                    var_v1_3 -= 2;
                }
                var_v0_2 = (var_v1_3 * 0x880) + (((0x31 - var_a1_5) * 0x1440) + temp_v0_5) + 0xA4;
            } else {
                var_v0_2 = NULL;
            }
            if (*var_v0_2 == 1) {
                var_s1_4 = (var_s1_4 + 1) & 0xFF;
            }
            var_s2_4 += 1;
        } while (var_s2_4 < temp_s0_4);
    }
    M2C_FIELD(temp_s7, u8 *, 5) = var_s1_4;
    func_002EF110();
}

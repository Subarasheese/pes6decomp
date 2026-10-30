/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011F6C50[];

M2C_UNK *func_0018AD70(M2C_UNK *arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a5;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_v1;
    u64 temp_a0_2;
    u64 temp_v0_3;
    u64 var_a1;
    u64 var_a3_3;
    u64 var_a6;
    u64 var_a7;

    temp_a0 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_a0 >= 2U) {
        temp_v1 = M2C_FIELD(arg1, u32 *, 0);
        if (temp_v1 < 2U) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return arg1;
        }
        temp_v0 = temp_v1 ^ 4;
        if ((temp_a0 ^ 4) == 0) {
            if ((temp_v0 == 0) && (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4))) {
                return ((void *)D_011F6C50);
            }
            /* Duplicate return node #3. Try simplifying control flow for better match */
            return arg0;
        }
        if (temp_v0 != 0) {
            temp_v0_2 = temp_a0 ^ 2;
            if ((temp_v1 ^ 2) == 0) {
                if (temp_v0_2 == 0) {
                    M2C_FIELD(arg2, s64 *, 0) = (s64) M2C_FIELD(arg0, u32 *, 0);
                    M2C_FIELD(arg2, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 8);
                    M2C_FIELD(arg2, u64 *, 0x10) = (u64) M2C_FIELD(arg0, u64 *, 0x10);
                    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & M2C_FIELD(arg1, s32 *, 4));
                    return arg2;
                }
                /* Duplicate return node #3. Try simplifying control flow for better match */
                return arg0;
            }
            if (temp_v0_2 != 0) {
                var_a3 = (s32) M2C_FIELD(arg0, s64 *, 8);
                var_a5 = M2C_FIELD(arg1, s32 *, 8);
                var_a7 = M2C_FIELD(arg0, u64 *, 0x10);
                temp_v1_2 = var_a3 - var_a5;
                var_a6 = M2C_FIELD(arg1, u64 *, 0x10);
                if (((temp_v1_2 <= -1) ? -temp_v1_2 : temp_v1_2) < 0x40) {
                    if (var_a5 < var_a3) {
                        do {
                            var_a5 += 1;
                            var_a6 = (var_a6 & 1) | (var_a6 >> 1);
                        } while (var_a5 < var_a3);
                    }
                    if (var_a3 < var_a5) {
                        var_a3_2 = var_a5 - var_a3;
                        do {
                            var_a7 = (var_a7 & 1) | (var_a7 >> 1);
                            var_a3_2 -= 1;
                        } while (var_a3_2 != 0);
                        var_a3 = var_a5;
                    }
                } else if (var_a5 < var_a3) {
                    var_a6 = 0;
                } else {
                    var_a3 = var_a5;
                    var_a7 = 0;
                }
                temp_v0_3 = var_a7 + var_a6;
                if (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4)) {
                    var_v0 = var_a6 - var_a7;
                    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
                        var_v0 = var_a7 - var_a6;
                    }
                    if (var_v0 >= 0) {
                        M2C_FIELD(arg2, s64 *, 8) = var_a3;
                        M2C_FIELD(arg2, u64 *, 0x10) = (u64) var_v0;
                        M2C_FIELD(arg2, s32 *, 4) = 0;
                    } else {
                        M2C_FIELD(arg2, s64 *, 8) = var_a3;
                        M2C_FIELD(arg2, u64 *, 0x10) = (u64) (0 - var_v0);
                        M2C_FIELD(arg2, s32 *, 4) = 1;
                    }
                    var_a1 = M2C_FIELD(arg2, u64 *, 0x10);
                    var_a3_3 = var_a1;
                    if ((u64) ((u64) (-1 << 5) >> 4) >= (u32) (var_a1 - 1)) {
                        do {
                            temp_a0_2 = var_a3_3 * 2;
                            M2C_FIELD(arg2, u64 *, 0x10) = temp_a0_2;
                            M2C_FIELD(arg2, s64 *, 8) = (s32) ((s32) M2C_FIELD(arg2, s64 *, 8) - 1);
                            var_a3_3 = temp_a0_2;
                        } while ((u64) ((u64) (-1 << 5) >> 4) >= (u32) (temp_a0_2 - 1));
                        var_a1 = temp_a0_2;
                    }
                } else {
                    M2C_FIELD(arg2, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4);
                    M2C_FIELD(arg2, s64 *, 8) = var_a3;
                    var_a1 = temp_v0_3;
                    M2C_FIELD(arg2, u64 *, 0x10) = temp_v0_3;
                }
                M2C_FIELD(arg2, s64 *, 0) = 3;
                if ((u64) (-1U >> 3) < var_a1) {
                    M2C_FIELD(arg2, u64 *, 0x10) = (u64) ((var_a1 & 1) | (var_a1 >> 1));
                    M2C_FIELD(arg2, s64 *, 8) = (s32) ((s32) M2C_FIELD(arg2, s64 *, 8) + 1);
                }
                return arg2;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return arg1;
        }
        return arg1;
    }
    return arg0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FD790(void *, void *, void *, s32, u32, s64, u64, s32); /* extern */

s32 func_008FD960(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, u32 arg4) {
    s32 temp_a3;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a7;
    s32 var_t2;
    s64 temp_a1_12;
    s64 temp_a1_15;
    s64 temp_a1_18;
    s64 temp_a1_21;
    s64 temp_a1_24;
    s64 temp_a1_27;
    s64 temp_a1_6;
    s64 temp_a1_9;
    s64 temp_a3_2;
    s64 var_a5;
    u32 var_a4;
    u32 var_t3;
    u64 temp_a1_3;
    u64 temp_t0;
    u64 temp_v0_11;
    u64 temp_v0_14;
    u64 temp_v0_2;
    u64 temp_v0_5;
    u64 temp_v0_8;
    u64 var_a1;
    u64 var_a3;
    u64 var_a6;
    u8 *temp_a1;
    u8 *temp_a1_10;
    u8 *temp_a1_11;
    u8 *temp_a1_13;
    u8 *temp_a1_14;
    u8 *temp_a1_16;
    u8 *temp_a1_17;
    u8 *temp_a1_19;
    u8 *temp_a1_20;
    u8 *temp_a1_22;
    u8 *temp_a1_23;
    u8 *temp_a1_25;
    u8 *temp_a1_26;
    u8 *temp_a1_28;
    u8 *temp_a1_29;
    u8 *temp_a1_2;
    u8 *temp_a1_4;
    u8 *temp_a1_5;
    u8 *temp_a1_7;
    u8 *temp_a1_8;
    u8 *temp_v1_12;
    u8 *temp_v1_13;

    var_a4 = arg4;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x18) - 0x22;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) << 0x22);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1;
    if (temp_v1 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1 = M2C_FIELD(arg0, u8 **, 0x14);
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_2 = temp_a1 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1 << (0x38 - temp_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_2;
            if ((u32) temp_a1_2 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0 = temp_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
        } while (temp_v0 < 0x39);
    }
    temp_v0_2 = M2C_FIELD(arg0, u64 *, 0);
    temp_a3_2 = M2C_FIELD(arg0, s64 *, 8) + 0x22;
    temp_a1_3 = temp_v0_2 >> 0x3D;
    M2C_FIELD(arg0, s64 *, 8) = temp_a3_2;
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x18) - 3;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (temp_v0_2 * 8);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_2;
    if (temp_v1_2 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        var_t3 = temp_a1_3 >> 2;
        var_t2 = temp_a1_3 << 0x1E;
        do {
            temp_a1_4 = M2C_FIELD(arg0, u8 **, 0x14);
            temp_a3_3 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_5 = temp_a1_4 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_4 << (0x38 - temp_a3_3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_5;
            if ((u32) temp_a1_5 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_3 = temp_a3_3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_3;
        } while (temp_v0_3 < 0x39);
    } else {
        var_t3 = temp_a1_3 >> 2;
        var_t2 = temp_a1_3 << 0x1E;
    }
    temp_a1_6 = temp_a3_2 + 3;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_6;
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) * 2);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_3;
    if (temp_v1_3 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1_7 = M2C_FIELD(arg0, u8 **, 0x14);
            temp_a3_4 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_8 = temp_a1_7 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_7 << (0x38 - temp_a3_4)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_8;
            if ((u32) temp_a1_8 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_4 = temp_a3_4 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_4;
        } while (temp_v0_4 < 0x39);
    }
    temp_v0_5 = M2C_FIELD(arg0, u64 *, 0);
    temp_a1_9 = temp_a1_6 + 1;
    var_a3 = temp_v0_5 >> 0x31;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_9;
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x18) - 0xF;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (temp_v0_5 << 0xF);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_4;
    if (temp_v1_4 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        var_a7 = var_a3 << 0xF;
        do {
            temp_a1_10 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_11 = temp_a1_10 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_10 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_11;
            if ((u32) temp_a1_11 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_6 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_6;
        } while (temp_v0_6 < 0x39);
    } else {
        var_a7 = var_a3 << 0xF;
    }
    temp_a1_12 = temp_a1_9 + 0xF;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_12;
    temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) * 2);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_5;
    if (temp_v1_5 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1_13 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_14 = temp_a1_13 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_13 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_14;
            if ((u32) temp_a1_14 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_7 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_7;
        } while (temp_v0_7 < 0x39);
    }
    temp_v0_8 = M2C_FIELD(arg0, u64 *, 0);
    temp_a1_15 = temp_a1_12 + 1;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_15;
    temp_v1_6 = M2C_FIELD(arg0, s32 *, 0x18) - 0xF;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (temp_v0_8 << 0xF);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_6;
    if (temp_v1_6 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1_16 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_17 = temp_a1_16 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_16 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_17;
            if ((u32) temp_a1_17 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_9 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_9;
        } while (temp_v0_9 < 0x39);
    }
    temp_a1_18 = temp_a1_15 + 0xF;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_18;
    temp_v1_7 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) * 2);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_7;
    if (temp_v1_7 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1_19 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_20 = temp_a1_19 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_19 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_20;
            if ((u32) temp_a1_20 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_10 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_10;
        } while (temp_v0_10 < 0x39);
    }
    temp_v0_11 = M2C_FIELD(arg0, u64 *, 0);
    temp_a1_21 = temp_a1_18 + 1;
    var_a6 = temp_v0_11 >> 0x37;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_21;
    temp_v1_8 = M2C_FIELD(arg0, s32 *, 0x18) - 9;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (temp_v0_11 << 9);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_8;
    if (temp_v1_8 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1_22 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_23 = temp_a1_22 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_22 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_23;
            if ((u32) temp_a1_23 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_12 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_12;
        } while (temp_v0_12 < 0x39);
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) var_a6;
    temp_a1_24 = temp_a1_21 + 9;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_24;
    temp_v1_9 = M2C_FIELD(arg0, s32 *, 0x18) - 0x1E;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) << 0x1E);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_9;
    if (temp_v1_9 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        do {
            temp_a1_25 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_26 = temp_a1_25 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_25 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_26;
            if ((u32) temp_a1_26 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_13 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_13;
        } while (temp_v0_13 < 0x39);
    }
    temp_v0_14 = M2C_FIELD(arg0, u64 *, 0);
    temp_a1_27 = temp_a1_24 + 0x1E;
    temp_t0 = temp_v0_14 >> 0x3D;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_27;
    temp_v1_10 = M2C_FIELD(arg0, s32 *, 0x18) - 3;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (temp_v0_14 * 8);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_10;
    if (temp_v1_10 < 0x39) {
        var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
        var_a5 = temp_a1_27;
        do {
            temp_a1_28 = M2C_FIELD(arg0, u8 **, 0x14);
            var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_29 = temp_a1_28 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_28 << (0x38 - var_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_29;
            if ((u32) temp_a1_29 >= var_a4) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_15 = var_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_15;
        } while (temp_v0_15 < 0x39);
    } else {
        var_a5 = temp_a1_27;
    }
    M2C_FIELD(arg0, s64 *, 8) = (s64) (var_a5 + 3);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (var_t2 | var_a7 | (temp_v0_8 >> 0x31));
    var_a1 = 0;
    M2C_FIELD(arg1, u32 *, 8) = var_t3;
    if (temp_t0 != 0) {
        var_a7 = 0x38;
        do {
            temp_v1_11 = M2C_FIELD(arg0, s32 *, 0x18) - 8;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) << 8);
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_11;
            if (temp_v1_11 < 0x39) {
                var_a4 = M2C_FIELD(arg0, u32 *, 0x20);
                var_a6 = var_a1 + 1;
                var_a5 = M2C_FIELD(arg0, s64 *, 8);
                do {
                    temp_v1_12 = M2C_FIELD(arg0, u8 **, 0x14);
                    var_a3 = (u64) M2C_FIELD(arg0, s32 *, 0x18);
                    temp_v1_13 = temp_v1_12 + 1;
                    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_v1_12 << (0x38 - var_a3)));
                    M2C_FIELD(arg0, u8 **, 0x14) = temp_v1_13;
                    if ((u32) temp_v1_13 >= var_a4) {
                        M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
                    }
                    temp_v0_16 = var_a3 + 8;
                    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_16;
                } while (temp_v0_16 < 0x39);
            } else {
                var_a5 = M2C_FIELD(arg0, s64 *, 8);
                var_a6 = var_a1 + 1;
            }
            var_a1 = var_a6;
            M2C_FIELD(arg0, s64 *, 8) = (s64) (var_a5 + 8);
        } while (var_a1 < temp_t0);
    }
    if (((s64) ((s64) M2C_FIELD(arg0, u32 *, 4) << 0x20) >> 0x20) != 0x1BB) {
        M2C_FIELD(arg1, s32 *, 0xC) = 0;
    } else {
        M2C_FIELD(arg1, s32 *, 0xC) = 1;
        func_008FD790(arg0, arg1, arg0, (s32) var_a3, var_a4, var_a5, var_a6, var_a7);
    }
    return 1;
}

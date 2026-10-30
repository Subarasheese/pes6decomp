/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F18D0(void *, void *);
extern void func_001EEE60(void *, void *);
s32 func_00292ED0(u64);                             /* extern */
s32 func_00292F00(u8);                              /* extern */
M2C_UNK func_008BAE50(s8 *, s8 *, s8 *, M2C_UNK);   /* extern */
s8 func_008BB190(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_008BB300(s8 *, s32, u8, M2C_UNK);      /* extern */
M2C_UNK func_008BB3F0(s8 *, s32, s32, u8);          /* extern */

void func_008E3950(void *arg0) {
    s8 sp60;
    s8 sp64;
    s8 sp68;
    s8 sp69;
    s8 sp6A;
    s8 sp6B;
    s8 sp6C;
    s8 sp6D;
    s8 sp6E;
    s8 sp6F;
    s32 temp_s2;
    s32 temp_s2_3;
    u8 temp_s2_2;
    u8 temp_s2_4;
    u8 temp_s2_5;
    u8 temp_s3;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s3_2;
    void *temp_s4;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1E4);
    if (temp_s0 != NULL) {
        temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x23);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x1DB);
        if ((s32) temp_v1 < (s32) temp_s3) {
            temp_s2 = temp_v1 & 0xFF;
            sp68 = 0x20;
            sp6B = 0xFF;
            sp69 = 0x20;
            sp6A = 0x20;
            if (temp_s2 < 0xB) {
                if (M2C_FIELD(arg0, u8 *, 0x1DE) != 3) {
                    func_008BB3F0(&sp6C, func_00292F00(M2C_FIELD((temp_s2 + temp_s0), u8 *, 0x25)), 0, M2C_FIELD((temp_s2 + temp_s0), u8 *, 0x9E));
                    func_008BAE50(&sp6C, &sp6C, &sp68, 0x3C);
                } else {
                    sp6C = 0x80;
                    sp6D = func_008BB190(0xA8, 0xF0, 0x3C);
                    sp6E = 0x80;
                    sp6F = 0xFF;
                }
                temp_a0 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DB) * 4) + arg0), void **, 0x704);
                if (temp_a0 != NULL) {
                    func_001EEE60(temp_a0, &sp6C);
                }
                temp_a0_2 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DB) * 4) + arg0), void **, 0x8C0);
                if (temp_a0_2 != NULL) {
                    func_001F18D0(temp_a0_2, &sp6C);
                }
            } else if (M2C_FIELD(((temp_s2 * 4) + arg0), s32 *, 0x864) != 0) {
                func_008BB3F0(&sp6C, func_00292ED0((u64) ((s64) M2C_FIELD((M2C_FIELD(temp_s0, s32 *, 0x4CC) + (M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x1DA) + temp_s0), u8 *, 2) * 0x2C)), u8 *, 1) << 0x38) >> 0x3C), 1, 1U);
                func_008BAE50(&sp6C, &sp6C, &sp68, 0x3C);
                func_001EEE60(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DB) * 4) + arg0), void **, 0x864), &sp6C);
            }
        }
        temp_s2_2 = M2C_FIELD(arg0, u8 *, 0x1DC);
        if ((s32) temp_s2_2 >= 0xB) {
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x1DA);
            if ((s32) temp_v1_2 < (s32) temp_s3) {
                temp_s2_3 = temp_v1_2 & 0xFF;
                sp68 = 0xFF;
                sp69 = 0xFF;
                sp6A = 0xFF;
                sp6B = 0xFF;
                if (temp_s2_3 < 0xB) {
                    if (M2C_FIELD(arg0, u8 *, 0x1DE) != 3) {
                        func_008BB3F0(&sp6C, func_00292F00(M2C_FIELD((temp_s2_3 + temp_s0), u8 *, 0x25)), 0, M2C_FIELD((temp_s2_3 + temp_s0), u8 *, 0x9E));
                        func_008BAE50(&sp6C, &sp68, &sp6C, 0x3C);
                    } else {
                        sp6C = 0xF0;
                        sp6D = func_008BB190(0xF0, 0x60, 0x3C);
                        sp6E = func_008BB190(0xF0, 0x48, 0x3C);
                        sp6F = 0xFF;
                    }
                    temp_a0_3 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DA) * 4) + arg0), void **, 0x704);
                    if (temp_a0_3 != NULL) {
                        func_001EEE60(temp_a0_3, &sp6C);
                    }
                    temp_a0_4 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DA) * 4) + arg0), void **, 0x8C0);
                    if (temp_a0_4 != NULL) {
                        func_001F18D0(temp_a0_4, &sp6C);
                    }
                } else if (M2C_FIELD(((temp_s2_3 * 4) + arg0), s32 *, 0x864) != 0) {
                    func_008BB3F0(&sp6C, func_00292ED0((u64) ((s64) M2C_FIELD((M2C_FIELD(temp_s0, s32 *, 0x4CC) + (M2C_FIELD((temp_s2_3 + temp_s0), u8 *, 2) * 0x2C)), u8 *, 1) << 0x38) >> 0x3C), 1, 1U);
                    func_008BAE50(&sp6C, &sp68, &sp6C, 0x3C);
                    func_001EEE60(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DA) * 4) + arg0), void **, 0x864), &sp6C);
                }
            }
        } else {
            if (M2C_FIELD(((temp_s2_2 * 4) + arg0), s32 *, 0x8EC) != 0) {
                sp68 = 0xFF;
                sp69 = 0xFF;
                sp6A = 0xFF;
                sp6B = 0xFF;
                func_008BB300(&sp6C, func_00292F00(M2C_FIELD((temp_s2_2 + arg0), u8 *, 0x1C4)), M2C_FIELD((temp_s2_2 + arg0), u8 *, 0x1CF), 0);
                func_008BAE50(&sp6C, &sp68, &sp6C, 0x3C);
                func_001EEE60(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DC) * 4) + arg0), void **, 0x8EC), &sp6C);
            }
            temp_s2_4 = M2C_FIELD(arg0, u8 *, 0x1DA);
            if ((s32) temp_s2_4 < (s32) temp_s3) {
                if ((s32) temp_s2_4 >= 0xB) {
                    temp_s0_2 = M2C_FIELD(((temp_s2_4 * 4) + arg0), void **, 0x864);
                    if ((temp_s0_2 != NULL) && (arg0 != NULL)) {
                        temp_s1 = M2C_FIELD(arg0, void **, 0x1E4);
                        if ((temp_s1 != NULL) && (temp_s0_2 != NULL) && ((s32) temp_s2_4 < 0xB)) {
                            func_008BB3F0(&sp60, func_00292F00(M2C_FIELD((temp_s2_4 + temp_s1), u8 *, 0x25)), (temp_s2_4 & 0xFF) >= 0xB, M2C_FIELD((temp_s2_4 + temp_s1), u8 *, 0x9E));
                            func_001EEE60(temp_s0_2, &sp60);
                        }
                    }
                } else {
                    temp_s3_2 = M2C_FIELD(((temp_s2_4 * 4) + arg0), void **, 0x704);
                    if ((temp_s3_2 != NULL) && (arg0 != NULL)) {
                        temp_s4 = M2C_FIELD(arg0, void **, 0x1E4);
                        if ((temp_s4 != NULL) && (temp_s3_2 != NULL) && ((s32) temp_s2_4 < 0xB)) {
                            func_008BB3F0(&sp64, func_00292F00(M2C_FIELD((temp_s2_4 + temp_s4), u8 *, 0x25)), (temp_s2_4 & 0xFF) >= 0xB, M2C_FIELD((temp_s2_4 + temp_s4), u8 *, 0x9E));
                            func_001EEE60(temp_s3_2, &sp64);
                        }
                    }
                    temp_s2_5 = M2C_FIELD(arg0, u8 *, 0x1DA);
                    if (M2C_FIELD(((temp_s2_5 * 4) + arg0), s32 *, 0x8C0) != 0) {
                        if (M2C_FIELD(arg0, u8 *, 0x1DE) != 3) {
                            func_008BB3F0(&sp6C, func_00292F00(M2C_FIELD((temp_s2_5 + temp_s0), u8 *, 0x25)), 0, M2C_FIELD((temp_s2_5 + temp_s0), u8 *, 0x9E));
                        } else {
                            sp6C = 0xFF;
                            sp6D = 0xFF;
                            sp6E = 0xFF;
                            sp6F = 0xFF;
                        }
                        func_001F18D0(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1DA) * 4) + arg0), void **, 0x8C0), &sp6C);
                    }
                }
            }
        }
    }
}

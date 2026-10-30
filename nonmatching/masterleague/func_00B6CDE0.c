/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern u32 func_00B695D0(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00972D60(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_009BF230();                            /* extern */
M2C_UNK func_00B6AE90(u8);                          /* extern */
M2C_UNK func_00B6B000(u8, M2C_UNK);                 /* extern */
M2C_UNK func_00B6B9C0(s32, s16, s64);               /* extern */
M2C_UNK func_00B6BC90(u8);                          /* extern */
M2C_UNK func_00B6BDB0(s32, u16);                    /* extern */
M2C_UNK func_00B6BF50();                            /* extern */

void func_00B6CDE0(void) {
    f32 var_f1;
    s16 temp_a1;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s3;
    u32 temp_v0;
    u32 temp_v0_10;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_6;
    u32 temp_v0_8;
    u32 var_s0;
    u32 var_s2;
    u8 temp_v0_9;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_7;

    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x10323);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            func_00B6BF50();
            temp_v0_3 = func_00B695D0();
            if (temp_v0_3 != 0) {
                var_s2 = temp_v0_3;
                var_s3 = 0;
                do {
                    if (M2C_FIELD(var_s2, u16 *, 0xC) == 0) {
                        temp_s0 = var_s3 & 0xFF;
                        if (temp_s0 < 0x20) {
                            temp_v0_4 = func_00B695D0();
                            if (temp_v0_4 != 0) {
                                temp_v0_5 = temp_v0_4 + ((temp_s0 & 0xFF) * 0x198);
                                temp_a0 = M2C_FIELD(temp_v0_5, void **, 0x180);
                                if (temp_a0 != NULL) {
                                    func_001D7D60(temp_a0, 0);
                                }
                                temp_a0_2 = M2C_FIELD((temp_v0_5 + 0xC), s32 *, 0x188);
                                if (temp_a0_2 != 0) {
                                    func_00973470(temp_a0_2, 0);
                                }
                            }
                        }
                    } else {
                        temp_s4 = var_s3 & 0xFF;
                        if (temp_s4 < 0x20) {
                            temp_v0_6 = func_00B695D0();
                            if (temp_v0_6 != 0) {
                                temp_v0_7 = temp_v0_6 + ((temp_s4 & 0xFF) * 0x198);
                                temp_a0_3 = M2C_FIELD(temp_v0_7, void **, 0x180);
                                if (temp_a0_3 != NULL) {
                                    func_001D7D60(temp_a0_3, 1);
                                }
                                temp_a0_4 = M2C_FIELD((temp_v0_7 + 0xC), s32 *, 0x188);
                                if (temp_a0_4 != 0) {
                                    func_00973470(temp_a0_4, 1);
                                }
                            }
                        }
                        func_00B6BDB0(var_s3 & 0xFF, M2C_FIELD(var_s2, u16 *, 0xC));
                    }
                    var_s3 += 1;
                    var_s2 += 0x198;
                } while (var_s3 < 0x20);
            }
            func_00B6BC90(M2C_FIELD(temp_v0, u8 *, 0x330D));
            temp_v0_8 = func_00B695D0();
            if (temp_v0_8 != 0) {
                if ((s32) M2C_FIELD(temp_v0_8, u8 *, 0x330C) >= 0xF) {
                    func_001F3D10(M2C_FIELD(temp_v0_8, s32 *, 0x3314), 1U);
                    temp_v0_9 = M2C_FIELD(temp_v0_8, u8 *, 0x330C);
                    if ((s32) temp_v0_9 < 0) {
                        var_f1 = 2.0f * (f32) ((temp_v0_9 >> 1) | (temp_v0_9 & 1));
                    } else {
                        var_f1 = (f32) temp_v0_9;
                    }
                    func_0097F970(M2C_FIELD(temp_v0_8, s32 *, 0x3314), 0, 14.0f / var_f1);
                } else {
                    func_001F3D10(M2C_FIELD(temp_v0_8, s32 *, 0x3314), 0U);
                }
            }
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x3656);
            func_00B6B9C0(-(s32) M2C_FIELD(temp_v0, u8 *, 0x3654), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
            func_00B6B000(M2C_FIELD(temp_v0, u8 *, 0x330D), 0);
            func_00B6AE90(M2C_FIELD(temp_v0, u8 *, 0x330D));
            temp_v0_10 = func_00B695D0();
            if (temp_v0_10 != 0) {
                var_s0 = temp_v0_10;
                var_s1 = 0;
                do {
                    func_00972D60(M2C_FIELD(var_s0, s32 *, 0x3318), 0, 0);
                    func_009737C0(M2C_FIELD(var_s0, s32 *, 0x331C), 0);
                    func_009737C0(M2C_FIELD(var_s0, s32 *, 0x3320), 0);
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0x3324), 0);
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0x3328), 0);
                    var_s1 += 1;
                    var_s0 += 0x24;
                } while (var_s1 < 0x17);
            }
            func_009BF230();
        }
    }
}

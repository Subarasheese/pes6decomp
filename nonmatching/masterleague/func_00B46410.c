/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C390(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
s32 func_00B02A20(u16);                             /* extern */
M2C_UNK func_00B45F30(s32, s16, s64);               /* extern */

void func_00B46410(void) {
    f32 var_f0;
    s16 temp_a1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_v1;
    u16 temp_fp;
    u16 temp_fp_2;
    u16 temp_s4;
    u16 temp_s5;
    u32 temp_v0;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_8;
    u32 temp_v0_9;
    u8 var_s0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_6;
    void *temp_v0_7;

    temp_v0 = func_00B490A0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 0) {
            var_s5 = 0;
            do {
                temp_s2 = var_s5 & 0xFF;
                var_v1 = temp_s2;
                if (temp_s2 < (M2C_FIELD(temp_v0, u8 *, 0x520) + 2)) {
                    if ((temp_s2 != 0) && (temp_s2 != 0xB)) {
                        if ((temp_s2 > 0) && (temp_s2 < 0xB)) {
                            var_v1 = (temp_s2 - 1) & 0xFF;
                        } else if (temp_s2 >= 0xC) {
                            var_v1 = (var_v1 - 2) & 0xFF;
                        }
                        temp_v0_2 = temp_v0 + ((var_v1 & 0xFF) * 2);
                        temp_s4 = M2C_FIELD(temp_v0_2, u16 *, 0x522);
                        temp_fp = M2C_FIELD(temp_v0_2, u16 *, 0x562);
                        temp_v0_3 = func_00970870(temp_s4);
                        if (temp_v0_3 != NULL) {
                            temp_s6 = (var_s5 & 0xFF) * 4;
                            temp_s0 = temp_v0 + temp_s6;
                            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x188), 2, func_0095C390(temp_s4));
                            func_00973760(M2C_FIELD(temp_s0, s32 *, 0x188), 0x10);
                            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x208), 4, func_00B02A20(temp_s4) & 0xFF);
                            func_00956A90(M2C_FIELD(temp_s0, s32 *, 0x88), 4, temp_fp & 0xFFFF, 0);
                            func_00973480(M2C_FIELD(temp_s0, s32 *, 0x108), (u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x38) >> 0x3C);
                            temp_v0_4 = func_00B490A0();
                            if ((temp_v0_4 != 0) && ((M2C_FIELD(temp_v0_4, u8 *, 0x5C4) != 1) || ((temp_s2 != 0) && (temp_s2 != 0xB)))) {
                                temp_s0_2 = temp_v0_4 + temp_s6;
                                func_001D7D60(M2C_FIELD(temp_s0_2, void **, 8), 1);
                                func_00973470(M2C_FIELD(temp_s0_2, s32 *, 0x108), 1);
                                func_00956A80(M2C_FIELD(temp_s0_2, s32 *, 0x88), 1);
                            }
                        }
                    }
                } else {
                    temp_v0_5 = func_00B490A0();
                    if (temp_v0_5 != 0) {
                        if (M2C_FIELD(temp_v0_5, u8 *, 0x5C4) == 1) {
                            if ((temp_s2 != 0) && (temp_s2 != 0xB)) {
                                goto block_39;
                            }
                        } else {
block_39:
                            temp_s0_3 = temp_v0_5 + ((var_s5 & 0xFF) * 4);
                            func_001D7D60(M2C_FIELD(temp_s0_3, void **, 8), 0);
                            func_00973470(M2C_FIELD(temp_s0_3, s32 *, 0x108), 0);
                            func_00956A80(M2C_FIELD(temp_s0_3, s32 *, 0x88), 0);
                        }
                    }
                }
                var_s5 = (var_s5 + 1) & 0xFF;
            } while (var_s5 < 0x20);
        } else {
            var_s4 = 0;
            do {
                temp_s2_2 = var_s4 & 0xFF;
                if (temp_s2_2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x520)) {
                    temp_v0_6 = temp_v0 + (temp_s2_2 * 2);
                    temp_s5 = M2C_FIELD(temp_v0_6, u16 *, 0x522);
                    temp_fp_2 = M2C_FIELD(temp_v0_6, u16 *, 0x562);
                    temp_v0_7 = func_00970870(temp_s5);
                    if (temp_v0_7 != NULL) {
                        temp_s6_2 = temp_s2_2 * 4;
                        temp_s0_4 = temp_v0 + temp_s6_2;
                        func_009737E0(M2C_FIELD(temp_s0_4, s32 *, 0x188), 2, func_0095C390(temp_s5));
                        func_00973760(M2C_FIELD(temp_s0_4, s32 *, 0x188), 0x10);
                        func_009737E0(M2C_FIELD(temp_s0_4, s32 *, 0x208), 4, func_00B02A20(temp_s5) & 0xFF);
                        func_00956A90(M2C_FIELD(temp_s0_4, s32 *, 0x88), 4, temp_fp_2 & 0xFFFF, 0);
                        func_00973480(M2C_FIELD(temp_s0_4, s32 *, 0x108), (u64) ((s64) M2C_FIELD(temp_v0_7, u8 *, 1) << 0x38) >> 0x3C);
                        temp_v0_8 = func_00B490A0();
                        if ((temp_v0_8 != 0) && ((M2C_FIELD(temp_v0_8, u8 *, 0x5C4) != 1) || ((temp_s2_2 != 0) && (temp_s2_2 != 0xB)))) {
                            temp_s0_5 = temp_v0_8 + temp_s6_2;
                            func_001D7D60(M2C_FIELD(temp_s0_5, void **, 8), 1);
                            func_00973470(M2C_FIELD(temp_s0_5, s32 *, 0x108), 1);
                            func_00956A80(M2C_FIELD(temp_s0_5, s32 *, 0x88), 1);
                        }
                    }
                } else {
                    temp_v0_9 = func_00B490A0();
                    if (temp_v0_9 != 0) {
                        if (M2C_FIELD(temp_v0_9, u8 *, 0x5C4) == 1) {
                            if ((temp_s2_2 != 0) && (temp_s2_2 != 0xB)) {
                                goto block_17;
                            }
                        } else {
block_17:
                            temp_s0_6 = temp_v0_9 + ((var_s4 & 0xFF) * 4);
                            func_001D7D60(M2C_FIELD(temp_s0_6, void **, 8), 0);
                            func_00973470(M2C_FIELD(temp_s0_6, s32 *, 0x108), 0);
                            func_00956A80(M2C_FIELD(temp_s0_6, s32 *, 0x88), 0);
                        }
                    }
                }
                var_s4 = (var_s4 + 1) & 0xFF;
            } while (var_s4 < 0x20);
        }
        if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 1) {
            var_s0 = M2C_FIELD(temp_v0, u8 *, 0x520);
        } else {
            var_s0 = (M2C_FIELD(temp_v0, u8 *, 0x520) + 2) & 0xFF;
        }
        if ((M2C_FIELD(temp_v0, u8 *, 0x520) & 0xFF) >= 7) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x310), 1U);
            if ((s32) var_s0 < 0) {
                var_f0 = 2.0f * (f32) ((var_s0 >> 1) | (var_s0 & 1));
            } else {
                var_f0 = (f32) var_s0;
            }
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x310), 0, 6.0f / var_f0);
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x5A4);
            func_00B45F30(-(s32) M2C_FIELD(temp_v0, u8 *, 0x5A2), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x310), 0U);
        }
    }
}

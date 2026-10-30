/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
M2C_UNK func_00207390(void *, M2C_UNK, s32, u16);   /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A09690(void *);                          /* extern */
s32 func_00A0C850(void *);                          /* extern */
s32 func_00A1B4A0(void *, s32);                     /* extern */
s16 func_00A9DFF0(void *, M2C_UNK);                 /* extern */
s32 func_00BBB780(s64);                             /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char Pes6MatchSquads[];

s32 func_00AE6040(void *arg0, void *arg1) {
    s16 var_v0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s4;
    s64 temp_s3;
    s64 temp_s3_2;
    u16 temp_a3;
    u16 temp_s0;
    u16 temp_s5;
    u8 temp_v1;

    temp_a1 = M2C_FIELD(arg1, s32 *, 0x1C);
    if (temp_a1 >= (0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
        if (!(func_00A1B4A0(arg1, temp_a1) & 0xFF)) {
            if ((func_00A0C850(arg1) & 0xFF) >= 0x1E) {
                temp_s0 = func_00A09690(arg1) & 0xFFFF;
                temp_f1 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - M2C_FIELD(arg1, f32 *, 0xE0));
                temp_f0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(arg1, f32 *, 0xE8));
                temp_s3 = (temp_f1 * temp_f1) + (temp_f0 * temp_f0);
                temp_s5 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 2) + arg1), u16 *, 0x128);
                temp_s4 = func_009B30B0(temp_s5, temp_s0) & 0xFFFF;
                if (temp_s4 >= 0x38) {
                    return 0;
                }
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x300) {
                    if (func_00BBB8C0(3) != 0) {
                        return 0;
                    }
                    goto block_28;
                }
                temp_v1 = M2C_FIELD(arg1, u8 *, 0x16);
                if ((temp_v1 != 0xB) && (temp_v1 != 6) && (temp_v1 != 9) && (temp_v1 != 5) && (temp_v1 != 8) && (func_00BBB8C0(3) != 0)) {
                    return 0;
                }
                if ((func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg1, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) << 0x30) >> 0x30) == 0) && (func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg1, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U) << 0x30) >> 0x30) == 0)) {
                    return 0;
                }
block_28:
                temp_s3_2 = (s64) (temp_s3 << 0x20) >> 0x20;
                if ((u32) temp_s3_2 < 0x40000U) {
                    if (M2C_FIELD(arg0, u8 *, 0x16) == 0xD) {
                        if ((((u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39) == 0x10) && ((func_009B30B0(M2C_FIELD(arg1, u16 *, 0x28), M2C_FIELD(arg1, u16 *, 0x26)) & 0xFFFF) < 0x21)) {
                            M2C_FIELD(arg1, u16 *, 0x28) = temp_s0;
                            M2C_FIELD(arg1, u16 *, 0x26) = temp_s0;
                            if ((temp_s4 >= 0x20) && ((u32) temp_s3_2 >= 0x10000U)) {
                                func_00209A00(M2C_FIELD(arg1, void **, 4), 0x10E, 0);
                                var_v0 = 1;
                                M2C_FIELD(arg1, u8 *, 0x16) = 0x12U;
                            } else {
                                func_00209A00(M2C_FIELD(arg1, void **, 4), 0x1CE, 0);
                                M2C_FIELD(arg1, s16 *, 0x38) = func_00A9DFF0(arg1, 0x2D);
                                M2C_FIELD(arg1, u8 *, 0x16) = 0x12U;
                                var_v0 = 4;
                            }
                            M2C_FIELD(arg1, s16 *, 0x18) = var_v0;
                            temp_a3 = M2C_FIELD(arg1, u16 *, 0x26);
                            temp_a2 = (temp_s5 & 0xFFFF) - temp_a3;
                            M2C_FIELD(M2C_FIELD(arg1, void **, 4), s8 *, 0x2D) = (s8) (((temp_a2 + 0x10000) & 0xFFFF) < 0x8001);
                            func_00207390(M2C_FIELD(arg1, void **, 4), 4, temp_a2, temp_a3);
                            goto block_39;
                        }
                        goto block_43;
                    }
block_43:
                    M2C_FIELD(arg1, u8 *, 0x16) = 0x12U;
                    M2C_FIELD(arg1, s16 *, 0x18) = 0;
                    return 1;
                }
block_39:
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}

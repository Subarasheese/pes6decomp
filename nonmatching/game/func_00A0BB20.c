/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 D_003E74CC;

s32 func_00A0BB20(void *arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a2;
    void *temp_v1_3;

    if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x600) {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_v1 != 3) && (temp_v1 != 0x22) && (temp_v1 != 0x23) && (temp_v1 != 0x21) && (temp_v1 != 0x16) && (temp_v1 != 0x17) && (temp_v1 != 0x15) && (temp_v1 != 0x11) && (temp_v1 != 0x2BA) && (temp_v1 != 0xC3) && (temp_v1 != 0xC2) && (temp_v1 != 0xC5) && (temp_v1 != 0xC4) && (temp_v1 != 0xBE) && (temp_v1 != 0xC7) && (temp_v1 != 0xBF) && (temp_v1 != 0xB6) && (temp_v1 != 0x2B4)) {
            return 0;
        }
        temp_v0 = func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
        if (temp_v0 < 0x21) {
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_v0 >= 0x60) {
            temp_a2 = M2C_FIELD(arg0, void **, 4);
            temp_v1_2 = M2C_FIELD(temp_a2, u16 *, 0x30);
            if ((temp_v1_2 != 0xC3) && (temp_v1_2 != 0xC2) && (temp_v1_2 != 0xC5) && (temp_v1_2 != 0xC4) && (temp_v1_2 != 0xBE) && (temp_v1_2 != 0xC7) && (temp_v1_2 != 0xBF) && (temp_v1_2 != 0xB6)) {
                M2C_FIELD(temp_a2, u8 *, 0x2D) = (u8) ((((M2C_FIELD(arg0, u16 *, 0x26) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
            }
            if ((0x1500 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0xBC, 0);
            } else {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0xBD, 0);
            }
            M2C_FIELD(arg0, u16 *, 0x38) = (u16) ((s32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) / (s32) (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
            temp_v1_3 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(temp_v1_3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_v1_3, f32 *, 0x28) * 1.2f);
            temp_a0 = M2C_FIELD(arg0, u16 *, 0x38);
            M2C_FIELD(arg0, u16 *, 0x38) = (u16) (((temp_a0 * 0xE) / 10) + ((u32) (temp_a0 * 0xE) >> 0x1F));
            M2C_FIELD(arg0, u16 *, 0x36) = (u16) arg1;
            M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        } else {
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1901) {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0xC1, 4);
            } else {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0x13, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) ((((M2C_FIELD(arg0, u16 *, 0x26) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
            M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE));
            M2C_FIELD(arg0, u16 *, 0x36) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1800);
            M2C_FIELD(arg0, u16 *, 0x38) = (u16) ((s32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) / (s32) (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
            M2C_FIELD(arg0, s16 *, 0x18) = 0x80;
            func_00207390(M2C_FIELD(arg0, void **, 4), 6);
        }
        return 1;
    }
    return 0;
}

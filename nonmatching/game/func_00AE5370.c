/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_002AE670(s32);
f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00930080(void *, M2C_UNK, s32, M2C_UNK, f32); /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B32D0(u16, u16, M2C_UNK, s32, u16);     /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_009B36C0(void *, M2C_UNK, M2C_UNK, u16, s8); /* extern */
extern f32 *D_003E74CC;
extern s32 Pes6Ball_Current;
extern char D_00591BEC[];
extern char D_005926DE[];

s32 func_00AE5370(void *arg0, void *arg1) {
    f32 var_f12;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 var_s1;
    s8 temp_s2;
    u16 temp_a4;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 temp_s6;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) >= (0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) {
            temp_v0 = func_002AE670((s32) M2C_FIELD(func_00208310(0x2D5), u16 *, 8));
            temp_v0_2 = (temp_v0 * 4) + Pes6Ball_Current;
            temp_f1 = (s32) M2C_FIELD(temp_v0_2, f32 *, 0x47C);
            temp_f0 = (s32) M2C_FIELD(temp_v0_2, f32 *, 0xB7C);
            temp_s0 = func_009B3480(arg0, (f32) temp_f1, (f32) temp_f0) & 0xFFFF;
            temp_s6 = M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 2) + arg0), u16 *, 0x128);
            if ((func_009B30B0(temp_s6, temp_s0) & 0xFFFF) < 0x28) {
                if ((func_009B30B0(M2C_FIELD(arg1, u16 *, 0x26), temp_s6) & 0xFFFF) < 0x28) {
                    func_009B33A0(arg0, temp_f1, temp_f0);
                    func_00208310(0x2D5);
                    temp_s1 = func_00930080(arg0, 0x2D5, temp_v0, 0, *D_003E74CC);
                    temp_v0_3 = func_009B33A0(arg0, temp_f1, temp_f0);
                    if (temp_v0_3 < 0) {
                        var_f12 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
                    } else {
                        var_f12 = (f32) temp_v0_3;
                    }
                    temp_a1 = M2C_FIELD(arg0, s32 *, 0x58);
                    var_s1 = (s32) ((256.0f * ((f32) (s32) func_001CD9E0(var_f12) * (*(f32 *)D_00591BEC))) / (f32) temp_s1);
                    temp_v0_4 = ((temp_a1 * 0x5F) / 100) + ((u32) (temp_a1 * 0x5F) >> 0x1F);
                    if (temp_v0_4 < var_s1) {
                        var_s1 = temp_v0_4;
                    }
                    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
                    temp_v0_5 = temp_v1 + 0x400;
                    if (temp_v0_5 < var_s1) {
                        var_s1 = temp_v0_5;
                    }
                    temp_v0_6 = temp_v1 - 0x800;
                    if (var_s1 < temp_v0_6) {
                        var_s1 = temp_v0_6;
                    }
                    func_00209A00(M2C_FIELD(arg0, void **, 4), 0x2D5, 0);
                    func_00207390(M2C_FIELD(arg0, void **, 4), 8);
                    temp_a4 = M2C_FIELD(arg0, u16 *, 0x10C);
                    temp_a3 = (temp_s0 & 0xFFFF) - temp_a4;
                    temp_s2 = ((temp_a3 + 0x10000) & 0xFFFF) < 0x8001;
                    temp_s0_2 = func_009B32D0(temp_s0, M2C_FIELD(arg0, u16 *, 0x26), 0x1200, temp_a3, temp_a4) & 0xFFFF;
                    func_009B36C0(arg0, 0x2D5, 0x10, temp_s0_2, temp_s2);
                    M2C_FIELD(arg0, s32 *, 0x20) = var_s1;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = temp_s2;
                    M2C_FIELD(arg0, u16 *, 0x28) = temp_s0_2;
                    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
                    M2C_FIELD(arg0, s8 *, 0x66) = 0;
                    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (*(u8 *)D_005926DE);
                    M2C_FIELD(arg0, u8 *, 0x48) = (u8) M2C_FIELD(arg1, u8 *, 0);
                    M2C_FIELD(arg0, s16 *, 0x18) = 0x14;
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}

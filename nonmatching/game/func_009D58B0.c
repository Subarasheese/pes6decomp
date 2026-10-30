/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_00A1FE80(s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern u32 func_00288670(u32, u32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_00C48170(void *, s32, s32, s32, u16);
f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_00A00960(void *, u16);                 /* extern */
s32 func_00AF8180(void *, s32);                     /* extern */
s32 func_00BC03A0(s32);                             /* extern */
extern s32 D_003E74CC;
extern char D_00591BEC[];
extern char Pes6MatchSquads[];

void func_009D58B0(void *arg0) {
    f32 var_f12;
    s32 temp_a0;
    s32 temp_f0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_s2 = func_009B3480(arg0, M2C_FIELD(arg0, f32 *, 0x88), M2C_FIELD(arg0, f32 *, 0x8C)) & 0xFFFF;
    temp_v0 = func_009B33A0(arg0, (s32) M2C_FIELD(arg0, f32 *, 0x88), (s32) M2C_FIELD(arg0, f32 *, 0x8C));
    if (temp_v0 >= 0) {
        var_f12 = (f32) temp_v0;
    } else {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    }
    temp_f0 = (s32) ((*(f32 *)D_00591BEC) * (f32) (s32) func_001CD9E0(var_f12));
    if (temp_f0 >= 0x8001) {
        var_s0 = func_00A13E50(((temp_f0 - 0x8000) / 20) + ((u32) (temp_f0 - 0x8000) >> 0x1F), (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U) * 5) + 0x2080);
    } else {
        var_s0 = 0xC00;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1C) >= var_s0) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), temp_s2) & 0xFFFF) < 0x10)) {
        var_v0 = func_00A13E50(var_s0, 0x1C00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
    } else {
        var_v0 = func_00C48170(arg0, (s32) (u16) M2C_FIELD(arg0, s32 *, 0xA4), var_s0, M2C_FIELD(arg0, s32 *, 0x1C), (u16) temp_s2);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_v0;
    temp_v0_2 = func_00A1FE80(temp_s1, 0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
    M2C_FIELD(arg0, s32 *, 0x1C) = func_00A13E50(M2C_FIELD(arg0, s32 *, 0x1C), ((temp_v0_2 * 0x61) / 100) + ((u32) (temp_v0_2 * 0x61) >> 0x1F));
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_a0 < 0x59A) {
        if (temp_a0 != 0x1B0) {
            M2C_FIELD(arg0, s16 *, 0x2C) = (s16) ((temp_s2 & 0xFFFF) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE));
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) temp_s2;
            temp_v0_3 = func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), temp_s2);
            M2C_FIELD(arg0, u16 *, 0x38) = (u16) (((temp_v0_3 & 0xFFFF) / 18) + ((u32) (temp_v0_3 & 0xFFFF) >> 0x1F));
            M2C_FIELD(arg0, u16 *, 0x38) = (u16) (M2C_FIELD(arg0, u16 *, 0x38) * 2);
            if (func_00AF8180(arg0, temp_s2) == 0) {
                func_00A00960(arg0, M2C_FIELD(arg0, u16 *, 0x38));
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1);
            M2C_FIELD(arg0, u16 *, 0x38) = (u16) (0x8000 / (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xA4) * 4) + D_003E74CC), s32 *, 0x2FD8));
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((M2C_FIELD(arg0, u16 *, 0x38) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
        }
    } else if (func_00BC03A0(temp_a0 & 0xFFFF) != 0x42) {

    } else {
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1);
        M2C_FIELD(arg0, u16 *, 0x38) = (u16) (0x8000 / (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xA4) * 4) + D_003E74CC), s32 *, 0x2FD8));
        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((M2C_FIELD(arg0, u16 *, 0x38) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
    }
}

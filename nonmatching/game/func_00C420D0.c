/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B30B0(s32, s32);
M2C_UNK func_009B36C0(void *, M2C_UNK, M2C_UNK, u16, M2C_UNK); /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E6C[];
extern char D_00591E74[];

void func_00C420D0(void *arg0, s32 arg1) {
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f1;
    s32 temp_f1_2;
    s32 temp_f1_3;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    u16 var_s1;
    u32 temp_s4;
    u32 temp_v0_4;
    u32 var_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E4C)) {
        temp_s4 = arg1 & 0xFF;
        temp_v0 = ((temp_s4 >> 1) * 4) + Pes6Ball_Current;
        var_s1 = func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C)) & 0xFFFF;
        func_009B36C0(arg0, 0x3BB, 0xC, var_s1, 0);
        temp_s3 = temp_s4 * 4;
        temp_v0_2 = temp_s3 + Pes6Ball_Current;
        temp_f1 = (s32) (M2C_FIELD(temp_v0_2, f32 *, 0x47C) - (*(f32 *)D_00591E6C));
        temp_f0 = (s32) (M2C_FIELD(temp_v0_2, f32 *, 0xB7C) - (*(f32 *)D_00591E74));
        var_s0 = (temp_f1 * temp_f1) + (temp_f0 * temp_f0);
        func_009B36C0(arg0, 0x3BB, 0xC, M2C_FIELD(arg0, u16 *, 0xA8), 0);
        temp_v0_3 = temp_s3 + Pes6Ball_Current;
        temp_f1_2 = (s32) (M2C_FIELD(temp_v0_3, f32 *, 0x47C) - (*(f32 *)D_00591E6C));
        temp_f0_2 = (s32) (M2C_FIELD(temp_v0_3, f32 *, 0xB7C) - (*(f32 *)D_00591E74));
        temp_v0_4 = (temp_f1_2 * temp_f1_2) + (temp_f0_2 * temp_f0_2);
        if (temp_v0_4 < var_s0) {
            var_s1 = M2C_FIELD(arg0, u16 *, 0xA8);
            var_s0 = temp_v0_4;
        }
        func_009B36C0(arg0, 0x3BB, 0xC, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF, 0);
        temp_s3_2 = temp_s4 * 4;
        temp_v0_5 = temp_s3_2 + Pes6Ball_Current;
        temp_f1_3 = (s32) (M2C_FIELD(temp_v0_5, f32 *, 0x47C) - (*(f32 *)D_00591E6C));
        temp_f0_3 = (s32) (M2C_FIELD(temp_v0_5, f32 *, 0xB7C) - (*(f32 *)D_00591E74));
        if ((u32) ((temp_f1_3 * temp_f1_3) + (temp_f0_3 * temp_f0_3)) < var_s0) {
            var_s1 = (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF;
        }
        if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1001)) {
            var_s1 = func_009B32D0((s32) var_s1, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF, 0x1000) & 0xFFFF;
        }
        M2C_FIELD(arg0, u16 *, 0x2C) = var_s1;
        temp_v0_6 = temp_s3_2 + Pes6Ball_Current;
        temp_s0 = func_009B3480(arg0, M2C_FIELD(temp_v0_6, f32 *, 0x47C), M2C_FIELD(temp_v0_6, f32 *, 0xB7C)) & 0xFFFF;
        if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x21) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF) < 0x11) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801)) {
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) temp_s0;
            return;
        }
        if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x2C), temp_s0) & 0xFFFF) < 0x21) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x40) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x7D) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), temp_s0) & 0xFFFF) < 0x21)) {
            M2C_FIELD(arg0, u16 *, 0x2C) = func_009B32D0(temp_s0, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF, 0x1000);
        }
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x2C)) & 0xFFFF) >= 0x60) {
            if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0xA8)) & 0xFFFF) < 0x21) {
                goto block_21;
            }
            goto block_18;
        }
block_18:
        if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x2C)) & 0xFFFF) >= 0x40) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1000)) {
block_21:
            M2C_FIELD(arg0, u16 *, 0x2C) = M2C_FIELD(arg0, u16 *, 0x26);
        }
    } else {
        temp_v0_7 = ((arg1 & 0xFF) * 4) + Pes6Ball_Current;
        M2C_FIELD(arg0, u16 *, 0x2C) = func_009B3480(arg0, M2C_FIELD(temp_v0_7, f32 *, 0x47C), M2C_FIELD(temp_v0_7, f32 *, 0xB7C));
    }
}

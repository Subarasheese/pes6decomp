/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B3500(u16, M2C_UNK, s32, u32, u32); /* extern */
extern f32 *D_003E74CC;
extern s32 Pes6Ball_Current;
extern char D_00591E70[];
extern char Pes6MatchSquads[];

void func_00AB3990(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_f0;
    s32 temp_s0;
    u32 temp_a4;
    u32 temp_a5;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_f0 = (s32) M2C_FIELD(temp_v1, f32 *, 0x38);
    temp_a1 = M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u16 *, 8) * 2;
    if (temp_a1 >= temp_f0) {
        temp_s0 = temp_a1 - temp_f0;
        temp_a3 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        temp_a5 = temp_a3 * -0x60;
        temp_a4 = temp_a5 >> 0x1F;
        temp_a3_2 = ((temp_a3 * -0x60) / 183) + temp_a4;
        if (M2C_FIELD(((temp_s0 * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) temp_a3_2) {
            func_009B3500(M2C_FIELD(temp_v1, u16 *, 0x30), 0, temp_a3_2, temp_a4, temp_a5);
            temp_a1_2 = temp_s0 + 1;
            M2C_FIELD(arg0, f32 *, 0xF4) = (f32) ((M2C_FIELD(((temp_a1_2 * 4) + Pes6Ball_Current), f32 *, 0x7FC) - (*(f32 *)D_00591E70)) / (f32) temp_a1_2);
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xF4);
            temp_f2 = *D_003E74CC;
            var_f0 = 2.0f * temp_f2;
            if (!(temp_f1 <= var_f0) || (var_f0 = -2.0f * temp_f2, (temp_f1 < var_f0))) {
                M2C_FIELD(arg0, f32 *, 0xF4) = var_f0;
            }
            var_f0_2 = M2C_FIELD(arg0, f32 *, 0xE4) + M2C_FIELD(arg0, f32 *, 0xF4);
            goto block_6;
        }
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xF4) = 0.0f;
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xE4);
    if (!(temp_f2_2 < 2.0f)) {
        var_f0_2 = temp_f2_2 - 2.0f;
        goto block_6;
    }
    if (!(temp_f2_2 <= -2.0f)) {
        M2C_FIELD(arg0, f32 *, 0xE4) = 0.0f;
    } else {
        var_f0_2 = M2C_FIELD(arg0, f32 *, 0xE4) + 2.0f;
block_6:
        M2C_FIELD(arg0, f32 *, 0xE4) = var_f0_2;
    }
}

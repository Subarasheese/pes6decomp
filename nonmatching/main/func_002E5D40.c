/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern s32 func_00365250(s32, s32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001C4730(f32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_001F3D80(s32, f32 *, M2C_UNK);         /* extern */
extern char D_003B3720[];
extern char D_003B3780[];
extern char D_003F7790[];

void func_002E5D40(void *arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 temp_f1;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    u32 temp_s1;
    u32 temp_s2;
    u8 temp_s2_2;
    void *var_s0;
    void *var_s1_2;
    void *var_s3;

    var_s0 = arg0;
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        var_s1 = 0;
        temp_s2 = (u32) (*(u32 *)D_003F7790) % 46U;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x28);
            if (temp_a0 != 0) {
                func_001F3D10(temp_a0, 0U);
                func_001D7D80(M2C_FIELD(M2C_FIELD(var_s0, s32 *, 0x28), void **, 0x48), (s16) ((s64) ((s64) temp_s2 << 0x30) >> 0x30));
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        return;
    }
    var_s2 = 0;
    var_s1_2 = var_s0;
    do {
        if (M2C_FIELD(var_s1_2, s32 *, 0x28) == 0) {
            M2C_FIELD(var_s1_2, s32 *, 0x28) = func_00365250(M2C_FIELD(var_s0, s32 *, 0x18), var_s2);
        }
        temp_a0_2 = M2C_FIELD(var_s0, s32 *, 4);
        temp_v1 = M2C_FIELD(M2C_FIELD(var_s0, void **, 0), s32 *, 0);
        if ((temp_a0_2 == 0) || (temp_a0_2 == 1) || (temp_a0_2 == 3)) {
            func_001C4730(&sp60, ((void *)D_003B3720) + (temp_v1 * 0x10), 0x10);
        } else {
            func_001C4730(&sp60, ((void *)D_003B3780) + (temp_v1 * 0x10), 0x10);
        }
        if (var_s2 != 0) {
            var_f0 = 1.0f + (sp60 + sp68);
        } else {
            var_f0 = sp60 - 14.0f;
        }
        sp68 = 0.0f;
        sp60 = var_f0;
        temp_f1 = 0.5f * sp6C;
        sp6C = 0.0f;
        sp64 = temp_f1 - 7.0f;
        func_001F3D80(M2C_FIELD(var_s1_2, s32 *, 0x28), &sp60, 0);
        var_s2 += 1;
        var_s1_2 += 4;
    } while (var_s2 < 2);
    var_s4 = 0;
    var_s3 = var_s0;
    temp_s2_2 = M2C_FIELD(M2C_FIELD(var_s0, void **, 0), u8 *, 0xA);
    temp_s1 = (u32) (*(u32 *)D_003F7790) % 46U;
    do {
        temp_a0_3 = M2C_FIELD(var_s3, s32 *, 0x28);
        if (temp_a0_3 != 0) {
            func_001F3D10(temp_a0_3, temp_s2_2 & M2C_FIELD(var_s0, u8 *, 0x14) & 0xFF);
            func_001D7D80(M2C_FIELD(M2C_FIELD(var_s3, s32 *, 0x28), void **, 0x48), (s16) ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
        }
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 2);
}

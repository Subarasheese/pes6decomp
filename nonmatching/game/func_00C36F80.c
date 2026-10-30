/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B37F0(void *, void *, void *, s32); /* extern */
void *func_00B2A420(u8);                            /* extern */
M2C_UNK func_00B84790(void *, u16, u16, u8, M2C_UNK, f32); /* extern */
extern char D_00CCB690[];

s32 func_00C36F80(void *arg0, s32 arg1) {
    f32 var_f1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a3;
    u16 temp_v1;
    u32 temp_a2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a2;

    temp_v0 = func_00B2A420(M2C_FIELD(arg0, u8 *, 0));
    temp_v0_2 = M2C_FIELD(temp_v0, void **, 4);
    temp_a2 = M2C_FIELD(temp_v0_2, u8 *, 0x54) - 1;
    if (temp_a2 >= 4U) {
        return 0;
    }
    var_a3 = 0;
    temp_a1 = ((void *)D_00CCB690) + (temp_a2 * 0x94);
    var_a2 = temp_a1;
loop_4:
    if (*M2C_FIELD(temp_v0, u8 **, 0) != M2C_FIELD(var_a2, u8 *, 0x70)) {
        var_a3 += 1;
        var_a2 += 1;
        if (var_a3 >= 8) {

        } else {
            goto loop_4;
        }
    }
    temp_v1 = M2C_FIELD(((var_a3 * 2) + temp_a1), u16 *, 0x78);
    temp_a1_2 = M2C_FIELD(arg0, void **, 4);
    if ((s32) temp_v1 >= 0) {
        var_f1 = (f32) temp_v1;
    } else {
        var_f1 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
    }
    if (!(M2C_FIELD(temp_a1_2, f32 *, 0x38) < var_f1)) {
        return 0;
    }
    temp_a0 = M2C_FIELD(temp_a1_2, void **, 4);
    if ((M2C_FIELD(temp_a0, u16 *, 0x1A) != 0) && (M2C_FIELD(temp_a0, u8 *, 0xD) & 1)) {
        var_a0 = 0xFFFF & 0xFFFF;
    } else {
        var_a0 = 0xFF;
    }
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x42);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) * (arg1 & 0xFFFF)) / (s32) (var_a0 & 0xFFFF));
    temp_s1 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38);
    func_009B37F0(arg0, temp_a1_2, var_a2, var_a3);
    temp_v0_3 = M2C_FIELD(arg0, void **, 4);
    func_00B84790(temp_v0, M2C_FIELD(temp_v0_3, u16 *, 0x30), M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_v0_3, u8 *, 0x2D), 1, (f32) temp_s1);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) - M2C_FIELD(arg0, f32 *, 0xF0));
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(arg0, f32 *, 0xF8));
    return 1;
}

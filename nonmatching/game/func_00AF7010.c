/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B3070(s32, s32);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK); /* extern */
extern s32 D_003E74CC;
extern void *Pes6Ball_Current;

void func_00AF7010(void *arg0) {
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_s0;
    s32 var_a5;
    s32 var_v1;
    u16 temp_a2;
    u8 temp_a1;
    void *temp_a0;

    temp_s0 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x49C), M2C_FIELD(Pes6Ball_Current, f32 *, 0xB9C)) & 0xFFFF;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    var_a5 = 0;
    temp_a4 = temp_s0 - M2C_FIELD(arg0, u16 *, 0x26);
    temp_a3 = ((temp_a4 + 0x10000) & 0xFFFF) < 0x8001;
    temp_a2 = M2C_FIELD(temp_a0, u16 *, 0x30);
    var_v1 = 0;
    if ((temp_a2 != 0xB9) && (temp_a2 != 0x2B5)) {

    } else {
        temp_a1 = M2C_FIELD(temp_a0, u8 *, 0x2D);
        if (temp_a1 == (temp_a3 & 0xFF)) {
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((M2C_FIELD(arg0, u16 *, 0x38) * ((temp_a1 != 0) ? -1 : 1)) & 0xFFFF));
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0xB8, 0, temp_a3, temp_a4, 0);
        } else {
            func_00209A00(temp_a0, 0xBA, 0, temp_a3, temp_a4, 0);
        }
        var_v1 = func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF;
        var_a5 = 1;
    }
    if (var_a5 != 0) {
        if (var_v1 >= 0) {
            var_f1 = (f32) var_v1;
        } else {
            var_f1 = 2.0f * (f32) (((u32) var_v1 >> 1) | (var_v1 & 1));
        }
        if (var_f1 <= 7281.778f) {
            var_v1 = 0x1C71;
        }
        if (var_v1 >= 0) {
            var_f1_2 = (f32) var_v1;
        } else {
            var_f1_2 = 2.0f * (f32) (((u32) var_v1 >> 1) | (var_v1 & 1));
        }
        if (!(var_f1_2 < 15473.778f)) {
            var_v1 = 0x3C71;
        }
        M2C_FIELD(arg0, u16 *, 0x38) = (u16) ((s32) (var_v1 & 0xFFFF) / (s32) (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
    }
}

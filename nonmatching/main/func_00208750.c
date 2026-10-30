/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208970(s32, u16, f32);               /* extern */
extern s32 D_003E74CC;

void func_00208750(void *arg0, s32 arg1, u8 arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 var_s0;
    s32 var_v1;
    u16 temp_a2;
    u16 temp_a4;
    u8 temp_a1;
    void *temp_v1;

    temp_a3 = arg1 & 0xFFFF;
    temp_a4 = M2C_FIELD(arg0, u16 *, 0x30);
    var_s0 = temp_a4 != temp_a3;
    if (M2C_FIELD(arg0, u8 *, 0x2D) == (arg2 & 0xFF)) {
        func_00208970(temp_a3, temp_a4, M2C_FIELD(arg0, f32 *, 0x38));
        goto block_2;
    }
    M2C_FIELD(arg0, u8 *, 0x2D) = arg2;
    var_s0 = 1;
    func_00208970(temp_a3, temp_a4, M2C_FIELD(arg0, f32 *, 0x38));
    temp_a2 = M2C_FIELD(arg0, u16 *, 0x30);
    temp_a1 = M2C_FIELD(((temp_a2 * 4) + D_003E74CC), u8 *, 0x2FD8);
    if ((temp_a2 != 0x38C) && (temp_a2 != 0x393) && (temp_a2 != 0x2B8) && (temp_a2 != 0xBF) && (temp_a2 != 0xB6) && (temp_a2 != 0x2C0)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x38) + (f32) ((u32) (temp_a1 & 0xFF) >> 1);
        M2C_FIELD(arg0, f32 *, 0x38) = temp_f1;
        if ((s32) temp_a1 >= 0) {
            var_f0 = (f32) temp_a1;
        } else {
            var_f0 = 2.0f * (f32) ((temp_a1 >> 1) | (temp_a1 & 1));
        }
        if (!(temp_f1 <= var_f0)) {
            if ((s32) temp_a1 >= 0) {
                var_f0_2 = (f32) temp_a1;
            } else {
                var_f0_2 = 2.0f * (f32) ((temp_a1 >> 1) | (temp_a1 & 1));
            }
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - var_f0_2);
        }
        return;
    }
    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_a0 = M2C_FIELD(temp_v1, u8 *, 1) * 2;
    temp_a1_2 = M2C_FIELD(temp_v1, u8 *, 2) * 2;
    if (!(temp_f1_2 < (f32) temp_a0) && (temp_f1_2 <= (f32) temp_a1_2)) {
        temp_a0_2 = temp_a1_2 - temp_a0;
        var_v1 = temp_a0_2 >> 1;
        if (temp_a0_2 < 0) {
            var_v1 = (s32) (temp_a0_2 + 1) >> 1;
        }
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x38) + (f32) var_v1;
        M2C_FIELD(arg0, f32 *, 0x38) = temp_f1_3;
        if (!(temp_f1_3 <= (f32) temp_a1_2)) {
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f1_3 - (f32) temp_a0_2);
        }
block_2:
        if (var_s0 != 0) {
            if (M2C_FIELD(arg0, u16 *, 0x30) != 0xC7) {

            } else {
                func_00207390(arg0, 6);
            }
        }
    }
}

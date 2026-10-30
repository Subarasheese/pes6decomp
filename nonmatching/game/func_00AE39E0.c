/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B34C0(f32, f32, f32, f32);
extern f32 func_00AB3C60(void *, s32);
extern s32 func_009B30B0(s32, s32);
M2C_UNK func_00209A00(void *, s32, s32);            /* extern */
M2C_UNK func_009B36C0(void *, s32, u16, u16, u8);   /* extern */
extern char D_00591E6C[];
extern char D_00591E74[];

s32 func_00AE39E0(void *arg0, void *arg1) {
    f32 temp_f1;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_a2;
    s32 var_s0;
    void *temp_a0;

    if (M2C_FIELD(arg0, u8 *, 0x16) != 0x44) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1100) {
            if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg1, u16 *, 0x18)) & 0xFFFF) < 0x11) {
                var_s0 = 0x2D9;
            } else {
                var_s0 = 0x2DA;
                M2C_FIELD(arg1, u16 *, 0x18) = (u16) (M2C_FIELD(arg1, u16 *, 0x18) + ((((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xC) & 0xFFFF));
            }
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_f1 = M2C_FIELD(temp_a0, f32 *, 0x38);
            if (temp_f1 >= 2.1474836e9f) {
                var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a2 = (s32) temp_f1;
            }
            func_00209A00(temp_a0, var_s0 & 0xFFFF, var_a2 & 0xFFFF);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, (s32) M2C_FIELD(arg1, u16 *, 6));
            func_009B36C0(arg0, var_s0 & 0xFFFF, M2C_FIELD(arg1, u16 *, 6), M2C_FIELD(arg1, u16 *, 0x18), M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D));
            temp_s3 = func_009B34C0((*(f32 *)D_00591E6C), (*(f32 *)D_00591E74), M2C_FIELD(arg1, f32 *, 0xC), M2C_FIELD(arg1, f32 *, 0x14)) & 0xFFFF;
            temp_s0 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), temp_s3) & 0xFFFF;
            if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(arg1, u16 *, 0x1C)) & 0xFFFF) >= temp_s0) || (temp_s0 < 0x11)) {
                M2C_FIELD(arg1, u16 *, 0x1C) = (u16) temp_s3;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = 0x10;
            return 1;
        }
        return 0;
    }
    return 0;
}

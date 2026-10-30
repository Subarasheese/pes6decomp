/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern s32 func_00207D80(void *, s32);
extern s32 func_009B3070(s32, s32);
extern void * func_00B2A420(u32);
s32 func_00BBB990(s32, M2C_UNK, u8);                /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3BE0(void **, M2C_UNK);            /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */

void func_00BE75C0(void **arg0) {
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s2;
    u8 temp_a2;
    void **temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B2A420(func_00BF6270());
    temp_v0_2 = *temp_v0;
    temp_a2 = M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), u8 *, 0x2D);
    temp_s2 = (M2C_FIELD(temp_v0_2, u16 *, 0x26) - (((temp_a2 != 0) ? -1 : 1) * 0x3000)) & 0xFFFF;
    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(*temp_v0, f32 *, 0xE0) + (f32) func_00BBB990(temp_s2, 0x200, temp_a2));
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (M2C_FIELD(*temp_v0, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s2, 0x200));
    temp_v0_3 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_3, f32 *, 0x6C), M2C_FIELD(temp_v0_3, f32 *, 0x70));
    temp_a1 = *arg0;
    temp_f1 = (s32) (M2C_FIELD(temp_a1, f32 *, 0xE0) - M2C_FIELD(temp_a1, f32 *, 0x6C));
    temp_f0 = (s32) (M2C_FIELD(temp_a1, f32 *, 0xE8) - M2C_FIELD(temp_a1, f32 *, 0x70));
    if ((u32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) < 0x10000U) {
        if ((func_009B3070((s32) M2C_FIELD(temp_a1, u16 *, 0x26), (s32) M2C_FIELD(*temp_v0, u16 *, 0x26)) & 0xFFFF) < 0x1000) {
            func_00BD3BE0(arg0, 2);
        }
    }
    temp_a0 = M2C_FIELD(*temp_v0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) != 0x59D) {

    } else if (func_00207D80(temp_a0, 0xA0) != 0) {
        func_00BD3BE0(arg0, 2);
        M2C_FIELD(*arg0, s16 *, 0x18) = 9;
    }
}

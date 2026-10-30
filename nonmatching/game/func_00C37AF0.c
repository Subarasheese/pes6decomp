/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
void **func_00B2A420(s32);                          /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
void *func_00C375E0(u8);                            /* extern */
s32 func_00C37790(u8, void *);                      /* extern */
s32 func_00C37850(u8);                              /* extern */
M2C_UNK func_00C38EE0(void *);                      /* extern */

void func_00C37AF0(void *arg0) {
    f32 var_f1;
    s32 temp_s0;
    u16 temp_v0_2;
    u16 var_a1;
    void **temp_s3;
    void *temp_a0;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = func_00C375E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    temp_s3 = func_00B2A420(func_00C37850(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)));
    temp_s0 = func_00C37790(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), arg0);
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = *temp_s3;
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0) >= (s32) M2C_FIELD(temp_a0, u8 *, 0)) {
        var_a1 = M2C_FIELD(((temp_s0 * 0x14) + M2C_FIELD(temp_s1, s32 *, 4)), u16 *, 0xE);
    } else {
        temp_v0_2 = M2C_FIELD(((temp_s0 * 0x14) + M2C_FIELD(temp_s1, s32 *, 4)), u16 *, 0xE);
        if ((s32) temp_v0_2 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f1 = (f32) temp_v0_2;
        }
        var_a1 = (u16) (s32) (var_f1 - M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), f32 *, 0x28));
    }
    if (func_00207D80(M2C_FIELD(temp_a0, void **, 4), (s32) var_a1) != 0) {
        func_00C38EE0(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x26;
    }
}

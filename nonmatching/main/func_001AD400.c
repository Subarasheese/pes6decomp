/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017DF60(s32, s32, s32);
extern void func_0017DF40(s32, s32, s32);
extern s32 func_0017DF20(s32, s32, s32);
M2C_UNK func_0017DB10(s32, M2C_UNK, u32, f32, f32); /* extern */
M2C_UNK func_0017DCE0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001AD520(s32);                         /* extern */

void func_001AD400(void *arg0) {
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_s0;
    u32 temp_a2;
    u8 temp_v0;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x10);
    func_001AD520(M2C_FIELD(arg0, u8 *, 0) + 0x23F0);
    func_0017DF40(temp_s1, 0x67, 0x4B0);
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x37);
    if (temp_v0 == 0) {
        func_0017DF60(temp_s1, 0x67, 0x238D);
    } else {
        temp_v0_2 = (temp_v0 & 0xFF) - 1;
        var_s0 = temp_v0_2 >> 2;
        if (temp_v0_2 < 0) {
            var_s0 = (s32) (temp_v0_2 + 3) >> 2;
        }
        func_0017DF20(temp_s1, 0x67, M2C_FIELD(arg0, u8 *, 0) + 0x23F0);
        func_0017DCE0(temp_s1, 0x67, 1);
        temp_a2 = (u32) var_s0 >> 0x1F;
        func_0017DB10(temp_s1, 0x67, temp_a2, 0.08984375f * (f32) (var_s0 % 11), 0.328125f * (f32) ((var_s0 / 11) + temp_a2));
    }
}

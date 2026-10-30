/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001A3840(void);
extern u8 *D_005202E0;

void func_0019DDF0(s32 arg0, void *arg1) {
    f32 var_f0;
    s32 temp_a0;
    void *temp_s1;

    if (D_005202E0 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 >= (s32) *D_005202E0) {
            return;
        }
        temp_s1 = D_005202E0 + (temp_a0 * 0x64) + 0x20;
        if (func_001A3840() <= 0.5f) {
            M2C_FIELD(temp_s1, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(temp_s1, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(temp_s1, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(temp_s1, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0xC));
            M2C_FIELD(temp_s1, f32 *, 0x30) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD(arg1, f32 *, 8));
            M2C_FIELD(temp_s1, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(temp_s1, f32 *, 0x48) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD(arg1, f32 *, 8));
            var_f0 = M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0xC);
        } else {
            M2C_FIELD(temp_s1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD(arg1, f32 *, 8));
            M2C_FIELD(temp_s1, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(temp_s1, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(temp_s1, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(temp_s1, f32 *, 0x30) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD(arg1, f32 *, 8));
            M2C_FIELD(temp_s1, f32 *, 0x38) = (f32) (M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0xC));
            M2C_FIELD(temp_s1, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0);
            var_f0 = M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0xC);
        }
        M2C_FIELD(temp_s1, f32 *, 0x50) = var_f0;
    }
}

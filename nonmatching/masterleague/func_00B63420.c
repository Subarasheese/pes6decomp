/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */

void func_00B63420(s32 arg0) {
    f32 var_f1;
    u32 temp_v0;
    u8 temp_v0_3;
    void *temp_v0_2;

    if (((arg0 & 0xFF) < 0x48) && (temp_v0 = func_00B62380(), (temp_v0 != 0))) {
        temp_v0_2 = (arg0 & 0xFF) + temp_v0;
        if ((s32) M2C_FIELD(temp_v0_2, u8 *, 0x4C5) >= 3) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x418), 1U);
            temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x4C5);
            if ((s32) temp_v0_3 < 0) {
                var_f1 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
            } else {
                var_f1 = (f32) temp_v0_3;
            }
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x418), 0, 2.0f / var_f1);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x418), 0U);
        }
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B526C0(void);
void func_00B4EC00(s32 arg0) {
    s32 var_a2;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        var_a2 = 0;
        if (arg0 > 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xD16) + temp_v0;
            temp_a0 = M2C_FIELD(temp_v1, u8 *, 0xD26);
            if ((s32) temp_a0 < 0x13) {
                var_a2 = -arg0;
                M2C_FIELD(temp_v1, u8 *, 0xD26) = (u8) (temp_a0 + (arg0 & 0xFF));
            } else {
                M2C_FIELD(temp_v1, u8 *, 0xD26) = 0x13U;
            }
        } else if (arg0 < 0) {
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0xD16) + temp_v0;
            temp_a0_2 = M2C_FIELD(temp_v1_2, u8 *, 0xD26);
            if ((s32) temp_a0_2 > 0) {
                var_a2 = -arg0;
                M2C_FIELD(temp_v1_2, u8 *, 0xD26) = (u8) (temp_a0_2 + (arg0 & 0xFF));
            } else {
                M2C_FIELD(temp_v1_2, u8 *, 0xD26) = 0U;
            }
        }
        if (var_a2 != 0) {
            M2C_FIELD(temp_v0, s16 *, 0xD50) = (s16) (s32) M2C_FIELD(temp_v0, f32 *, 0xD48);
            M2C_FIELD(temp_v0, s16 *, 0xD52) = -8;
            M2C_FIELD(temp_v0, s32 *, 0xD4C) = var_a2;
            M2C_FIELD(temp_v0, s8 *, 0xD10) = 8;
        }
    }
}

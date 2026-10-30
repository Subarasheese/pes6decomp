/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF9370(u8, s32);                     /* extern */
M2C_UNK func_00AFBC20(u8, s32);                     /* extern */

s32 func_00AFDE80(void) {
    s32 temp_a1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
        if (temp_a1 != 7) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x29F9C);
            if ((temp_a0 != 1) && (M2C_FIELD(temp_v0, u8 *, 0x29F84) == 0)) {

            } else if ((M2C_FIELD(temp_v0, s32 *, 0x29F98) == 1) && (M2C_FIELD(temp_v0, u8 *, 0x29F84) == 1)) {
                temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x29F7C) + 1;
                M2C_FIELD(temp_v0, u8 *, 0x29F7C) = temp_a0_2;
                if ((s32) M2C_FIELD(temp_v0, u8 *, 0x29F7C) >= 0x63) {
                    M2C_FIELD(temp_v0, u8 *, 0x29F7C) = 0U;
                }
                func_00AFBC20(temp_a0_2, temp_a1);
                func_0026E840(0x8400F803);
            } else if ((temp_a1 == 2) && (temp_a0 == 1)) {
                func_00AF9370(temp_a0, temp_a1);
                M2C_FIELD(temp_v0, s32 *, 0x5E4) = 6;
                func_0026E840(0x8400F802);
            }
        }
    }
    return 0;
}

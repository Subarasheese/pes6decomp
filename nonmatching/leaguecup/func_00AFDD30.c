/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF9370(s32, u8);                     /* extern */
M2C_UNK func_00AFBC20(s32, u8);                     /* extern */

s32 func_00AFDD30(void) {
    s32 temp_a0;
    s8 var_v1;
    u32 temp_v0;
    u8 temp_a1;
    u8 temp_v0_2;
    void *var_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x29F9C);
        if ((temp_a1 != 1) && (M2C_FIELD(temp_v0, u8 *, 0x29F84) == 0)) {

        } else {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
            switch (temp_a0) {                      /* irregular */
            case 7:
                break;
            case 2:
                break;
            default:
                if ((M2C_FIELD(temp_v0, s32 *, 0x29F98) == 1) && (M2C_FIELD(temp_v0, u8 *, 0x29F84) == 1)) {
                    temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x29F7C);
                    if (temp_v0_2 != 0) {
                        var_v1 = temp_v0_2 - 1;
                        var_v0 = temp_v0 + 0x30000;
                    } else {
                        var_v1 = 0x62;
                        var_v0 = temp_v0 + 0x30000;
                    }
                    M2C_FIELD(var_v0, s8 *, -0x6084) = var_v1;
                    func_00AFBC20(temp_a0, temp_a1);
                    func_0026E840(0x8400F803);
                } else if ((temp_a0 == 6) && (temp_a1 == 1)) {
                    func_00AF9370(temp_a0, temp_a1);
                    M2C_FIELD(temp_v0, s32 *, 0x5E4) = 2;
                    func_0026E840(0x8400F802);
                }
                break;
            }
        }
    }
    return 0;
}

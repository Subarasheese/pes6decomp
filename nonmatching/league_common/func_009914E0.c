/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009904A0(u8);                          /* extern */

s32 func_009914E0(void) {
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v0;

    temp_v0 = func_00991950();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x494);
        if ((s32) temp_v1 >= 2) {
            if (M2C_FIELD(temp_v0, s16 *, 0x478) == 0) {
                if (M2C_FIELD(temp_v0, s32 *, 0x4AC) == 0) {
                    temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x495);
                    if (temp_v0_2 == 0) {
                        var_v0 = temp_v1 - 1;
                    } else {
                        var_v0 = temp_v0_2 - 1;
                    }
                    M2C_FIELD(temp_v0, u8 *, 0x495) = var_v0;
                    func_0026E840(0x8400F803);
                    func_009904A0(M2C_FIELD(temp_v0, u8 *, 0x495));
                }
            }
        }
    }
    return 0;
}

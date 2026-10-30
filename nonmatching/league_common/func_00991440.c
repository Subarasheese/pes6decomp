/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009904A0(u8);                          /* extern */

s32 func_00991440(void) {
    u32 temp_v0;

    temp_v0 = func_00991950();
    if (temp_v0 != 0) {
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x494) >= 2) {
            if (M2C_FIELD(temp_v0, s16 *, 0x478) == 0) {
                if (M2C_FIELD(temp_v0, s32 *, 0x4AC) == 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x495) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x495) + 1);
                    if ((s32) M2C_FIELD(temp_v0, u8 *, 0x495) >= (s32) M2C_FIELD(temp_v0, u8 *, 0x494)) {
                        M2C_FIELD(temp_v0, u8 *, 0x495) = 0U;
                    }
                    func_0026E840(0x8400F803);
                    func_009904A0(M2C_FIELD(temp_v0, u8 *, 0x495));
                }
            }
        }
    }
    return 0;
}

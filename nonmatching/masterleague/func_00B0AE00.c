/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_00972040(s32, s32, s32);               /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */

void func_00B0AE00(s32 arg0, s32 arg1) {
    s32 temp_s0;
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xA99) != 0) {
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x948), arg1 & 0xFF, 0);
        } else {
            temp_s0 = arg0 & 0xFF;
            if (temp_s0 != 0) {
                func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x94C), 1);
                func_00972040(M2C_FIELD(temp_v0, s32 *, 0x94C), 0, temp_s0 - 1);
                return;
            }
            func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x94C), 0);
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x94C), arg1 & 0xFF, 0);
        }
    }
}

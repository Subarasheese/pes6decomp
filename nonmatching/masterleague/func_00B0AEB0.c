/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */

void func_00B0AEB0(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC28) != 5) {
            func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x330), 0);
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x330), 0, arg0 & 0xFF);
        } else {
            func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x330), 1);
        }
    }
}

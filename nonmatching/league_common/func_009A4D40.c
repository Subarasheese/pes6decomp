/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
s32 func_009A48B0(s32, s32);                        /* extern */
s32 func_009A79E0(s32, s32);                        /* extern */

void func_009A4D40(s32 arg0) {
    s32 temp_v0_2;
    u32 temp_v0;

    temp_v0 = func_009A84E0();
    if (temp_v0 != 0) {
        temp_v0_2 = func_009A48B0(M2C_FIELD(temp_v0, s32 *, 0xC), arg0);
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0, s32 *, 8) = func_009A79E0(M2C_FIELD(temp_v0, s32 *, 8), temp_v0_2);
            M2C_FIELD(temp_v0, u8 *, 0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0) + 1);
        }
    }
}

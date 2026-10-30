/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BECBB0(void *arg0, s16 arg1) {
    s32 temp_v1;

    temp_v1 = arg1 & 0xFFFF;
    if ((temp_v1 >= 0) && (temp_v1 < 0x39)) {
        M2C_FIELD(arg0, u8 *, 0xF4) = (u8) ((M2C_FIELD(arg0, u8 *, 0xF4) & ~2) | 2);
        M2C_FIELD(arg0, s16 *, 0xE4) = arg1;
    }
}

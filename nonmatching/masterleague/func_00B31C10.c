/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00970870(u16);                           /* extern */

s32 func_00B31C10(u16 *arg0, u16 *arg1) {
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v1;
    u64 temp_v0_2;
    u64 temp_v1_2;
    void *temp_s2;

    temp_a0 = *arg0;
    if (temp_a0 == 0) {
        return 1;
    }
    if (*arg1 == 0) {
        return -1;
    }
    temp_s2 = func_00970870(temp_a0);
    temp_v1_2 = (u64) ((s64) M2C_FIELD(func_00970870(*arg1), u8 *, 0x1C) << 0x3A) >> 0x3D;
    temp_v0_2 = (u64) ((s64) M2C_FIELD(temp_s2, u8 *, 0x1C) << 0x3A) >> 0x3D;
    if ((s32) temp_v0_2 < (s32) temp_v1_2) {
        return 1;
    }
    if (temp_v0_2 != temp_v1_2) {
        return -1;
    }
    temp_v1 = *arg1;
    temp_v0 = *arg0;
    if ((s32) temp_v0 >= (s32) temp_v1) {
        return -((s32) temp_v1 < (s32) temp_v0);
    }
    return 1;
}

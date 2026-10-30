/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B02A20(u16);                             /* extern */

s32 func_00B345E0(u16 *arg0, u16 *arg1) {
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v1_2;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v1;

    temp_a0 = *arg0;
    if (temp_a0 == 0) {
        return 1;
    }
    if (*arg1 == 0) {
        return -1;
    }
    temp_s1 = func_00B02A20(temp_a0) & 0xFF;
    temp_v1_2 = func_00B02A20(*arg1) & 0xFF;
    temp_v0_2 = temp_s1 & 0xFF;
    if (temp_v0_2 < temp_v1_2) {
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

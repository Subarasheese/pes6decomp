/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B05280(u16);                             /* extern */

s32 func_00B31B60(u16 *arg0, u16 *arg1) {
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
        goto block_12;
    }
    temp_s1 = func_00B05280(temp_a0) & 0xFFFF;
    temp_v1_2 = func_00B05280(*arg1) & 0xFFFF;
    temp_v0_2 = temp_s1 & 0xFFFF;
    if (temp_v0_2 < temp_v1_2) {
        goto block_12;
    }
    if (temp_v0_2 != temp_v1_2) {
        return 1;
    }
    temp_v1 = *arg1;
    temp_v0 = *arg0;
    if ((s32) temp_v0 >= (s32) temp_v1) {
        return (s32) temp_v1 < (s32) temp_v0;
    }
block_12:
    return -1;
}

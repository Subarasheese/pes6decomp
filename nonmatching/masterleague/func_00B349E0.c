/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00225680(s32);                             /* extern */
s32 func_00938F10(u16);                             /* extern */

s32 func_00B349E0(u16 *arg0, u16 *arg1) {
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0_3;
    s32 temp_v1_3;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    u16 temp_v1_2;

    temp_a0 = *arg0;
    if (temp_a0 == 0) {
        return 1;
    }
    if (*arg1 == 0) {
        goto block_26;
    }
    temp_s1 = func_00938F10(temp_a0) & 0xFF;
    temp_a0_2 = temp_s1 & 0xFF;
    temp_s0 = func_00938F10(*arg1) & 0xFF;
    if ((temp_a0_2 == 0xFF) && ((temp_s0 & 0xFF) == 0xFF)) {
        temp_v1_2 = *arg1;
        temp_v0_2 = *arg0;
        if ((s32) temp_v0_2 >= (s32) temp_v1_2) {
            return (s32) temp_v1_2 < (s32) temp_v0_2;
        }
        goto block_26;
    }
    if (temp_a0_2 != 0xFF) {
        if ((temp_s0 & 0xFF) != 0xFF) {
            temp_s0_2 = func_00225680(temp_s1) & 0xFFFF;
            temp_v1_3 = func_00225680(temp_s0) & 0xFFFF;
            temp_v0_3 = temp_s0_2 & 0xFFFF;
            if (temp_v0_3 < temp_v1_3) {
                goto block_26;
            }
            if (temp_v0_3 != temp_v1_3) {
                return 1;
            }
            temp_v1 = *arg1;
            temp_v0 = *arg0;
            if ((s32) temp_v0 >= (s32) temp_v1) {
                return (s32) temp_v1 < (s32) temp_v0;
            }
            goto block_26;
        }
block_26:
        return -1;
    }
    return 1;
}

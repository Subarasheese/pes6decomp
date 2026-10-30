/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0093B550(u16);                           /* extern */

s32 func_00B318A0(u16 *arg0, u16 *arg1) {
    s32 var_v0;
    u16 temp_a0;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v1;
    u16 temp_v1_3;
    u64 temp_v0_3;
    u64 temp_v1_2;
    void *temp_s2;
    void *temp_v0;

    temp_a0 = *arg0;
    if (temp_a0 == 0) {
        return 1;
    }
    if (*arg1 == 0) {
        return -1;
    }
    temp_s2 = func_0093B550(temp_a0);
    temp_v0 = func_0093B550(*arg1);
    if ((temp_s2 == NULL) && (temp_v0 == NULL)) {
        temp_v1 = *arg1;
        temp_v0_2 = *arg0;
        if ((s32) temp_v0_2 >= (s32) temp_v1) {
            var_v0 = (s32) temp_v1 < (s32) temp_v0_2;
            goto block_26;
        }
        return 1;
    }
    if (temp_s2 == NULL) {
        return 1;
    }
    if (temp_v0 != NULL) {
        temp_v1_2 = (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3A;
        temp_v0_3 = (u64) ((s64) M2C_FIELD(temp_s2, u8 *, 1) << 0x38) >> 0x3A;
        if ((s32) temp_v0_3 < (s32) temp_v1_2) {
            return 1;
        }
        if (temp_v0_3 != temp_v1_2) {
            return -1;
        }
        temp_v1_3 = *arg1;
        temp_v0_4 = *arg0;
        if ((s32) temp_v0_4 >= (s32) temp_v1_3) {
            var_v0 = (s32) temp_v1_3 < (s32) temp_v0_4;
block_26:
            return -var_v0;
        }
        return 1;
    }
    return -1;
}

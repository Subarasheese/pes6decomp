/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
s32 func_00C04700(u16 *arg0, u16 *arg1) {
    u16 temp_s0;
    u16 temp_s1;
    u64 temp_v0_3;
    u64 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = *arg0;
    temp_s1 = *arg1;
    if (temp_s0 == temp_s1) {
        return 0;
    }
    if (temp_s0 == 0) {
        goto block_21;
    }
    if (temp_s1 != 0) {
        temp_v0 = Pes6Player_GetParams((s32) temp_s0);
        if (temp_v0 != NULL) {
            temp_v0_2 = Pes6Player_GetParams((s32) temp_s1);
            if (temp_v0_2 != NULL) {
                temp_v1 = (u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 1) << 0x38) >> 0x3C;
                temp_v0_3 = (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C;
                if ((s32) temp_v0_3 < (s32) temp_v1) {
                    return -1;
                }
                if ((temp_v0_3 == temp_v1) && ((s32) temp_s0 < (s32) temp_s1)) {
                    return -1;
                }
                goto block_21;
            }
            return -1;
        }
block_21:
        return 1;
    }
    return -1;
}

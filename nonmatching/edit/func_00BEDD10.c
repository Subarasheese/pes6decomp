/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BEDD10(void *arg0) {
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    u16 temp_v1_2;

    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        temp_v1_3 = M2C_FIELD(arg0, s32 *, 4);
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0_3 < temp_v1_3) {
            goto block_20;
        }
        if (temp_v0_3 != temp_v1_3) {
            return 1;
        }
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xA);
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 8);
        if ((s32) temp_v0_2 >= (s32) temp_v1_2) {
            return (s32) temp_v1_2 < (s32) temp_v0_2;
        }
        goto block_20;
    }
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 4);
    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v1_4 < temp_v0_4) {
        goto block_20;
    }
    if (temp_v0_4 != temp_v1_4) {
        return 1;
    }
    temp_v1 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_v0 = M2C_FIELD(arg0, u16 *, 8);
    if ((s32) temp_v0 >= (s32) temp_v1) {
        return (s32) temp_v1 < (s32) temp_v0;
    }
block_20:
    return -1;
}

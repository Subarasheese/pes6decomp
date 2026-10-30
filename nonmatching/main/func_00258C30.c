/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00258C30(void *arg0, void *arg1) {
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;

    temp_a2 = M2C_FIELD(arg1, u8 *, 0);
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0);
    if ((s32) temp_v1_2 < (s32) temp_a2) {
        return -1;
    }
    if ((s32) temp_a2 < (s32) temp_v1_2) {
        return 1;
    }
    temp_a2_2 = M2C_FIELD(arg1, u8 *, 1);
    temp_v1_3 = M2C_FIELD(arg0, u8 *, 1);
    if ((s32) temp_v1_3 < (s32) temp_a2_2) {
        return -1;
    }
    if ((s32) temp_a2_2 < (s32) temp_v1_3) {
        return 1;
    }
    temp_a2_3 = M2C_FIELD(arg1, u8 *, 2);
    temp_v1_4 = M2C_FIELD(arg0, u8 *, 2);
    if ((s32) temp_v1_4 < (s32) temp_a2_3) {
        return -1;
    }
    if ((s32) temp_a2_3 < (s32) temp_v1_4) {
        return 1;
    }
    temp_a1 = M2C_FIELD(arg1, u8 *, 3);
    temp_v1 = M2C_FIELD(arg0, u8 *, 3);
    if ((s32) temp_v1 < (s32) temp_a1) {
        return -1;
    }
    return (s32) temp_a1 < (s32) temp_v1;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018B480(void *arg0, void *arg1) {
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    u32 temp_a2;
    u32 temp_v1;
    u64 temp_a0;
    u64 temp_v1_3;

    temp_a2 = M2C_FIELD(arg0, u32 *, 0);
    if ((temp_a2 < 2U) || (temp_v1 = M2C_FIELD(arg1, u32 *, 0), ((temp_v1 < 2U) != 0))) {
        return 1;
    }
    temp_v0 = temp_v1 ^ 4;
    if ((temp_a2 ^ 4) == 0) {
        if (temp_v0 != 0) {
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return (M2C_FIELD(arg0, s32 *, 4) == 0) ? 1 : -1;
        }
        return M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg0, s32 *, 4);
    }
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v1 ^ 2;
        if ((temp_a2 ^ 2) == 0) {
            if (temp_v0_2 != 0) {
                return (M2C_FIELD(arg1, s32 *, 4) != 0) ? 1 : -1;
            }
            return 0;
        }
        if (temp_v0_2 == 0) {
            return (M2C_FIELD(arg0, s32 *, 4) == 0) ? 1 : -1;
        }
        temp_a3 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_a3 == M2C_FIELD(arg1, s32 *, 4)) {
            temp_a2_2 = M2C_FIELD(arg0, s32 *, 8);
            temp_v1_2 = M2C_FIELD(arg1, s32 *, 8);
            if (temp_v1_2 >= temp_a2_2) {
                if (temp_a2_2 >= temp_v1_2) {
                    temp_v1_3 = M2C_FIELD(arg0, u64 *, 0x10);
                    temp_a0 = M2C_FIELD(arg1, u64 *, 0x10);
                    if (temp_a0 >= temp_v1_3) {
                        if (temp_v1_3 >= temp_a0) {
                            return 0;
                        }
                        /* Duplicate return node #31. Try simplifying control flow for better match */
                        return (temp_a3 == 0) ? -1 : 1;
                    }
                    /* Duplicate return node #25. Try simplifying control flow for better match */
                    return (temp_a3 == 0) ? 1 : -1;
                }
                return (temp_a3 == 0) ? -1 : 1;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return (temp_a3 == 0) ? 1 : -1;
        }
        return (temp_a3 == 0) ? 1 : -1;
    }
    return (M2C_FIELD(arg1, s32 *, 4) == 0) ? -1 : 1;
}

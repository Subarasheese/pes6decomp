/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00134F28(s32);
extern s32 func_00134FB0(s32);
extern s32 func_001AE624(s32, s32, s32);

s32 func_0015C4B8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 > 0) {
        temp_v0 = func_00134F28(temp_a0 * 4);
        temp_a1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 < temp_a1) {
            func_001AE624(temp_v0, temp_a1, M2C_FIELD(arg0, s32 *, 0xC) * 4);
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_a0_2 != 0) {
                func_00134FB0(temp_a0_2);
            }
            M2C_FIELD(arg0, s32 *, 0) = temp_v0;
            return 1;
        }
        func_00134FB0(temp_v0);
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00136580(void *arg0, u32 arg1) {
    u32 temp_a2;
    u32 temp_a2_2;
    u32 var_a1;

    var_a1 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        temp_a2 = 0x28 - M2C_FIELD(arg0, u32 *, 0x2C);
        temp_a2_2 = (temp_a2 >= var_a1) ? var_a1 : temp_a2;
        M2C_FIELD(arg0, u32 *, 0x2C) = (u32) (M2C_FIELD(arg0, u32 *, 0x2C) + temp_a2_2);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) >= 0x28U) {
            M2C_FIELD(arg0, s32 *, 0) = 1;
        }
        var_a1 -= temp_a2_2;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x34) + var_a1) % (s32) M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + var_a1);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + var_a1);
}

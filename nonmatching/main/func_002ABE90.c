/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002ABE90(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    u8 temp_v1;
    u8 var_v1;
    void *temp_a3;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x48);
    if ((s32) M2C_FIELD(((temp_a2 * 4) + arg0), u8 *, 3) > 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_a2 + 1);
    }
    temp_a2_2 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_a3 = arg0 + (temp_a2_2 * 4);
    temp_v1 = M2C_FIELD(temp_a3, u8 *, 1);
    if (temp_v1 != 0) {
        var_v1 = M2C_FIELD(temp_a3, u8 *, 0) + (temp_v1 & 0xFF);
    } else {
        if (temp_a2_2 == 0) {
            var_v1 = 0;
        } else {
            var_v1 = M2C_FIELD(temp_a3, u8 *, -4) + M2C_FIELD(temp_a3, u8 *, -3);
        }
        M2C_FIELD(temp_a3, u8 *, 0) = var_v1;
    }
    M2C_FIELD(temp_a3, u8 *, 1) = (u8) (M2C_FIELD(temp_a3, u8 *, 1) + 1);
    M2C_FIELD(((var_v1 * 4) + arg0), s32 *, 0x4C) = arg1;
}

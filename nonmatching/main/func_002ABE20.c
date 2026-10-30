/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002ABE20(void *arg0, s8 arg1, f32 fparg0) {
    s32 temp_a2;
    u8 temp_v1;
    u8 var_v1;
    void *temp_a4;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_a4 = arg0 + (temp_a2 * 4);
    temp_v1 = M2C_FIELD(temp_a4, u8 *, 3);
    if (temp_v1 != 0) {
        var_v1 = M2C_FIELD(temp_a4, u8 *, 2) + (temp_v1 & 0xFF);
    } else {
        if (temp_a2 == 0) {
            var_v1 = 0;
        } else {
            var_v1 = M2C_FIELD(temp_a4, u8 *, -2) + M2C_FIELD(temp_a4, u8 *, -1);
        }
        M2C_FIELD(temp_a4, u8 *, 2) = var_v1;
    }
    M2C_FIELD(temp_a4, u8 *, 3) = (u8) (M2C_FIELD(temp_a4, u8 *, 3) + 1);
    M2C_FIELD((var_v1 + arg0), s8 *, 0x9C) = arg1;
    M2C_FIELD(((var_v1 * 4) + arg0), f32 *, 0xB0) = fparg0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A3EE0(void *, s32);                     /* extern */

s32 func_009A5D20(void *arg0) {
    s32 temp_a3;
    s32 var_a3;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_a1;
    void *temp_s1;

    var_a3 = M2C_FIELD(arg0, s32 *, 0x18);
    if (var_a3 >= 0) {
        if ((u32) (M2C_FIELD(arg0, s32 *, 0x14) + var_a3) >= (u32) M2C_FIELD(arg0, u32 *, 4)) {
            do {
                M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(arg0, u32 *, 4));
                var_a3 = M2C_FIELD(arg0, s32 *, 0x18);
            } while ((u32) (M2C_FIELD(arg0, s32 *, 0x14) + var_a3) >= (u32) M2C_FIELD(arg0, u32 *, 4));
        }
    } else if ((M2C_FIELD(arg0, s32 *, 0x14) + var_a3) < 0) {
        do {
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(arg0, u32 *, 4));
            var_a3 = M2C_FIELD(arg0, s32 *, 0x18);
        } while ((M2C_FIELD(arg0, s32 *, 0x14) + var_a3) < 0);
    }
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x14) + var_a3;
    temp_s1 = M2C_FIELD(arg0, s32 *, 0) + (temp_a3 * 0x10DA0);
    if (func_009A3EE0(temp_s1, temp_a3) == 0) {
        var_v0 = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(temp_s1, s32 *, 8);
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x18) + 1);
        temp_a1 = M2C_FIELD(arg0, u32 *, 4);
        temp_a0 = M2C_FIELD(arg0, u32 *, 0x10);
        var_v0 = 1;
        if (temp_a0 >= temp_a1) {
            M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_a0 - temp_a1);
        }
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
    return var_v0;
}

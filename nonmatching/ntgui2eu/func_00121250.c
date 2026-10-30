/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00121250(s32 arg0, void *arg1, void *arg2) {
    s32 temp_a1;
    s32 temp_a6;
    s8 temp_v0;
    s8 var_v0;
    u8 temp_a0;
    u8 temp_v1;
    void *var_a2;
    void *var_a3;

    var_a2 = arg2;
    var_a3 = arg1;
    temp_a6 = var_a3 + 0x10;
    do {
        M2C_FIELD(var_a3, u8 *, 0) = (u8) M2C_FIELD(var_a2, u8 *, 0);
        M2C_FIELD(var_a3, u8 *, 1) = (u8) M2C_FIELD(var_a2, u8 *, 1);
        M2C_FIELD(var_a3, u8 *, 2) = (u8) M2C_FIELD(var_a2, u8 *, 2);
        if (((u32) (arg0 + 5) >= 0xBU) || (arg0 == 0)) {
            var_v0 = (s8) M2C_FIELD(var_a2, u8 *, 3);
        } else if (arg0 >= 0) {
            temp_a0 = M2C_FIELD(var_a2, u8 *, 3);
            temp_a1 = temp_a0 + 0x10;
            temp_v0 = (((s32) ((temp_a1 > -1) ? temp_a1 : (temp_a0 + 0x17)) >> 3) * arg0) + temp_a0;
            var_v0 = (temp_v0 >= 0x100) ? -1 : temp_v0;
        } else {
            temp_v1 = M2C_FIELD(var_a2, u8 *, 3);
            var_v0 = ((temp_v1 >> 3) * arg0) + temp_v1;
            M2C_FIELD(var_a3, s8 *, 3) = var_v0;
        }
        M2C_FIELD(var_a3, s8 *, 3) = var_v0;
        var_a3 += 4;
        var_a2 += 4;
    } while ((s32) var_a3 < temp_a6);
}

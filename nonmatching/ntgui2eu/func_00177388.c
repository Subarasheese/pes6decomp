/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00177388(void *arg0) {
    s32 temp_a0;
    s32 var_a5;
    u8 temp_a0_2;
    void *temp_v1;
    void *var_a3;

    var_a5 = 0;
    var_a3 = arg0;
    do {
        temp_a0 = var_a5 * 0x30;
        var_a5 += 1;
        temp_v1 = temp_a0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x170) + arg0 + 0xBA0);
        M2C_FIELD(temp_v1, u8 *, 0x90) = (u8) M2C_FIELD(var_a3, u8 *, 0x5C0);
        M2C_FIELD(temp_v1, u8 *, 0x91) = (u8) M2C_FIELD(var_a3, u8 *, 0x5C1);
        M2C_FIELD(temp_v1, u8 *, 0x92) = (u8) M2C_FIELD(var_a3, u8 *, 0x5C2);
        temp_a0_2 = M2C_FIELD(var_a3, u8 *, 0x5C3);
        var_a3 += 4;
        M2C_FIELD(temp_v1, s8 *, 0x93) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * temp_a0_2) / 255);
    } while (var_a5 < 4);
}

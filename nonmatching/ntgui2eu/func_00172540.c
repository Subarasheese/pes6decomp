/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00172540(void *arg0) {
    u32 var_a5;
    u8 temp_v1;
    void *var_a2;
    void *var_a3;

    var_a5 = 0;
    var_a3 = arg0;
    var_a2 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0xF0) + arg0 + 0x930;
    do {
        var_a5 += 1;
        M2C_FIELD(var_a2, u8 *, 0x50) = (u8) M2C_FIELD(var_a3, u8 *, 0xCE0);
        M2C_FIELD(var_a2, u8 *, 0x51) = (u8) M2C_FIELD(var_a3, u8 *, 0xCE1);
        M2C_FIELD(var_a2, u8 *, 0x52) = (u8) M2C_FIELD(var_a3, u8 *, 0xCE2);
        temp_v1 = M2C_FIELD(var_a3, u8 *, 0xCE3);
        var_a3 += 4;
        M2C_FIELD(var_a2, s8 *, 0x53) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * temp_v1) / 255);
        var_a2 += 0x20;
    } while (var_a5 < 4U);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017E3F8(void *arg0) {
    s32 var_a3;
    s32 var_a3_2;
    void *temp_a0;
    void *temp_a1;
    void *var_a2;
    void *var_v1;

    temp_a1 = arg0 + 0x910;
    var_a3 = 9;
    temp_a0 = temp_a1 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x240) + 0x10;
    var_v1 = temp_a0;
    do {
        var_a3 -= 1;
        M2C_FIELD(var_v1, u8 *, 0x60) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4D4);
        M2C_FIELD(var_v1, u8 *, 0x61) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4D5);
        M2C_FIELD(var_v1, u8 *, 0x62) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4D6);
        M2C_FIELD(var_v1, u8 *, 0x63) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4D7);
        var_v1 += 0x20;
    } while (var_a3 >= 0);
    var_a2 = temp_a0 + 0x140;
    var_a3_2 = 3;
    do {
        var_a3_2 -= 1;
        M2C_FIELD(var_a2, u8 *, 0x60) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4B0);
        M2C_FIELD(var_a2, u8 *, 0x61) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4B1);
        M2C_FIELD(var_a2, u8 *, 0x62) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4B2);
        M2C_FIELD(var_a2, s8 *, 0x63) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a1, u8 *, 0x4B3)) / 255);
        var_a2 += 0x20;
    } while (var_a3_2 >= 0);
}

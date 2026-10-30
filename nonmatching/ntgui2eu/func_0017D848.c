/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017D848(void *arg0) {
    u32 var_a6;
    void *temp_a0;
    void *temp_a4;
    void *temp_v0;
    void *temp_v1;
    void *var_a3;

    temp_a4 = arg0 + 0x910;
    var_a6 = 1;
    temp_v0 = temp_a4 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x480) + 0x10);
    temp_a0 = temp_v0 + 0x10;
    var_a3 = temp_v0 + 0x30;
    M2C_FIELD(temp_a0, u8 *, 0x60) = (u8) M2C_FIELD(temp_a4, u8 *, 0x940);
    M2C_FIELD(temp_a0, u8 *, 0x61) = (u8) M2C_FIELD(temp_a4, u8 *, 0x941);
    M2C_FIELD(temp_a0, u8 *, 0x62) = (u8) M2C_FIELD(temp_a4, u8 *, 0x942);
    M2C_FIELD(temp_a0, s8 *, 0x63) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a4, u8 *, 0x943)) / 255);
    do {
        temp_v1 = temp_a4 + (1 * 4);
        var_a6 += 1;
        M2C_FIELD(var_a3, u8 *, 0x60) = (u8) M2C_FIELD(temp_v1, u8 *, 0x940);
        M2C_FIELD(var_a3, u8 *, 0x61) = (u8) M2C_FIELD(temp_v1, u8 *, 0x941);
        M2C_FIELD(var_a3, u8 *, 0x62) = (u8) M2C_FIELD(temp_v1, u8 *, 0x942);
        M2C_FIELD(var_a3, s8 *, 0x63) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_v1, u8 *, 0x943)) / 255);
        var_a3 += 0x20;
    } while (var_a6 < 0x20U);
}

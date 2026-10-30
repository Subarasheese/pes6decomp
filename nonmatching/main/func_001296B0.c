/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001296B0(void *arg0) {
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    void *temp_v1;
    void *var_a1;
    void *var_a2_2;
    void *var_a2_3;

    var_a2 = 0;
    var_a1 = arg0;
    do {
        M2C_FIELD(var_a1, s16 *, 0xA4) = 0;
        var_a2 += 8;
        M2C_FIELD(var_a1, s16 *, 0xA8) = 0;
        M2C_FIELD(var_a1, s16 *, 0xAC) = 0;
        M2C_FIELD(var_a1, s16 *, 0xB0) = 0;
        M2C_FIELD(var_a1, s16 *, 0xB4) = 0;
        M2C_FIELD(var_a1, s16 *, 0xB8) = 0;
        M2C_FIELD(var_a1, s16 *, 0xBC) = 0;
        M2C_FIELD(var_a1, s16 *, 0xC0) = 0;
        var_a1 += 0x20;
    } while (var_a2 < 0x116);
    var_a1_2 = 0;
    temp_v1 = (var_a2 * 4) + arg0;
    var_a2_2 = arg0;
    M2C_FIELD(temp_v1, s16 *, 0xA4) = 0;
    M2C_FIELD(temp_v1, s16 *, 0xA8) = 0;
    M2C_FIELD(temp_v1, s16 *, 0xAC) = 0;
    M2C_FIELD(temp_v1, s16 *, 0xB0) = 0;
    M2C_FIELD(temp_v1, s16 *, 0xB4) = 0;
    M2C_FIELD(temp_v1, s16 *, 0xB8) = 0;
    do {
        M2C_FIELD(var_a2_2, s16 *, 0x998) = 0;
        var_a1_2 += 6;
        M2C_FIELD(var_a2_2, s16 *, 0x99C) = 0;
        M2C_FIELD(var_a2_2, s16 *, 0x9A0) = 0;
        M2C_FIELD(var_a2_2, s16 *, 0x9A4) = 0;
        M2C_FIELD(var_a2_2, s16 *, 0x9A8) = 0;
        M2C_FIELD(var_a2_2, s16 *, 0x9AC) = 0;
        var_a2_2 += 0x18;
    } while (var_a1_2 < 0x1E);
    var_a1_3 = 0;
    var_a2_3 = arg0;
    do {
        M2C_FIELD(var_a2_3, s16 *, 0xA8C) = 0;
        var_a1_3 += 6;
        M2C_FIELD(var_a2_3, s16 *, 0xA90) = 0;
        M2C_FIELD(var_a2_3, s16 *, 0xA94) = 0;
        M2C_FIELD(var_a2_3, s16 *, 0xA98) = 0;
        M2C_FIELD(var_a2_3, s16 *, 0xA9C) = 0;
        M2C_FIELD(var_a2_3, s16 *, 0xAA0) = 0;
        var_a2_3 += 0x18;
    } while (var_a1_3 < 0xD);
    M2C_FIELD(((var_a1_3 * 4) + arg0), s16 *, 0xA8C) = 0;
    M2C_FIELD(arg0, s16 *, 0x4A4) = 1;
    M2C_FIELD(arg0, s64 *, 0x16C0) = 0;
    M2C_FIELD(arg0, s64 *, 0x16B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x16C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x16B0) = 0;
}

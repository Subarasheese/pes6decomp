/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002C7840(void *arg0, s32 arg1, s8 *arg2) {
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;
    s8 *var_a1_2;
    s8 *var_a2;
    s8 *var_a3;
    s8 *var_a4;
    u8 *temp_a6;
    u8 temp_a4;
    void *temp_a5;

    var_a2 = arg2;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    var_v1 = 0;
    do {
        temp_a6 = arg1 + var_v1;
        temp_a5 = arg0 + var_v1;
        temp_a4 = M2C_FIELD(temp_a6, u8 *, 0);
        var_v1 += 8;
        M2C_FIELD(temp_a5, u8 *, 0x8C) = temp_a4;
        M2C_FIELD(temp_a5, u8 *, 0x28) = (u8) M2C_FIELD(temp_a6, u8 *, 0);
        M2C_FIELD(temp_a5, u8 *, 0x8D) = (u8) M2C_FIELD(temp_a6, u8 *, 1);
        M2C_FIELD(temp_a5, u8 *, 0x29) = (u8) M2C_FIELD(temp_a6, u8 *, 1);
        M2C_FIELD(temp_a5, u8 *, 0x8E) = (u8) M2C_FIELD(temp_a6, u8 *, 2);
        M2C_FIELD(temp_a5, u8 *, 0x2A) = (u8) M2C_FIELD(temp_a6, u8 *, 2);
        M2C_FIELD(temp_a5, u8 *, 0x8F) = (u8) M2C_FIELD(temp_a6, u8 *, 3);
        M2C_FIELD(temp_a5, u8 *, 0x2B) = (u8) M2C_FIELD(temp_a6, u8 *, 3);
        M2C_FIELD(temp_a5, u8 *, 0x90) = (u8) M2C_FIELD(temp_a6, u8 *, 4);
        M2C_FIELD(temp_a5, u8 *, 0x2C) = (u8) M2C_FIELD(temp_a6, u8 *, 4);
        M2C_FIELD(temp_a5, u8 *, 0x91) = (u8) M2C_FIELD(temp_a6, u8 *, 5);
        M2C_FIELD(temp_a5, u8 *, 0x2D) = (u8) M2C_FIELD(temp_a6, u8 *, 5);
        M2C_FIELD(temp_a5, u8 *, 0x92) = (u8) M2C_FIELD(temp_a6, u8 *, 6);
        M2C_FIELD(temp_a5, u8 *, 0x2E) = (u8) M2C_FIELD(temp_a6, u8 *, 6);
        M2C_FIELD(temp_a5, u8 *, 0x93) = (u8) M2C_FIELD(temp_a6, u8 *, 7);
        M2C_FIELD(temp_a5, u8 *, 0x2F) = (u8) M2C_FIELD(temp_a6, u8 *, 7);
    } while (var_v1 < 0x20);
    var_a3 = arg0 + 0x48;
    var_a1 = 0x35;
    var_a4 = var_a2;
    do {
        var_a1 -= 1;
        *var_a3 = *var_a4;
        var_a4 += 1;
        var_a3 += 1;
    } while (var_a1 > 0);
    var_a1_2 = arg0 + 0xAC;
    var_a0 = 0x35;
    do {
        var_a0 -= 1;
        *var_a1_2 = *var_a2;
        var_a2 += 1;
        var_a1_2 += 1;
    } while (var_a0 > 0);
}

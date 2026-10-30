/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00361E10(s32 arg0) {
    s32 temp_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    void *temp_a2;
    void *temp_v1;

    var_a4 = arg0 + 6;
    var_a6 = 0;
    do {
        temp_a3 = var_a4 + 0x6F;
        var_a5 = 0;
loop_2:
        temp_a2 = temp_a3 + var_a5;
        M2C_FIELD(temp_a2, s8 *, 0x36) = 1;
        var_a5 += 5;
        M2C_FIELD(temp_a2, s8 *, 0x41) = 0xFF;
        M2C_FIELD(temp_a2, s8 *, 0x37) = 1;
        M2C_FIELD(temp_a2, s8 *, 0x42) = 0xFF;
        M2C_FIELD(temp_a2, s8 *, 0x38) = 1;
        M2C_FIELD(temp_a2, s8 *, 0x43) = 0xFF;
        M2C_FIELD(temp_a2, s8 *, 0x39) = 1;
        M2C_FIELD(temp_a2, s8 *, 0x44) = 0xFF;
        M2C_FIELD(temp_a2, s8 *, 0x3A) = 1;
        M2C_FIELD(temp_a2, s8 *, 0x45) = 0xFF;
        if (var_a5 < 6) {
            goto loop_2;
        }
        temp_v1 = temp_a3 + var_a5;
        var_a6 += 1;
        M2C_FIELD(temp_v1, s8 *, 0x36) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x41) = 0xFF;
        var_a4 += 0x52;
    } while (var_a6 < 3);
}

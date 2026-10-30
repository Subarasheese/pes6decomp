/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008C8D20(void *arg0) {
    s32 var_a2;
    void *var_a0;

    var_a0 = arg0;
    M2C_FIELD(var_a0, s32 *, 0) = 0;
    M2C_FIELD(var_a0, s8 *, 4) = 0;
    M2C_FIELD(var_a0, s8 *, 5) = 0;
    var_a2 = 0;
    M2C_FIELD(var_a0, s8 *, 6) = 0;
    M2C_FIELD(var_a0, s8 *, 7) = 0;
    M2C_FIELD(var_a0, s8 *, 8) = -1;
    M2C_FIELD(var_a0, s8 *, 9) = 0;
    M2C_FIELD(var_a0, s8 *, 0xA) = 0;
    M2C_FIELD(var_a0, s8 *, 0xB) = 0;
    M2C_FIELD(var_a0, s8 *, 0xC) = 0;
    M2C_FIELD(var_a0, s8 *, 0xD) = 0;
    M2C_FIELD(var_a0, s8 *, 0xE) = 1;
    M2C_FIELD(var_a0, s8 *, 0xF) = 0;
    do {
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        var_a2 += 6;
        M2C_FIELD(var_a0, s8 *, 0x14) = 0;
        M2C_FIELD(var_a0, s32 *, 0x18) = 0;
        M2C_FIELD(var_a0, s8 *, 0x1C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x20) = 0;
        M2C_FIELD(var_a0, s8 *, 0x24) = 0;
        M2C_FIELD(var_a0, s32 *, 0x28) = 0;
        M2C_FIELD(var_a0, s8 *, 0x2C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x30) = 0;
        M2C_FIELD(var_a0, s8 *, 0x34) = 0;
        M2C_FIELD(var_a0, s32 *, 0x38) = 0;
        M2C_FIELD(var_a0, s8 *, 0x3C) = 0;
        var_a0 += 0x30;
    } while (var_a2 < 0x1E);
}

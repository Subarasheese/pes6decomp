/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCBA20[];

void func_00C5A1C0(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CCBA20);
    do {
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        var_a1 += 6;
        M2C_FIELD(var_a0, s32 *, 0x90) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0x98) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0xA0) = 0;
        M2C_FIELD(var_a0, s32 *, 0x18) = 0;
        M2C_FIELD(var_a0, s32 *, 0xA8) = 0;
        M2C_FIELD(var_a0, s32 *, 0x20) = 0;
        M2C_FIELD(var_a0, s32 *, 0xB0) = 0;
        M2C_FIELD(var_a0, s32 *, 0x28) = 0;
        M2C_FIELD(var_a0, s32 *, 0xB8) = 0;
        var_a0 += 0x30;
    } while (var_a1 < 0x12);
}

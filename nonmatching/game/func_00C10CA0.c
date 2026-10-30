/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00C10CA0(void *arg0) {
    s32 var_a1;
    void *var_a0;

    var_a0 = arg0;
    if (var_a0 != NULL) {
        var_a1 = 0;
        do {
            M2C_FIELD(var_a0, s32 *, 0) = 0;
            var_a1 += 8;
            M2C_FIELD(var_a0, s32 *, 4) = 0;
            M2C_FIELD(var_a0, s32 *, 8) = 0;
            M2C_FIELD(var_a0, s32 *, 0xC) = 0;
            M2C_FIELD(var_a0, s32 *, 0x10) = 0;
            M2C_FIELD(var_a0, s32 *, 0x14) = 0;
            M2C_FIELD(var_a0, s32 *, 0x18) = 0;
            M2C_FIELD(var_a0, s32 *, 0x1C) = 0;
            var_a0 += 0x20;
        } while (var_a1 < 0x30);
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008AB770[];

void func_00843BB0(void) {
    s32 temp_v1;
    s32 var_a2;
    void *temp_a0;

    var_a2 = 0;
    do {
        temp_v1 = var_a2 * 0x14;
        var_a2 += 1;
        temp_a0 = ((void *)D_008AB770) + temp_v1;
        M2C_FIELD(temp_a0, s32 *, 0) = 0;
        M2C_FIELD(temp_a0, s32 *, 4) = 0;
        M2C_FIELD(temp_a0, s32 *, 8) = 0;
        M2C_FIELD(temp_a0, s8 *, 0xC) = 0;
        M2C_FIELD(temp_a0, s8 *, 0xD) = 1;
        M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
    } while (var_a2 < 6);
}

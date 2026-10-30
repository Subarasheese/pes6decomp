/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];

void func_0027D460(void) {
    s32 var_a3;
    void *temp_a0;

    var_a3 = 0;
    do {
        M2C_FIELD((((void *)D_00591E00) + (var_a3 & 0xFF)), s8 *, 0x19) = 0xFF;
        M2C_FIELD((((void *)D_00591E00) + ((var_a3 + 1) & 0xFF)), s8 *, 0x19) = 0xFF;
        M2C_FIELD((((void *)D_00591E00) + ((var_a3 + 2) & 0xFF)), s8 *, 0x19) = 0xFF;
        M2C_FIELD((((void *)D_00591E00) + ((var_a3 + 3) & 0xFF)), s8 *, 0x19) = 0xFF;
        temp_a0 = ((void *)D_00591E00) + ((var_a3 + 4) & 0xFF);
        var_a3 = (var_a3 + 5) & 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0x19) = 0xFF;
    } while (var_a3 < 0xA);
}

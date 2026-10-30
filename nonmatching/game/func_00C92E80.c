/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8AC;

void func_00C92E80(s32 arg0) {
    s32 var_a5;
    s32 var_a6;
    void *temp_a4;

    var_a6 = 0;
    var_a5 = 0;
    do {
        if (D_003EA8AC != 0) {
            temp_a4 = D_003EA8AC + var_a5;
            M2C_FIELD(temp_a4, u8 *, 9) = (u8) ((M2C_FIELD(temp_a4, u8 *, 9) & ~4) | (((arg0 != 0) & 1) * 4));
            M2C_FIELD(temp_a4, u8 *, 8) = (u8) ((M2C_FIELD(temp_a4, u8 *, 8) & ~1) | 1);
        }
        var_a6 += 1;
        var_a5 += 0x14;
    } while (var_a6 < 2);
}

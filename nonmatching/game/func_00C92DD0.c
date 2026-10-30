/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8AC;

void func_00C92DD0(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    void *temp_a5;
    void *temp_a5_2;

    var_a2 = 0;
    var_a1 = 0;
    do {
        if (D_003EA8AC != 0) {
            if (D_003EA8AC != 0) {
                temp_a5 = D_003EA8AC + var_a1;
                M2C_FIELD(temp_a5, u8 *, 9) = (u8) ((M2C_FIELD(temp_a5, u8 *, 9) & ~4) | (((arg0 != 0) & 1) * 4));
                M2C_FIELD(temp_a5, u8 *, 8) = (u8) ((M2C_FIELD(temp_a5, u8 *, 8) & ~1) | 1);
            }
            temp_a5_2 = D_003EA8AC + var_a1;
            M2C_FIELD(temp_a5_2, u8 *, 9) = (u8) ((M2C_FIELD(temp_a5_2, u8 *, 9) & ~2) | ((arg0 & 1) * 2));
            M2C_FIELD(temp_a5_2, u8 *, 8) = (u8) ((M2C_FIELD(temp_a5_2, u8 *, 8) & ~1) | 1);
        }
        var_a2 += 1;
        var_a1 += 0x14;
    } while (var_a2 < 2);
}

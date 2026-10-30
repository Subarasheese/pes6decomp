/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EADA4;

void func_00AE31D0(void) {
    s32 temp_a2;
    s32 var_a5;
    void *temp_a2_2;

    if (D_003EADA4 != 0) {
        var_a5 = 0;
        do {
            temp_a2 = (var_a5 & 0xFF) * 0x314;
            var_a5 = (var_a5 + 1) & 0xFF;
            temp_a2_2 = D_003EADA4 + temp_a2;
            M2C_FIELD(temp_a2_2, s32 *, 0xF80) = 0;
            M2C_FIELD(temp_a2_2, s32 *, 0xF84) = 0;
            M2C_FIELD(temp_a2_2, s8 *, 0xF98) = 0xFF;
            M2C_FIELD(temp_a2_2, s8 *, 0xF99) = 0xFF;
            M2C_FIELD(temp_a2_2, s8 *, 0xF9E) = 0xFF;
            M2C_FIELD(temp_a2_2, s16 *, 0xF9A) = 0xFFFF;
            M2C_FIELD(temp_a2_2, s16 *, 0xF9C) = 0xFFFF;
            M2C_FIELD(temp_a2_2, s8 *, 0xFD6) = 0;
            M2C_FIELD(temp_a2_2, s8 *, 0x1289) = 0;
            M2C_FIELD(temp_a2_2, s8 *, 0x128A) = 0;
        } while (var_a5 < 0xF);
    }
}

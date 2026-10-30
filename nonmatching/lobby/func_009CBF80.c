/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_009FFAEC)(u8, void *, u32, s32, void *);
extern void *D_00A7DDA8;

void func_009CBF80(s32 arg0, s32 arg1) {
    s32 temp_a3;
    u32 temp_a2;
    u8 var_a0;
    u8 var_a0_2;
    void *temp_a4;

    temp_a4 = arg0 + D_00A7DDA8;
    temp_a3 = (M2C_FIELD(temp_a4, u8 *, 0xC) + 3) & 0xFF;
    temp_a2 = (temp_a3 + (arg1 & 0xFF)) & 0xFF;
    M2C_FIELD(temp_a4, u8 *, 0xC) = (u8) (temp_a2 % 3U);
    if (M2C_FIELD((arg0 + D_00A7DDA8), u8 *, 0xC) == 0) {
        if (D_00A7DDA8 != NULL) {
            var_a0 = M2C_FIELD(D_00A7DDA8, u8 *, 0x17);
        } else {
            var_a0 = 0;
        }
        if (var_a0 == 2) {
            M2C_FIELD(D_00A7DDA8, s32 *, 8) = 0xB;
            if (D_00A7DDA8 != NULL) {
                M2C_FIELD(D_00A7DDA8, u8 *, 0x17) = 1U;
                if (D_009FFAEC != NULL) {
                    if (D_00A7DDA8 != NULL) {
                        var_a0_2 = M2C_FIELD(D_00A7DDA8, u8 *, 0x17);
                    } else {
                        var_a0_2 = 0;
                    }
                    D_009FFAEC(var_a0_2, D_00A7DDA8, temp_a2, temp_a3, temp_a4);
                }
            }
        }
    }
}

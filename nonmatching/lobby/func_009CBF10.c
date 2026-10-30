/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DDA8;

void func_009CBF10(s32 arg0, s32 arg1) {
    s32 var_a4;
    u8 var_v1;
    void *temp_a3;

    if (D_00A7DDA8 != NULL) {
        var_v1 = M2C_FIELD(D_00A7DDA8, u8 *, 0x16);
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        var_a4 = 0;
    } else {
        var_a4 = 1;
    }
loop_8:
    temp_a3 = arg0 + D_00A7DDA8;
    M2C_FIELD(temp_a3, u8 *, 0xC) = (u8) ((((M2C_FIELD(temp_a3, u8 *, 0xC) + 4) & 0xFF) + (arg1 & 0xFF)) & 0xFF & 3);
    if (var_a4 != 0) {
        if (M2C_FIELD((arg0 + D_00A7DDA8), u8 *, 0xC) == 2) {
            goto loop_8;
        }
    }
}

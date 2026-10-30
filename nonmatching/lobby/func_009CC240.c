/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DDA8[];

void func_009CC240(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 temp_a2;
    void *temp_a5;

    var_a2 = M2C_FIELD(((void *)D_00A7DDA8), s32 *, 0);
loop_1:
    temp_a5 = arg0 + var_a2;
    M2C_FIELD(temp_a5, u8 *, 0xC) = (u8) ((u32) ((((M2C_FIELD(temp_a5, u8 *, 0xC) + 0xA) & 0xFF) + (arg1 & 0xFF)) & 0xFF) % 10U);
    temp_a2 = M2C_FIELD((arg0 + *(s32 *)0xA7DDA8), u8 *, 0xC);
    if ((s32) temp_a2 >= 4) {
        if ((s32) temp_a2 < 9) {
            var_a2 = M2C_FIELD(((void *)D_00A7DDA8), s32 *, -0x2258);
            goto loop_1;
        }
    }
}

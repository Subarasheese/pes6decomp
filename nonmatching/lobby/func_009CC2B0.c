/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DDA8[];

void func_009CC2B0(s32 arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = arg0 + (*(s32 *)D_00A7DDA8);
    M2C_FIELD(temp_a0, u8 *, 0xC) = (u8) ((u32) ((((M2C_FIELD(temp_a0, u8 *, 0xC) + 3) & 0xFF) + (arg1 & 0xFF)) & 0xFF) % 3U);
}

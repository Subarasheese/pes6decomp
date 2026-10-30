/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 *D_00A7DDA8;

void func_009CC2F0(s32 arg0, s32 arg1) {
    u32 var_v1;
    u8 *var_a2;

    if (*D_00A7DDA8 != 2) {
        var_a2 = &D_00A7DDA8[arg0];
        var_v1 = (u32) ((((M2C_FIELD(var_a2, u8 *, 0xC) + 3) & 0xFF) + (arg1 & 0xFF)) & 0xFF) % 3U;
    } else {
        var_a2 = &D_00A7DDA8[arg0];
        var_v1 = (((M2C_FIELD(var_a2, u8 *, 0xC) + 2) & 0xFF) + (arg1 & 0xFF)) & 0xFF & 1;
    }
    M2C_FIELD(var_a2, s8 *, 0xC) = (s8) var_v1;
}

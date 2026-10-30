/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7A08;
extern char D_00591DC4[];

void func_009960C0(void) {
    u8 temp_a0;
    u8 temp_a0_2;
    u8 var_v1;

    if (((*(s32 *)D_00591DC4) == M2C_FIELD(D_003E7A08, s32 *, 0x1C)) && (M2C_FIELD(D_003E7A08, s32 *, 4) != 0)) {
        var_v1 = M2C_FIELD(D_003E7A08, u8 *, 0x28D) | 1;
    } else {
        var_v1 = M2C_FIELD(D_003E7A08, u8 *, 0x28D) & 0xFE;
    }
    M2C_FIELD(D_003E7A08, u8 *, 0x28D) = var_v1;
    temp_a0 = M2C_FIELD(D_003E7A08, u8 *, 0x28D);
    if (temp_a0 & 4) {
        M2C_FIELD(D_003E7A08, u8 *, 0x28D) = (u8) (temp_a0 & 0xFB);
    }
    temp_a0_2 = M2C_FIELD(D_003E7A08, u8 *, 0x28D);
    if (temp_a0_2 & 2) {
        M2C_FIELD(D_003E7A08, u8 *, 0x28D) = (u8) (temp_a0_2 & 0xFD);
        M2C_FIELD(D_003E7A08, u8 *, 0x28D) = (u8) (M2C_FIELD(D_003E7A08, u8 *, 0x28D) | 4);
    }
}

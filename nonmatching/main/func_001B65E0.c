/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005228F0[];

void func_001B65E0(s32 arg0) {
    u8 var_a0;

    if (arg0 == -1) {
        M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) & ~2) | ((0 & 1) * 2));
        var_a0 = (M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) & ~4) | 4;
    } else {
        M2C_FIELD(((void *)D_005228F0), s32 *, 0x10) = arg0;
        M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) & ~2) | 2);
        var_a0 = (M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) & ~4) | 4;
    }
    M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) = var_a0;
}

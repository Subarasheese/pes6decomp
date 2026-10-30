/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00967760(void *);                          /* extern */
s32 func_009B3070(u16, s32);                        /* extern */
extern char D_00591E4C[];

s32 func_00967690(void *arg0) {
    s32 var_v0;

    if (M2C_FIELD(arg0, u8 *, 0x16) != 2) {
        goto block_12;
    }
    if (M2C_FIELD(arg0, u16 *, 0x18) != 0x52) {
        var_v0 = 0x1400;
    } else {
        var_v0 = 0x3000;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x301) {
        if ((var_v0 & 0xFFFF & 0xFFFF) < (func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), func_00967760(arg0)) & 0xFFFF)) {
            goto block_14;
        }
        goto block_9;
    }
block_9:
    if (M2C_FIELD(arg0, u16 *, 0x18) != 0x58) {
        if ((*(u8 *)D_00591E4C) == 0) {
            goto block_14;
        }
block_12:
        return 0;
    }
block_14:
    return 1;
}

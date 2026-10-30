/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, M2C_UNK);                    /* extern */
extern char D_00591E19[];

s32 func_00A98CB0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x16) != 0x9D) {
        goto block_5;
    }
    if ((M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) && ((arg1 & 0xFFFF) < 0x21)) {
        return 0x100;
    }
block_5:
    if ((arg1 & 0xFFFF) < 0x60) {
        return ((0x40 - (func_009B3070(arg1, 0x40) & 0xFFFF)) * 2) + 0x40;
    }
    return 0x40;
}

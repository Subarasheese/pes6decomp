/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEDC0[];

s32 func_00197FE0(s32 arg0, u32 arg1) {
    if (arg0 >= M2C_FIELD(((void *)D_011FEDC0), s32 *, 0)) {
        return -0xB;
    }
    if (arg1 >= 2U) {
        return -0xC;
    }
    M2C_FIELD(((arg0 * 0x38) + M2C_FIELD(((void *)D_011FEDC0), s32 *, 4)), u32 *, 4) = arg1;
    return 0;
}

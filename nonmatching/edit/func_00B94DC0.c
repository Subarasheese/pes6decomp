/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE35B0[];

u8 func_00B94DC0(s32 arg0) {
    if (arg0 >= 0x24) {
        return 0U;
    }
    return M2C_FIELD((arg0 + (*(s32 *)D_00CE35B0)), u8 *, 0x19D0);
}

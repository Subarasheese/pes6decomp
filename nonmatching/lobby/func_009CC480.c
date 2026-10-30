/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DDA8[];

u8 func_009CC480(s32 arg0) {
    if ((*(s32 *)D_00A7DDA8) != 0) {
        return M2C_FIELD((arg0 + (*(s32 *)D_00A7DDA8)), u8 *, 0xC);
    }
    return 0U;
}

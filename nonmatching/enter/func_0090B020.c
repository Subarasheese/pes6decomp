/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern M2C_UNK *D_0092F0A0;
extern char D_0092F0A4[];
extern char D_0092F0D0[];
extern M2C_UNK func_0090AE90;

s32 func_0090B020(void) {
    (*(s32 *)D_0092F0D0) |= 4;
    if (func_0017F900() == 1) {
        D_0092F0A0 = &func_0090AE90;
        (*(s8 *)D_0092F0A4) = 0;
        (*(s32 *)D_0092F0D0) &= ~4;
    }
    return 0;
}

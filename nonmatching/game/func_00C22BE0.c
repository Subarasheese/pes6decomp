/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern char D_00C9F23C[];

s32 func_00C22BE0(void) {
    if (func_0017F900() == 0) {
        return 0;
    }
    (*(s32 *)D_00C9F23C) = 0;
    return 1;
}

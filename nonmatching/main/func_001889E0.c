/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FF45[];
extern void *D_00520080;

s32 func_001889E0(void) {
    if (((*(u8 *)D_0051FF45) == 2) && ((M2C_FIELD(D_00520080, u8 *, 3) != 0) == 1)) {
        return 1;
    }
    return 0;
}

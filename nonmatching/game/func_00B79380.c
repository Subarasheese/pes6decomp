/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591F24[];

s32 func_00B79380(void) {
    if (((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6) && ((*(u8 *)D_00591F24) != 1) && ((*(u8 *)D_00591F24) != 2)) {
        return 0;
    }
    return 1;
}

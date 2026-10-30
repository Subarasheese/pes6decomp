/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005926FE[];

s32 func_00BF6F40(void) {
    if (((*(u8 *)D_005926FE) != 2) && ((*(u8 *)D_005926FE) != 4) && ((*(u8 *)D_005926FE) != 1)) {
        return 1;
    }
    return 0;
}

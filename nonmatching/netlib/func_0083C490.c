/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A9B7A[];

s32 func_0083C490(void) {
    if (func_00D0BAF0() != 0) {
        (*(s8 *)D_008A9B7A) = 1;
    }
    return 2;
}

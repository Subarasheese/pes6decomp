/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B61D10(s32);                             /* extern */
s32 func_00B6A540(M2C_UNK);                         /* extern */

s32 func_00B6CA40(s32 arg0) {
    if (func_00B6A540(1) == 0) {
        return func_00B61D10(arg0) != 0;
    }
    return 1;
}

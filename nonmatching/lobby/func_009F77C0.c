/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00825610();                                /* extern */
s32 func_00832600();                                /* extern */

s32 func_009F77C0(s32 arg0) {
    if (func_00825610() != 6) {
        return 1;
    }
    return arg0 != func_00832600();
}

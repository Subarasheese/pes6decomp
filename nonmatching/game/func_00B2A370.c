/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29CB0();                                /* extern */

void func_00B2A370(s32 *arg0, s32 arg1) {
    if (func_00B29CB0() != 0) {
        *arg0 = arg1;
    }
}

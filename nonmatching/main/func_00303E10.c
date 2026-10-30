/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD9570();                                /* extern */
s32 func_00BD95C0();                                /* extern */

s32 func_00303E10(void) {
    if (func_00BD95C0() == 0) {
        if (func_00BD9570() == 0) {
            return 0;
        }
        goto block_4;
    }
block_4:
    return 1;
}

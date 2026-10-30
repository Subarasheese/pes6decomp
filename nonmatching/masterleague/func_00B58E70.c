/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
s32 func_00B54300();                                /* extern */
s32 func_00B58EC0();                                /* extern */

s32 func_00B58E70(void) {
    if (func_00226E70() == 0) {
        return 0;
    }
    if (func_00B54300() != 0xD) {
        return 0;
    }
    return func_00B58EC0();
}

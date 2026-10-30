/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
s32 func_00CD4A40();                                /* extern */

void func_00CEE540(void *arg0) {
    if (func_00CD4A40() != 0) {
        func_00264790(arg0, 0xAU);
    }
}

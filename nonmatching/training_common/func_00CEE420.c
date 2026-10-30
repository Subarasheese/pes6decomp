/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
s32 func_00CF0870();                                /* extern */

void func_00CEE420(void *arg0) {
    if (func_00CF0870() != 0) {
        func_00264790(arg0, 0xFU);
    }
}

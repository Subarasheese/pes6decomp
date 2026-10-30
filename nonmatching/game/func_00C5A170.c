/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_00C13A10(u32);
s32 func_0084FBE0();                                /* extern */

void func_00C5A170(void) {
    if (func_002DCA30() == 0) {
        return;
    }
    if (func_0084FBE0() == 1) {
        func_00C13A10(0x5000U);
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00993770(s32);
s32 func_0095ED20();                                /* extern */

s32 func_00993730(void) {
    if (func_0095ED20() != 0) {
        func_00993770(-1);
    }
    return 0;
}

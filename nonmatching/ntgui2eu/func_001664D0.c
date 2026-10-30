/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00189798(void *);                          /* extern */

void func_001664D0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x53C) != 0) {
        if (func_00189798(arg0 + 0x540) != 0) {
            M2C_FIELD(arg0, s32 *, 0x53C) = 0;
        }
    }
}

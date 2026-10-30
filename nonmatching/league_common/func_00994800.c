/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A00(void);
u64 func_00994800(void) {
    u8 *temp_v0;

    temp_v0 = func_00228A00();
    if (temp_v0 != NULL) {
        return (u64) ((s64) *temp_v0 << 0x3C) >> 0x3F;
    }
    return 0U;
}

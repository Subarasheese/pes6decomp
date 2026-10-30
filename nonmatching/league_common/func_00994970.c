/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A00(void);
s32 func_00994970(void) {
    u8 *temp_v0;

    temp_v0 = func_00228A00();
    if (temp_v0 != NULL) {
        return *temp_v0 & 1;
    }
    return 0;
}

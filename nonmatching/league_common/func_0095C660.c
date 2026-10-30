/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_0095C660(void) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0x325A8);
    }
    return 0x1388;
}

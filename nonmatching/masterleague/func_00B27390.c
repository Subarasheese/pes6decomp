/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
s32 func_00B27390(void) {
    void *temp_v0;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u16 *, 0xE6) != 0;
    }
    return 0;
}

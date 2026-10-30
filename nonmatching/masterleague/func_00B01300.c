/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
u8 func_00B01300(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        return M2C_FIELD(((arg0 & 0xFF) + temp_v0), u8 *, 0xCE22);
    }
    return 0xFFU;
}

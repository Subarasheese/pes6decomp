/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D10E10(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, s8 *, 0x3E) = 1;
        return 0;
    }
    return 1;
}

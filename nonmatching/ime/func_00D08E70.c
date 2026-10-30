/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D08E70(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x52A) = 0;
        M2C_FIELD(arg0, s8 *, 0x52B) = 0;
        M2C_FIELD(arg0, s8 *, 0x52D) = 0x11;
        M2C_FIELD(arg0, s8 *, 0x527) = 2;
        M2C_FIELD(arg0, s8 *, 0x525) = 1;
        M2C_FIELD(arg0, s8 *, 0x534) = 1;
        return 1;
    }
    return 0;
}

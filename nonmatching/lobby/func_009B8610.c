/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DC10;

s32 func_009B8610(void) {
    if (D_00A7DC10 == NULL) {
        return 4;
    }
    if (D_00A7DC10 != NULL) {
        if (M2C_FIELD(D_00A7DC10, s32 *, 0) != 1) {
            M2C_FIELD(D_00A7DC10, s8 *, 0x62) = 1;
        }
        M2C_FIELD(D_00A7DC10, s32 *, 0) = 1;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7E018;

void func_009F0C20(void) {
    if ((D_00A7E018 != NULL) && (M2C_FIELD(D_00A7E018, u8 *, 1) == 3)) {
        M2C_FIELD(D_00A7E018, u8 *, 1) = 2U;
        M2C_FIELD(D_00A7E018, s8 *, 2) = 0;
    }
}

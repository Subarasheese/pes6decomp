/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68FD0;

void func_0097C610(void) {
    if (D_00A68FD0 != NULL) {
        M2C_FIELD(D_00A68FD0, s32 *, 8) = 1;
    }
}

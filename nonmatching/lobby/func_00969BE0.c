/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68CA8;

void func_00969BE0(void) {
    if (D_00A68CA8 != NULL) {
        M2C_FIELD(D_00A68CA8, s32 *, 0x180) = 1;
    }
}

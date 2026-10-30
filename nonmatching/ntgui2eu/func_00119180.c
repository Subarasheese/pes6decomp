/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_00119180(f32 fparg0) {
    M2C_FIELD(D_006024F0, f32 *, 0x58) = fparg0;
    M2C_FIELD(D_006024F0, s32 *, 0x18) = 1;
}

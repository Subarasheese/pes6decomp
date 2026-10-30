/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_00119144(f32 fparg0) {
    M2C_FIELD(D_006024F0, s32 *, 0x3C) = (s32) (fparg0 - 0.0f);
    M2C_FIELD(D_006024F0, s32 *, 0x18) = 1;
}

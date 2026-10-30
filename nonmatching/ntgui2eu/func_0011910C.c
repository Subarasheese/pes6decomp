/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_0011910C(f32 fparg0, f32 fparg1) {
    M2C_FIELD(D_006024F0, f32 *, 0x60) = fparg0;
    M2C_FIELD(D_006024F0, f32 *, 0x64) = fparg1;
}

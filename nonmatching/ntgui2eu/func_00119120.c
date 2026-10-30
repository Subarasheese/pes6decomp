/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_00119120(s32 arg0) {
    M2C_FIELD(D_006024F0, s32 *, 0x3C) = (s32) (f32) arg0;
    M2C_FIELD(D_006024F0, s32 *, 0x18) = 1;
}

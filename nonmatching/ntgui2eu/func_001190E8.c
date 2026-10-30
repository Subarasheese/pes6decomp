/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_001190E8(s32 arg0, s32 arg1) {
    M2C_FIELD(D_006024F0, f32 *, 0x60) = (f32) arg0;
    M2C_FIELD(D_006024F0, f32 *, 0x64) = (f32) arg1;
}

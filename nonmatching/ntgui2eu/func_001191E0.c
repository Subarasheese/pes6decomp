/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_001191E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(D_006024F0, f32 *, 0x70) = (f32) ((f32) arg0 * 0.0078125f);
    M2C_FIELD(D_006024F0, f32 *, 0x74) = (f32) ((f32) arg1 * 0.0078125f);
    M2C_FIELD(D_006024F0, f32 *, 0x78) = (f32) ((f32) arg2 * 0.0078125f);
    M2C_FIELD(D_006024F0, f32 *, 0x7C) = (f32) ((f32) arg3 * 0.0078125f);
}

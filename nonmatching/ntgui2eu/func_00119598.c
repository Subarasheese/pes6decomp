/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

s32 func_00119598(void) {
    return (s32) (M2C_FIELD(D_006024F0, f32 *, 0x64) * 16.0f);
}

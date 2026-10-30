/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_001195BC(f32 *arg0, f32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(D_006024F0, f32 *, 0x60);
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(D_006024F0, f32 *, 0x64);
    }
}

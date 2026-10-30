/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00A53E10(void *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0xF4) < -512.0f) {
        M2C_FIELD(arg0, f32 *, 0xF4) = -512.0f;
    }
    if (!(M2C_FIELD(arg0, f32 *, 0xF4) <= 512.0f)) {
        M2C_FIELD(arg0, f32 *, 0xF4) = 512.0f;
    }
}

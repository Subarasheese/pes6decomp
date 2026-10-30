/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00972190(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(((M2C_FIELD(arg0, s16 *, 6) * 0x10) + arg0), f32 *, 8);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(((M2C_FIELD(arg0, s16 *, 6) * 0x10) + arg0), f32 *, 0xC);
    }
}

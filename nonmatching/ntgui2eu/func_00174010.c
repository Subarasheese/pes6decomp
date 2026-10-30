/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00174010(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xB94);
    if (M2C_FIELD(arg0, s32 *, 0xB8C) < temp_v1) {
        M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v1;
    }
}

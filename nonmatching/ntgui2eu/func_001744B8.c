/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001744B8(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xB8C);
    M2C_FIELD(arg0, s32 *, 0xB8C) = (s32) M2C_FIELD(arg0, s32 *, 0xB94);
    M2C_FIELD(arg0, s32 *, 0xB94) = temp_v1;
}

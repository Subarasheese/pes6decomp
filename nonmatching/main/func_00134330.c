/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134330(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50004);
    temp_a1 = (arg1 >= temp_v0) ? temp_v0 : arg1;
    M2C_FIELD(arg0, s32 *, 0x50004) = (s32) (M2C_FIELD(arg0, s32 *, 0x50004) - temp_a1);
    return temp_a1;
}

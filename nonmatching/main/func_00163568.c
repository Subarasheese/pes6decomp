/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00163568(void *arg0) {
    s8 var_v0;

    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        var_v0 = 3;
    } else {
        var_v0 = 2;
    }
    M2C_FIELD(arg0, s8 *, 1) = var_v0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x47) = 1;
}

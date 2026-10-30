/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DBD8[];

void func_00175F08(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (arg1 > 0) ? 0 : arg1;
    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((temp_a1 < -0x3E7) ? -0x3E7 : temp_a1);
    }
}

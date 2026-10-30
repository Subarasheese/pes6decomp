/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
void func_00B22420(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) + arg1);
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001DE1A0(s32, s32, f32);
extern f32 func_001DE2F0(s32, s32);
void *func_00BA69A0(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s16 *, 0) = 0;
    M2C_FIELD(arg2, s16 *, 2) = 0;
    M2C_FIELD(arg2, s16 *, 4) = (s16) (s32) func_001DE2F0(arg0, arg1);
    M2C_FIELD(arg2, s16 *, 6) = (s16) (s32) func_001DE1A0(arg0, arg1, 3.4028235e38f);
    return arg2;
}

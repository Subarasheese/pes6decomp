/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E3370(void *, s32);
M2C_UNK func_002E3660(s32, s32);                    /* extern */
M2C_UNK func_002E38B0(s32, s32);                    /* extern */

void func_00B92CC0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = func_002E3370(arg0, arg1);
    func_002E38B0(temp_v0, arg2);
    func_002E3660(temp_v0, arg3);
}

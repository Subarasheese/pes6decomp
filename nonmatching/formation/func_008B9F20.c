/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F2330(s32);
extern s32 func_001F3D10(s32, u8);
extern void func_001F2290(void *, s32);
M2C_UNK func_001F3D80(s32, s32, M2C_UNK);           /* extern */

s32 func_008B9F20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_001F2330(arg0);
    func_001F3D10(temp_v0, 1U);
    func_001F2290((void *) temp_v0, arg1);
    if (arg2 != 0) {
        func_001F3D80(temp_v0, arg2, 0);
    }
    return temp_v0;
}

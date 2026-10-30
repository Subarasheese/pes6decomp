/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00128948(s32, s32);                    /* extern */
M2C_UNK func_00128F88(s32, s32, s32, s32);          /* extern */
s32 func_001294E0();                                /* extern */

s32 func_00129588(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = func_001294E0();
    func_00128948(temp_v0, arg0);
    func_00128F88(temp_v0, arg1, arg2, arg3);
    return temp_v0;
}

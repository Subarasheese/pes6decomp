/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134FE8(s32);                             /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */
s32 func_001B0444();                                /* extern */

s32 func_001896B8(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_001B0444() + 1;
    temp_v0 = func_00134FE8(temp_s1);
    if (temp_v0 == 0) {
        return 0;
    }
    func_001AE624(temp_v0, arg0, temp_s1);
    return temp_v0;
}

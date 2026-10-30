/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0010EB08();                                /* extern */
M2C_UNK func_0010EE10(s32, s32);                    /* extern */

s32 func_0010EAB8(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_s2;

    temp_s2 = func_0010EB08();
    func_0010EE10(arg0, arg2);
    return temp_s2;
}

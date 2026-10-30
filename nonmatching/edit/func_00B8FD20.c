/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6D30(s32, s32);
s32 func_001D6EF0(s32, s32, s32);                   /* extern */
s32 func_001F0160(s32);                             /* extern */

s32 func_00B8FD20(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg0 != NULL) {
        if (*arg0 == 0) {
            temp_v0 = func_001D6EF0(arg1, func_001F0160(func_001D6D30(arg1, arg2)), arg2);
            *arg0 = temp_v0;
            return temp_v0 != 0;
        }
        goto block_4;
    }
block_4:
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F2410(void *);
M2C_UNK func_008BB690(s32, s32, s32, s32);          /* extern */

s32 func_008BB870(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v0 = func_001F2410(arg0);
    if (temp_v0 != 0) {
        func_008BB690(temp_v0, arg1, arg2, arg3);
    }
    return temp_v0;
}

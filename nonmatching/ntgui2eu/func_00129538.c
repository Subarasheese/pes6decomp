/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00128948(s32, s32);                        /* extern */
s32 func_001294E0();                                /* extern */

s32 func_00129538(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = func_001294E0();
    *arg1 = func_00128948(temp_v0, arg0);
    return temp_v0;
}

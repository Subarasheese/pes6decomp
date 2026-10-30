/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00841F40(void);
M2C_UNK func_0026E560(s32);                         /* extern */

s32 func_00822610(void) {
    s32 temp_v0;

    temp_v0 = func_00841F40();
    if (temp_v0 != 0) {
        func_0026E560(temp_v0);
    }
    return 1;
}

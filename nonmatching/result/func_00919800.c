/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_00918F90(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00919800(void) {
    s32 temp_v0;

    temp_v0 = func_00918F90(0, -1);
    if (temp_v0 != 0) {
        func_0026E840(temp_v0);
    }
    return 0;
}

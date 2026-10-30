/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F4130(s32, M2C_UNK, M2C_UNK, s32);  /* extern */

void func_00AECBA0(s32 *arg0, s32 arg1) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *arg0;
        if (temp_a0 != 0) {
            func_002F4130(temp_a0, 1, 0, arg1);
        }
    }
}

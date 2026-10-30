/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B9A90(s32, s32);                    /* extern */

void func_008E7710(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        func_008B9A90(temp_a0, arg1 & 0xFF);
    }
}

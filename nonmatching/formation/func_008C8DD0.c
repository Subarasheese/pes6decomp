/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C13D0(s32, M2C_UNK, s32);           /* extern */

void func_008C8DD0(s32 *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_008C13D0(temp_a0, 0x90, arg1);
    }
}

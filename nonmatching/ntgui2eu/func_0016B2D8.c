/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016A088(s32, s32, M2C_UNK);               /* extern */

void func_0016B2D8(s32 *arg0, s32 *arg1) {
    s32 temp_a1;

    temp_a1 = *arg1;
    if (temp_a1 == 0) {
        *arg0 = 0;
        return;
    }
    *arg0 = func_0016A088(*arg0, temp_a1, 0);
}

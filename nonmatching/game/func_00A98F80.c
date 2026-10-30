/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(u8);                              /* extern */

s32 func_00A98F80(u8 *arg0) {
    u8 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 == 0) {
        return 0;
    }
    return *arg0 - (func_00AFBAB0(temp_a0) & 0xFF);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BD2B0();                                /* extern */
M2C_UNK func_009BD9B0(M2C_UNK);                     /* extern */

s32 func_009BEC70(void) {
    s32 temp_s0;

    temp_s0 = func_009BD2B0() & 0xFF;
    if (temp_s0 == 1) {
        func_009BD9B0(1);
    }
    return temp_s0;
}

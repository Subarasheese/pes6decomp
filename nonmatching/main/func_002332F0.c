/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00229460();                                /* extern */
s32 func_00231240();                                /* extern */
M2C_UNK func_00233040(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00236FE0();                            /* extern */

void func_002332F0(void) {
    s32 temp_s0;

    temp_s0 = func_00229460();
    if ((func_00231240() != 1) && (temp_s0 != 0)) {
        func_00236FE0();
        func_00233040(0xFF, temp_s0 + 0x71, temp_s0 + 0x4BA6);
    }
}

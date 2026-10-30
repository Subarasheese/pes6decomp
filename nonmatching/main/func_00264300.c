/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00264300(s32 arg0, s32 arg1) {
    u32 var_a2;

    var_a2 = 0;
    do {
        if ((s32) M2C_FIELD((arg0 + var_a2), u8 *, 0x29) >= (arg1 & 0xFF)) {

        }
        var_a2 += 1;
    } while (var_a2 < 8U);
}

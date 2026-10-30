/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002297F0(s32);
s32 func_00956830(void) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
loop_1:
    temp_v0 = func_002297F0(var_s0 & 0xFF);
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 0x7E) == 0)) {
        return var_s0 & 0xFF;
    }
    var_s0 += 1;
    if (var_s0 >= 0x25) {
        return 0xFF;
    }
    goto loop_1;
}

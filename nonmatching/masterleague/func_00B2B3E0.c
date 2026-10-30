/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B2B3E0(s32 arg0) {
    s32 var_a1;
    void *var_v0;

    var_v0 = func_00228A80();
    if (var_v0 != NULL) {
        var_a1 = 0;
loop_5:
        if ((arg0 & 0xFFFF) != M2C_FIELD(var_v0, u16 *, 0x32EEE)) {
            var_a1 += 1;
            var_v0 += 2;
            if (var_a1 >= 0x3E8) {
                goto block_10;
            }
            goto loop_5;
        }
        return 1;
    }
block_10:
    return 0;
}

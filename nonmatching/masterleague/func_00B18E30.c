/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B18E30(s32 arg0) {
    s32 temp_s0;
    s32 var_a0;
    void *var_v0;

    temp_s0 = arg0 & 0xFFFF;
    if (temp_s0 == 0) {
        goto block_11;
    }
    var_v0 = func_00228A80();
    if (var_v0 != NULL) {
        var_a0 = 0;
loop_6:
        if (temp_s0 != M2C_FIELD(var_v0, u16 *, 0x32EAE)) {
            var_a0 += 1;
            var_v0 += 2;
            if (var_a0 >= 0x20) {
                goto block_11;
            }
            goto loop_6;
        }
        return var_a0 & 0xFF;
    }
block_11:
    return 0xFF;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
u32 func_00AF5400(s32 arg0) {
    u32 var_a2;
    void *temp_v0;
    void *var_a1;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a2 = 0;
        var_a1 = temp_v0;
loop_5:
        if (M2C_FIELD(var_a1, u16 *, 0xA68C) != (arg0 & 0xFFFF)) {
            var_a2 += 1;
            var_a1 += 0x32;
            if (var_a2 >= 0x25U) {
                goto block_12;
            }
            goto loop_5;
        }
        if (M2C_FIELD(((var_a2 * 0x32) + temp_v0), u8 *, 0xA68E) == 0) {
            var_a2 = 0xFFFF;
        }
        return var_a2;
    }
block_12:
    return 0xFFFFU;
}

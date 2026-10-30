/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B18EB0(s32 arg0, s32 arg1) {
    s32 var_a1;
    void *temp_v0;
    void *var_a0;

    if ((arg0 & 0xFF) >= 0x48) {
        goto block_12;
    }
    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a1 = 0;
        var_a0 = temp_v0 + ((arg0 & 0xFF) << 5);
loop_7:
        if ((arg1 & 0xFFFF) != M2C_FIELD(var_a0, u16 *, 0x325AE)) {
            var_a1 += 1;
            var_a0 += 2;
            if (var_a1 >= 0x10) {
                goto block_12;
            }
            goto loop_7;
        }
        return var_a1 & 0xFF;
    }
block_12:
    return 0xFF;
}

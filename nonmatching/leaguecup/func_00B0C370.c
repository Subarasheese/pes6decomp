/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

s32 func_00B0C370(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    void *var_a1;

    var_a1 = D_003EAD68;
    if (var_a1 != NULL) {
        temp_v1 = arg0 & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            var_a0 = 0;
loop_8:
            if (temp_v1 != M2C_FIELD(var_a1, u16 *, 0x1380)) {
                var_a0 += 1;
                var_a1 += 2;
                if (var_a0 >= 0x20) {
                    goto block_13;
                }
                goto loop_8;
            }
            return 1;
        }
block_13:
        return 0;
    }
    return 0xFFFF;
}

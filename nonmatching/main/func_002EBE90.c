/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002EBE90(void *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a3 = 0;
loop_1:
    var_a2 = 0;
    var_a1 = var_a0;
loop_2:
    if ((arg1 & 0xFFFF) != M2C_FIELD(var_a1, s32 *, 0x1944)) {
        var_a2 += 1;
        var_a1 += 4;
        if (var_a2 >= 0x14) {
            var_a3 += 1;
            var_a0 += 0x4A4;
            if (var_a3 >= 0x14) {
                return 0;
            }
            goto loop_1;
        }
        goto loop_2;
    }
    return 1;
}

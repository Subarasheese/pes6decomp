/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A3650(void *arg0) {
    u32 temp_a1;
    u32 var_a3;
    void *var_a2;

    temp_a1 = M2C_FIELD(arg0, u32 *, 4);
    var_a3 = 0;
    if (temp_a1 != 0) {
        var_a2 = M2C_FIELD(arg0, void **, 0);
loop_2:
        if (M2C_FIELD(var_a2, s32 *, 4) == 0) {
            var_a3 += 1;
            var_a2 += 0x10DA0;
            if (var_a3 >= temp_a1) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 0;
            }
            goto loop_2;
        }
        return 1;
    }
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK *func_001BB390(M2C_UNK *arg0, s32 arg1) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_a0;
    s32 var_v1;

    var_a0 = arg0;
    if ((var_a0 != NULL) && (M2C_FIELD(var_a0, s32 *, 0xC) != 0)) {
        var_v1 = 0;
        if (arg1 > 0) {
loop_3:
            temp_v0 = *var_a0;
            if (temp_v0 != NULL) {
                var_a0 = temp_v0;
                var_v1 += 1;
                if (var_v1 >= arg1) {

                } else {
                    goto loop_3;
                }
            }
        }
    }
    return var_a0;
}

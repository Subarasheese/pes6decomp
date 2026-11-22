/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

s32 func_00BF5E70(s8 *arg0) {
    s8 *temp_v1;
    s8 *var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    return var_a0 - temp_v1;
}

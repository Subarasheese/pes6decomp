/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

u8 *func_00BF5F28(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_v1;
    u8 *temp_a3;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a3 = var_a0;
    var_v1 = arg2 - 1;
    if (arg2 != 0) {
        do {
            temp_v0 = *var_a1;
            var_a1 += 1;
            var_v1 -= 1;
            *var_a0 = temp_v0;
            var_a0 += 1;
        } while (var_v1 != -1);
    }
    return temp_a3;
}

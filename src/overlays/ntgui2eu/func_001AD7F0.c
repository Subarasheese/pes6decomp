/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"


void func_001AD7F0(s8 *arg0, s32 arg1) {
    s32 var_v0;
    s8 *var_a0;

    var_a0 = arg0;
    var_v0 = arg1 - 1;
    if (arg1 != 0) {
        do {
            var_v0 -= 1;
            *var_a0 = 0;
            var_a0 += 1;
        } while (var_v0 != -1);
    }
}

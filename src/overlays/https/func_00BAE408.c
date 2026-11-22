/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BAE408(void **arg0, s32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0;
    if (arg1 == 0xC) {
        M2C_FIELD(*arg0, s32 *, 0x14) = (s32)*arg2;
    } else {
        var_a3 = 0x2722;
    }
    return var_a3;
}

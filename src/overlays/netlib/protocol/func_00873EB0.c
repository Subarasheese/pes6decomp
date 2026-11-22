/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00873EB0(void *arg0) {
    s32 result;
    do {

        s32 var_v0;

        var_v0 = M2C_FIELD(arg0, s32 *, 0x454);
        if (var_v0 >= M2C_FIELD(arg0, s32 *, 4)) {
            {
                result = -1;
                break;
            }
        }
        if (var_v0 == 0) {
            var_v0 = 0;
        }
        result = var_v0;

    } while (0);
    return result;
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

u32 func_002F9720(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_a3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a4;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (var_a1 == -1) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 4);
            var_a1 = 0;
            var_a4 = 0;
            if (temp_v1 > 0) {
                var_a3 = M2C_FIELD(arg0, s32 **, 0);
                do {
                    if (*var_a3 == 0) {
                        var_a1 = var_a4;
                        break;
                    }
                    var_a4 += 1;
                    var_a3 += 1;
                } while (var_a4 < temp_v1);
            }
        }
        if ((u32) var_a1 < (u32) M2C_FIELD(arg0, s32 *, 4)) {
            *(M2C_FIELD(arg0, s32 **, 0) + var_a1) = arg2;
        }
    }
    return (u32) var_a1;
}

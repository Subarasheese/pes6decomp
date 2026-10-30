/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0095D620();                                /* extern */
s32 func_0095DE60();                                /* extern */
s32 func_00960430();                                /* extern */
s32 func_00960520();                                /* extern */
s32 func_00960560();                                /* extern */

s32 func_0095AF60(void) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_v1;

    temp_v1 = (s64) (func_0095D620() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_00960520() == 0) {
            return 3;
        }
        if (func_00960430() != 1) {
            var_v0 = 3;
        } else {
            var_v0 = 0;
        }
        return var_v0;
    case 1:
        if (func_00960520() != 0) {
            var_v0_2 = 1;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    case 2:
        temp_s0 = func_0095DE60();
        if (func_00960520() == 0) {
            return 2;
        }
        if (temp_s0 != func_00960560()) {
            return 2;
        }
        return 4;
    default:
        return 5;
    }
}

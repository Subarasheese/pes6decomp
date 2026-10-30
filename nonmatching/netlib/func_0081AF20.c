/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081AF20(void *arg0) {
    s32 var_v0;
    s8 temp_a3;

    var_v0 = 0;
    if (arg0 == NULL) {
        return 0;
    }
    temp_a3 = M2C_FIELD(arg0, s8 *, 0x28);
    switch (temp_a3) {                              /* irregular */
    case 2:
        if (M2C_FIELD(arg0, s8 *, 0x2A) == 1) {
            return 5;
        }
        var_v0 = 4;
    case 3:
        return var_v0;
    case 1:
        if (M2C_FIELD(arg0, s8 *, 0x2A) == 1) {
            return 3;
        }
        return 2;
    case 0:
        if (M2C_FIELD(arg0, s8 *, 0x2A) == 1) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00945410(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
        var_v0 = -1;
        if (temp_a0 != -1) {
            temp_v1 = M2C_FIELD(arg1, s32 *, 0x14);
            if (temp_v1 != -1) {
                if (temp_a0 >= temp_v1) {
                    var_v0 = temp_v1 < temp_a0;
                }
                return var_v0;
            }
            return -(~temp_a0 != 0);
        }
        return ~M2C_FIELD(arg1, s32 *, 0x14) != 0;
    }
    return 0;
}

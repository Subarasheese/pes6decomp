/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD94C0(void **arg0) {
    s32 temp_a0;
    s32 var_v0;
    u16 temp_v1;
    void *temp_v0;

    temp_v0 = *arg0;
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x1C);
    if ((temp_a0 >= 0x681) && (temp_v1 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), u16 *, 0x30), (temp_v1 != 0x489)) && (temp_v1 != 0x442) && (temp_v1 != 0x1BF) && (temp_v1 != 0x112) && (temp_v1 != 0) && (temp_v1 != 0x12E)) {
        if ((temp_a0 < 0x701) && (temp_v1 != 0x2C0) && (temp_v1 != 0x2B4)) {
            var_v0 = 2;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 1;
    }
    return var_v0;
}

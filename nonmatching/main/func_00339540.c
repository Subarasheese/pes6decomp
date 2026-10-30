/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00339540(s32 *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;

    if (arg3 != 0xFF) {
        temp_a2 = M2C_FIELD(((arg3 * 8) + ((arg2 * 0x14) + arg1)), s32 *, 0x64);
        if (temp_a2 != 0x8F8F8F8F) {
            var_v0 = 1;
            var_v1 = M2C_FIELD(arg1, s32 *, 0x3C) - temp_a2;
        } else {
            var_v0 = 0;
            var_v1 = 0xFF439EB2;
        }
    } else {
        var_v0 = 0;
        var_v1 = 0xFF439EB2;
    }
    *arg0 = var_v1;
    return var_v0;
}

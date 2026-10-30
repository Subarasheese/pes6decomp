/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00CDCBD0(void);
s32 func_00CDCC70();                                /* extern */

s32 func_00CDD0E0(void *arg0) {
    s32 var_a1;
    s32 var_s0;
    void *var_v1;

    var_s0 = 1;
    if (func_00CDCC70() != 0) {
        return 0;
    }
    var_a1 = 0;
    var_v1 = func_00CDCBD0() + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x960);
    do {
        if (M2C_FIELD(var_v1, s32 *, 0x2C) == 0) {
            var_s0 = 0;
        }
        var_a1 += 1;
        var_v1 += 0x1E0;
    } while (var_a1 < 5);
    return var_s0;
}

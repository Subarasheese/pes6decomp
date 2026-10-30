/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A3580(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_v1;
    u32 temp_a3;
    u32 var_v0;

    var_a1 = arg1;
    var_v1 = 1;
    var_v0 = 0;
loop_1:
    if (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + (var_a1 * 0x10DA0)), s32 *, 4) != 0) {
        var_v1 = 0;
    } else {
        if (arg2 <= 0) {
            var_a3 = -1;
        } else {
            var_a3 = 1;
        }
        var_a1 += var_a3;
        if (var_a1 >= 0) {

        } else {
            var_a1 += M2C_FIELD(arg0, u32 *, 4);
        }
        temp_a3 = M2C_FIELD(arg0, u32 *, 4);
        if ((u32) var_a1 >= temp_a3) {
            var_a1 -= temp_a3;
        }
        var_v0 += 1;
    }
    if ((var_v1 != 0) && (var_v0 < (u32) M2C_FIELD(arg0, u32 *, 4))) {
        goto loop_1;
    }
    return var_a1;
}

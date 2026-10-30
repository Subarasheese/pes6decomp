/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00949130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 var_a2;
    s32 var_t3;
    s32 var_t8;
    s32 var_v0;

    temp_a3 = arg3 & 0xFF;
    temp_a7 = arg2 & 0xFF;
    var_a2 = (temp_a3 / temp_a7) & 0xFF;
    if ((temp_a3 % temp_a7) != 0) {
        var_a2 = (var_a2 + 1) & 0xFF;
    }
    temp_a6 = (var_a2 & 0xFF) - 1;
    temp_a5 = temp_a7 - 1;
    var_v0 = arg0 & 0xFF;
loop_3:
    temp_t0 = var_v0 & 0xFF;
    var_t8 = (temp_t0 % temp_a7) & 0xFF;
    var_t3 = (temp_t0 / temp_a7) & 0xFF;
    switch (arg1) {                                 /* irregular */
    case 0:
        if (!(var_t3 & 0xFF)) {
            var_t3 = temp_a6 & 0xFF;
        } else {
            var_t3 = (var_t3 - 1) & 0xFF;
        }
block_28:
        var_v0 = ((var_t8 & 0xFF) + ((var_t3 & 0xFF) * temp_a7)) & 0xFF;
        if (((temp_a3 - 1) & 0xFF & 0xFF) >= var_v0) {
            return var_v0;
        }
        goto loop_3;
    case 1:
        if ((var_t3 & 0xFF) >= temp_a6) {
            var_t3 = 0;
        } else {
            var_t3 = (var_t3 + 1) & 0xFF;
        }
        goto block_28;
    case 2:
        if (!(var_t8 & 0xFF)) {
            var_t8 = temp_a5 & 0xFF;
        } else {
            var_t8 = (var_t8 - 1) & 0xFF;
        }
        goto block_28;
    case 3:
        if ((var_t8 & 0xFF) >= temp_a5) {
            var_t8 = 0;
        } else {
            var_t8 = (var_t8 + 1) & 0xFF;
        }
        goto block_28;
    default:
        return arg0;
    }
}

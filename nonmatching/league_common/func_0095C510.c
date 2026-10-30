/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0095C510(u32 arg0, u32 arg1) {
    u32 temp_v0;
    u32 temp_v1;
    u32 var_a0;
    u32 var_a1;
    u32 var_a2;
    u32 var_a3;
    u32 var_v0;
    u32 var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a0 == 0) {
        var_a0 = 1;
    }
    if (var_a1 == 0) {
        var_a0 = 1;
    }
    temp_v0 = var_a0 - var_a1;
    if (var_a1 >= temp_v0) {
        var_v1 = var_a1;
        var_a1 = temp_v0;
    } else {
        var_v1 = temp_v0;
    }
    var_v0 = 1;
    var_a3 = var_v1 + 1;
    var_a2 = 1;
loop_21:
    if (var_a0 >= var_a3) {
block_10:
        if (var_a1 >= var_a2) {
            if ((var_v0 >= var_a2) && ((var_v0 % var_a2) == 0)) {
                var_v0 = var_v0 / var_a2;
                var_a2 += 1;
                goto block_19;
            }
            if ((var_a0 >= var_a3) && (var_a3 >= var_a2) && ((var_a3 % var_a2) == 0)) {
                temp_v1 = var_a3 / var_a2;
                var_a3 += 1;
                var_v0 *= temp_v1;
                var_a2 += 1;
            } else {
                goto block_19;
            }
        } else {
block_19:
            if (var_a0 >= var_a3) {
                var_v0 *= var_a3;
                var_a3 += 1;
            }
        }
        goto loop_21;
    }
    if (var_a1 >= var_a2) {
        goto block_10;
    }
}

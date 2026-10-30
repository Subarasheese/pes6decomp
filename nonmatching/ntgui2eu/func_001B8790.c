/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B8790(u32 *arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    u32 var_a1;

    var_a1 = *arg0;
    if (var_a1 & 7) {
        var_v0 = 0;
        if (!(var_a1 & 1)) {
            if (var_a1 & 2) {
                *arg0 = var_a1 >> 1;
                return 1;
            }
            *arg0 = var_a1 >> 2;
            return 2;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v1 = 0;
    if (!(var_a1 & 0xFFFF)) {
        var_v1 = 0x10;
        var_a1 = var_a1 >> 0x10;
    }
    var_v0_2 = var_a1 & 0xF;
    if (!(var_a1 & 0xFF)) {
        var_v1 += 8;
        var_a1 = var_a1 >> 8;
        var_v0_2 = var_a1 & 0xF;
    }
    var_v0_3 = var_a1 & 3;
    if (var_v0_2 == 0) {
        var_v1 += 4;
        var_a1 = var_a1 >> 4;
        var_v0_3 = var_a1 & 3;
    }
    var_v0_4 = var_a1 & 1;
    if (var_v0_3 == 0) {
        var_v1 += 2;
        var_a1 = var_a1 >> 2;
        var_v0_4 = var_a1 & 1;
    }
    if ((var_v0_4 != 0) || (var_a1 = var_a1 >> 1, var_v1 += 1, var_v0 = 0x20, (var_a1 != 0))) {
        *arg0 = var_a1;
        var_v0 = var_v1;
    }
    return var_v0;
}

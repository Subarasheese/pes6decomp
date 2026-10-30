/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00AEDA00(s32 arg0, void *arg1) {
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_a4;

    var_a0 = arg0;
    var_a3 = M2C_FIELD(arg1, s32 *, 4);
    temp_a2 = M2C_FIELD(arg1, s32 *, 8);
    var_a4 = M2C_FIELD(arg1, s32 *, 0);
    if (var_a0 < 0) {
        var_a0 = 0;
    }
    temp_v1 = M2C_FIELD(arg1, s32 *, 0xC) - 1;
    if (temp_v1 < var_a0) {
        var_a0 = temp_v1;
    }
    if (var_a0 >= var_a4) {
        if (var_a0 >= var_a3) {
            var_a4 = (var_a0 - temp_a2) + 1;
            if (var_a4 < 0) {
                var_a4 = 0;
            }
            var_a3 = var_a4 + temp_a2;
        }
    } else {
        var_a3 = var_a0 + temp_a2;
        var_a4 = var_a0;
    }
    M2C_FIELD(arg1, s32 *, 0) = var_a4;
    M2C_FIELD(arg1, s32 *, 4) = var_a3;
}

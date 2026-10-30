/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00AEDFF0(s32, f32, f32, f32, f32);     /* extern */

void func_00AE4380(s32 *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    s32 sp58;
    f32 temp_f21;
    f32 var_f20;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_s2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;

    var_a0 = arg0;
    var_a2 = &sp58;
    var_s0 = 0;
    var_a3 = 0;
    var_a1 = var_a2;
    do {
        temp_v1 = *var_a0;
        *var_a2 = 0;
        if (temp_v1 != 0) {
            *var_a1 = temp_v1;
            var_s0 += 1;
            var_a1 += 4;
        }
        var_a3 += 1;
        var_a2 += 4;
        var_a0 += 4;
    } while (var_a3 < 2);
    var_s1 = 0;
    temp_f21 = (fparg3 - 8.0f) / (f32) var_s0;
    var_f20 = fparg1 + 4.0f;
    if (var_s0 > 0) {
        var_s2 = &sp58;
        do {
            func_00AEDFF0(*var_s2, fparg0, var_f20, fparg2, temp_f21);
            var_f20 += temp_f21;
            var_s1 += 1;
            var_s2 += 4;
        } while (var_s1 < var_s0);
    }
}

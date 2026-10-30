/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D138(f32);                             /* extern */
f32 func_0011D468(f32);                             /* extern */
M2C_UNK func_001EF7A0(s32, M2C_UNK, f32 *);         /* extern */

void func_00268ED0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 fparg0) {
    f32 sp70;
    f32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f21_3;
    s32 *var_s4;
    s32 temp_lo;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s2;

    var_s4 = arg0;
    temp_lo = (s32) (arg2 - arg1) / (s32) (arg3 * 2);
    var_s0 = arg1;
    sp7C = 0;
    sp78 = 0;
    temp_f21 = (3.1415927f * (f32) arg1) / 32768.0f;
    sp70 = fparg0 * func_0011D138(temp_f21);
    var_s2 = 0;
    sp74 = -(fparg0 * func_0011D468(temp_f21));
    if (arg3 > 0) {
        do {
            func_001EF7A0(*var_s4, 1, &sp70);
            temp_s0 = var_s0 + temp_lo;
            temp_f21_2 = (3.1415927f * (f32) temp_s0) / 32768.0f;
            sp70 = fparg0 * func_0011D138(temp_f21_2);
            sp74 = -(fparg0 * func_0011D468(temp_f21_2));
            func_001EF7A0(*var_s4, 3, &sp70);
            var_s0 = temp_s0 + temp_lo;
            temp_f21_3 = (3.1415927f * (f32) var_s0) / 32768.0f;
            sp70 = fparg0 * func_0011D138(temp_f21_3);
            sp74 = -(fparg0 * func_0011D468(temp_f21_3));
            func_001EF7A0(*var_s4, 2, &sp70);
            var_s2 += 1;
            var_s4 += 4;
        } while (var_s2 < arg3);
    }
}

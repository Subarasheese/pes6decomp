/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK func_00303D90;
extern M2C_UNK func_00303DF0;
extern M2C_UNK func_00303E10;
extern M2C_UNK func_00303E50;
extern M2C_UNK func_00303E80;

s32 func_00303F90(s32 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;

    if (*arg0 < 8) {
        var_a1 = 0;
        var_v1 = arg0;
loop_2:
        if (M2C_FIELD(var_v1, s32 *, 8) != 0) {
            var_a1 += 1;
            var_v1 += 4;
            if (var_a1 >= 8) {

            } else {
                goto loop_2;
            }
        } else {
            M2C_FIELD(((var_a1 * 4) + arg0), M2C_UNK **, 8) = &func_00303E80;
            *arg0 += 1;
        }
    }
    if (*arg0 < 8) {
        var_a1_2 = 0;
        var_v1_2 = arg0;
loop_10:
        if (M2C_FIELD(var_v1_2, s32 *, 8) != 0) {
            var_a1_2 += 1;
            var_v1_2 += 4;
            if (var_a1_2 >= 8) {

            } else {
                goto loop_10;
            }
        } else {
            M2C_FIELD(((var_a1_2 * 4) + arg0), M2C_UNK **, 8) = &func_00303E50;
            *arg0 += 1;
        }
    }
    if (*arg0 < 8) {
        var_a1_3 = 0;
        var_v1_3 = arg0;
loop_18:
        if (M2C_FIELD(var_v1_3, s32 *, 8) != 0) {
            var_a1_3 += 1;
            var_v1_3 += 4;
            if (var_a1_3 >= 8) {

            } else {
                goto loop_18;
            }
        } else {
            M2C_FIELD(((var_a1_3 * 4) + arg0), M2C_UNK **, 8) = &func_00303E10;
            *arg0 += 1;
        }
    }
    if (*arg0 < 8) {
        var_a1_4 = 0;
        var_v1_4 = arg0;
loop_26:
        if (M2C_FIELD(var_v1_4, s32 *, 8) != 0) {
            var_a1_4 += 1;
            var_v1_4 += 4;
            if (var_a1_4 >= 8) {

            } else {
                goto loop_26;
            }
        } else {
            M2C_FIELD(((var_a1_4 * 4) + arg0), M2C_UNK **, 8) = &func_00303D90;
            *arg0 += 1;
        }
    }
    if (*arg0 < 8) {
        var_a1_5 = 0;
        var_v1_5 = arg0;
loop_34:
        if (M2C_FIELD(var_v1_5, s32 *, 8) != 0) {
            var_a1_5 += 1;
            var_v1_5 += 4;
            if (var_a1_5 >= 8) {

            } else {
                goto loop_34;
            }
        } else {
            M2C_FIELD(((var_a1_5 * 4) + arg0), M2C_UNK **, 8) = &func_00303DF0;
            *arg0 += 1;
        }
    }
    return 1;
}

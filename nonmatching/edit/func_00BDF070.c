/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */

void func_00BDF070(void *arg0, s8 arg1) {
    s8 temp_v0;
    s8 temp_v0_2;
    s8 var_s0;
    s8 var_s1;
    s8 var_s2;
    s8 var_s2_2;

    var_s2 = arg1;
    var_s1 = M2C_FIELD(arg0, s8 *, 0x10);
    var_s0 = M2C_FIELD(arg0, s8 *, 0x11);
    if (func_00BCF3A0(0x80) == 0) {
        if (func_00BCF3A0(0x400) != 0) {
            temp_v0 = M2C_FIELD(arg0, s8 *, 0x10) + 1;
            if (var_s2 < temp_v0) {
                var_s2 = 0;
            } else if (temp_v0 >= 0) {
                var_s2 = temp_v0;
            }
            goto block_17;
        }
    } else {
        temp_v0_2 = M2C_FIELD(arg0, s8 *, 0x10) - 1;
        if (var_s2 < temp_v0_2) {
            var_s2 = 0;
        } else if (temp_v0_2 >= 0) {
            var_s2 = temp_v0_2;
        }
block_17:
        var_s1 = var_s2;
    }
    if (var_s1 != 0) {
        var_s2_2 = 4;
    } else {
        var_s2_2 = 3;
    }
    if (func_00BCF3A0(1) == 0) {
        if (func_00BCF3A0(8) != 0) {
            var_s0 = M2C_FIELD(arg0, s8 *, 0x11) + 1;
            if (var_s2_2 < var_s0) {
                var_s0 = 0;
            } else if (var_s0 < 0) {
                var_s0 = var_s2_2;
            }
        }
    } else {
        var_s0 = M2C_FIELD(arg0, s8 *, 0x11) - 1;
        if (var_s2_2 < var_s0) {
            var_s0 = 0;
        } else if (var_s0 < 0) {
            var_s0 = var_s2_2;
        }
    }
    if (var_s2_2 < var_s0) {
        var_s0 = var_s2_2;
    }
    if ((var_s1 != M2C_FIELD(arg0, s8 *, 0x10)) || (var_s0 != M2C_FIELD(arg0, s8 *, 0x11))) {
        M2C_FIELD(arg0, s8 *, 0x10) = var_s1;
        M2C_FIELD(arg0, s8 *, 0x11) = var_s0;
        func_0026E840(0x8400F802);
    }
}

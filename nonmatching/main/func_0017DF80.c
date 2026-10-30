/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017DF80(M2C_UNK (*arg0)(s32, s32, s32, s32), void *arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;
    s32 var_s5_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;

    var_s5 = 0;
    if (M2C_FIELD(arg1, s8 *, 4) > 0) {
        var_s4 = 0;
        do {
            temp_v0 = M2C_FIELD(arg1, s32 *, 0x14) + var_s4;
            arg0(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), arg2, arg3);
            var_s5 += 1;
            var_s4 += 8;
        } while (var_s5 < M2C_FIELD(arg1, s8 *, 4));
    }
    var_s4_2 = 0;
    if (M2C_FIELD(arg1, s8 *, 5) > 0) {
        var_s5_2 = 0;
        do {
            temp_v0_2 = M2C_FIELD(arg1, s32 *, 0x18) + var_s5_2;
            arg0(M2C_FIELD(temp_v0_2, s32 *, 4), M2C_FIELD(temp_v0_2, s32 *, 8), arg2, arg3);
            var_s4_2 += 1;
            var_s5_2 += 0x1C;
        } while (var_s4_2 < M2C_FIELD(arg1, s8 *, 5));
    }
    var_s4_3 = 0;
    if (M2C_FIELD(arg1, s8 *, 6) > 0) {
        var_s5_3 = 0;
        do {
            temp_v0_3 = M2C_FIELD(arg1, s32 *, 0x1C) + var_s5_3;
            arg0(M2C_FIELD(temp_v0_3, s32 *, 4), M2C_FIELD(temp_v0_3, s32 *, 8), arg2, arg3);
            var_s4_3 += 1;
            var_s5_3 += 0x14;
        } while (var_s4_3 < M2C_FIELD(arg1, s8 *, 6));
    }
    var_s4_4 = 0;
    if (M2C_FIELD(arg1, s8 *, 7) > 0) {
        var_s5_4 = 0;
        do {
            temp_v1 = M2C_FIELD(arg1, s32 *, 0x20) + var_s5_4;
            temp_a0 = M2C_FIELD(temp_v1, s32 *, 8);
            if (temp_a0 != 0) {
                arg0(temp_a0, M2C_FIELD(temp_v1, s32 *, 0), arg2, arg3);
            }
            var_s4_4 += 1;
            var_s5_4 += 0x14;
        } while (var_s4_4 < M2C_FIELD(arg1, s8 *, 7));
    }
}

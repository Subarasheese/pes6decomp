/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008F6080(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;

    if (M2C_FIELD(arg0, s32 *, 0x184) == 3) {
        if (M2C_FIELD(arg0, s32 *, 0x188) == 0) {
            var_v0 = arg3 * 3;
            if (arg3 > 0) {
                var_v0 += 1;
            }
            M2C_FIELD(arg1, s32 *, 0) = (s32) ((var_v0 >> 1) + M2C_FIELD(arg2, s32 *, 0));
            var_v0_2 = arg4 * 3;
            if (arg4 > 0) {
                var_v0_2 += 1;
            }
            M2C_FIELD(arg1, s32 *, 4) = (s32) (((var_v0_2 >> 1) + M2C_FIELD(arg2, s32 *, 4)) - 1);
            if (arg3 > 0) {
                var_v0_3 = (s32) (arg3 + 1) >> 1;
            } else {
                var_v0_3 = arg3 >> 1;
            }
            M2C_FIELD(arg1, s32 *, 8) = (s32) (var_v0_3 + M2C_FIELD(arg2, s32 *, 0));
            if (arg4 > 0) {
                var_v0_4 = arg4 + 1;
                goto block_14;
            }
            var_v0_5 = arg4 >> 1;
        } else {
            if (arg3 > 0) {
                var_v0_6 = (s32) (arg3 + 1) >> 1;
            } else {
                var_v0_6 = arg3 >> 1;
            }
            M2C_FIELD(arg1, s32 *, 0) = (s32) (var_v0_6 + M2C_FIELD(arg2, s32 *, 0));
            if (arg4 > 0) {
                var_v0_7 = (s32) (arg4 + 1) >> 1;
            } else {
                var_v0_7 = arg4 >> 1;
            }
            M2C_FIELD(arg1, s32 *, 4) = (s32) ((var_v0_7 + M2C_FIELD(arg2, s32 *, 4)) - 1);
            var_v0_8 = arg3 * 3;
            if (arg3 > 0) {
                var_v0_8 += 1;
            }
            M2C_FIELD(arg1, s32 *, 8) = (s32) ((var_v0_8 >> 1) + M2C_FIELD(arg2, s32 *, 0));
            var_v0_4 = arg4 * 3;
            if (arg4 > 0) {
                var_v0_4 += 1;
            }
block_14:
            var_v0_5 = var_v0_4 >> 1;
        }
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (var_v0_5 + M2C_FIELD(arg2, s32 *, 4) + 1);
        return;
    }
    if (arg3 > 0) {
        var_v0_9 = (s32) (arg3 + 1) >> 1;
    } else {
        var_v0_9 = arg3 >> 1;
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) (var_v0_9 + M2C_FIELD(arg2, s32 *, 0));
    if (arg4 > 0) {
        var_v0_10 = (s32) (arg4 + 1) >> 1;
    } else {
        var_v0_10 = arg4 >> 1;
    }
    temp_a2 = var_v0_10 + M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 4) = temp_a2;
    if (M2C_FIELD(arg0, s32 *, 0x184) == 1) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_a2 - 1);
        return;
    }
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_a2 + 1);
}

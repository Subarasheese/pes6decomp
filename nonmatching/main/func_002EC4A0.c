/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002EC4A0(void *arg0, s32 arg1, s64 arg2, s64 arg3) {
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a4_3;
    s32 temp_a4_4;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a4;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a2;
    void *var_a3;

    var_v1 = ((s64) (arg2 << 0x38) >> 0x38) + (((s64) (arg3 << 0x38) >> 0x38) * 4);
    switch (arg1) {                                 /* irregular */
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x190C) == 1) {
loop_9:
            if (M2C_FIELD((arg0 + (M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x1940) * 0x18)), s32 *, 0x1914) * 0x4A4) + (var_v1 * 4)), s32 *, 0x1944) == 0xFFFF) {
                var_v1 -= 1;
                if (var_v1 < 0) {
                    var_v1 = 0x13;
                }
                goto loop_9;
            }
        } else {
            var_a3 = arg0 + (var_v1 * 0x4A4);
loop_13:
            if (M2C_FIELD(var_a3, s32 *, 0x1DE4) == -1) {
                var_a3 -= 0x4A4;
                var_v1 -= 1;
                goto loop_13;
            }
        }
        break;
    case 4:
        if (M2C_FIELD(arg0, s32 *, 0x190C) == 1) {
loop_18:
            if (M2C_FIELD((arg0 + (M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x1940) * 0x18)), s32 *, 0x1914) * 0x4A4) + (var_v1 * 4)), s32 *, 0x1944) == 0xFFFF) {
                var_v1 += 1;
                if (var_v1 >= 4) {
                    var_v1 = 0;
                }
                goto loop_18;
            }
        } else {
loop_22:
            if (M2C_FIELD((arg0 + (var_v1 * 0x4A4)), s32 *, 0x1DE4) == -1) {
                var_v1 += 1;
                if (var_v1 >= 4) {
                    var_v1 = 0;
                }
                goto loop_22;
            }
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x190C) == 1) {
            temp_a4 = var_v1 - 1;
loop_27:
            if (M2C_FIELD((arg0 + (M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x1940) * 0x18)), s32 *, 0x1914) * 0x4A4) + (var_v1 * 4)), s32 *, 0x1944) == 0xFFFF) {
                var_v1 -= 4;
                if (var_v1 < 0) {
                    var_v1 = temp_a4;
                }
                goto loop_27;
            }
        } else {
            temp_a4_2 = var_v1 - 1;
loop_32:
            if (M2C_FIELD((arg0 + (var_v1 * 0x4A4)), s32 *, 0x1DE4) == -1) {
                var_v1 -= 4;
                if (var_v1 < 0) {
                    var_v1 = temp_a4_2;
                }
                goto loop_32;
            }
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x190C) == 1) {
            temp_a4_3 = var_v1 - 1;
loop_37:
            if (M2C_FIELD((arg0 + (M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x1940) * 0x18)), s32 *, 0x1914) * 0x4A4) + (var_v1 * 4)), s32 *, 0x1944) == 0xFFFF) {
                var_v1 -= 4;
                if (var_v1 < 0) {
                    var_v1 = temp_a4_3;
                }
                goto loop_37;
            }
        } else {
            temp_a4_4 = var_v1 - 1;
loop_41:
            if (M2C_FIELD((arg0 + (var_v1 * 0x4A4)), s32 *, 0x1DE4) == -1) {
                var_v1 -= 4;
                if (var_v1 < 0) {
                    var_v1 = temp_a4_4;
                }
                goto loop_41;
            }
        }
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x190C) != 1) {
        var_a4 = var_v1 & 3;
        if ((var_v1 < 0) && (var_a4 != 0)) {
            var_a4 -= 4;
        }
        var_a2 = var_v1 >> 2;
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1920) = var_a4;
        if (var_v1 < 0) {
            var_a2 = (s32) (var_v1 + 3) >> 2;
        }
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1924) = var_a2;
        temp_a2 = (M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0;
        M2C_FIELD(temp_a2, s32 *, 0x1914) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x1920) + (M2C_FIELD(temp_a2, s32 *, 0x1924) * 4));
        temp_v1 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914);
        if (temp_v1 >= 8) {
            if (temp_v1 >= 0x10) {
                if (temp_v1 >= 0x14) {
                    var_v1_2 = -1;
                } else {
                    var_v1_2 = 2;
                }
            } else {
                var_v1_2 = 1;
            }
        } else {
            var_v1_2 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0xF8) = var_v1_2;
        return;
    }
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1910) = var_v1;
}

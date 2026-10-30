/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008D9300(s32);                             /* extern */

s32 func_008D4030(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 var_s1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s6;
    s32 var_s7;
    s64 temp_a0;
    s64 temp_v1_2;
    s64 temp_v1_3;
    s64 var_v0;

    var_s7 = 0;
    var_s6 = 1;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0);
    var_s1 = M2C_FIELD(arg0, s16 *, 4);
    M2C_FIELD(arg0, s8 *, 6) = 0;
    temp_v0 = func_008D9300(arg1);
    switch (temp_v0) {                              /* irregular */
    case 0x4:
        temp_a1 = arg4 & 0xFF;
        temp_v1 = arg3 & 0xFF;
        if (temp_a1 >= temp_v1) {
            return 0;
        }
        var_v0 = temp_v1 - 1;
        if (temp_s0 < var_v0) {
            temp_a0 = temp_v1 - temp_a1;
            temp_v1_2 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
            if (temp_v1_2 != temp_a0) {
                var_s1 = (s16) ((s64) ((var_s1 + temp_a1) << 0x30) >> 0x30);
                if (temp_a0 < var_s1) {
                    var_s1 = (s16) ((s64) (temp_a0 << 0x30) >> 0x30);
                }
                var_v0 = (temp_s0 - temp_v1_2) + ((s64) ((s64) var_s1 << 0x30) >> 0x30);
            }
            M2C_FIELD(arg0, s16 *, 4) = var_s1;
            var_s7 = 1;
block_66:
            M2C_FIELD(arg0, s32 *, 0) = (s32) var_v0;
            if (var_s7 == 0) {
                return 3;
            }
            return 4;
        }
        return 0;
    case 0x8:
        temp_a1_2 = arg4 & 0xFF;
        if (temp_a1_2 >= (arg3 & 0xFF)) {
            return 0;
        }
        var_v0 = arg2 & 0xFF;
        if (var_v0 < temp_s0) {
            temp_v1_3 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
            if (temp_v1_3 != 0) {
                var_s1 = (s16) ((s64) ((var_s1 - temp_a1_2) << 0x30) >> 0x30);
                if (var_s1 < var_v0) {
                    var_s1 = (s16) ((s64) (var_v0 << 0x30) >> 0x30);
                }
                var_v0 = (temp_s0 - temp_v1_3) + ((s64) ((s64) var_s1 << 0x30) >> 0x30);
            }
            M2C_FIELD(arg0, s16 *, 4) = var_s1;
            var_s7 = 1;
            goto block_66;
        }
        return 0;
    case 0x200000:
        M2C_FIELD(arg0, s8 *, 6) = 1;
        if ((arg4 & 0xFF) < (arg3 & 0xFF)) {
            var_s6 = 2 & 0xFF;
        }
    case 0x2:
        temp_a0_2 = arg3 & 0xFF;
        temp_a1_3 = var_s6 & 0xFF;
        var_v0 = temp_a0_2 - 1;
        if ((var_v0 - temp_a1_3) < temp_s0) {
            if ((arg4 & 0xFF) >= temp_a0_2) {
                var_v0 = arg2 & 0xFF;
                goto block_66;
            }
            if (temp_s0 == var_v0) {
                return 0;
            }
            goto block_66;
        }
        var_v0 = temp_s0 + temp_a1_3;
        goto block_66;
    case 0x100000:
        M2C_FIELD(arg0, s8 *, 6) = 1;
        if ((arg4 & 0xFF) < (arg3 & 0xFF)) {
            var_s6 = 2 & 0xFF;
        }
        /* fallthrough */
    case 0x1:
        temp_a0_3 = var_s6 & 0xFF;
        var_v0 = arg2 & 0xFF;
        if (temp_s0 < (var_v0 + temp_a0_3)) {
            temp_a0_4 = arg3 & 0xFF;
            if ((arg4 & 0xFF) >= temp_a0_4) {
                var_v0 = temp_a0_4 - 1;
                goto block_66;
            }
            if (temp_s0 == var_v0) {
                return 0;
            }
            goto block_66;
        }
        var_v0 = temp_s0 - temp_a0_3;
        goto block_66;
    default:
        return 0;
    }
}

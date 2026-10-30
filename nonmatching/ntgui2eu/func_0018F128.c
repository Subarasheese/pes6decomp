/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C8D68[];
extern char D_011FC830[];

s32 func_0018F128(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6) {
    s16 var_t0;
    s16 var_t2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a7;
    s32 temp_lo1;
    s32 temp_lo1_2;
    s32 temp_lo1_3;
    s32 temp_lo1_4;
    s32 temp_lo1_5;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s64 var_a3;
    s64 var_a4;
    s64 var_a5;
    s64 var_v0_2;
    s64 var_v0_3;
    void *temp_s1;
    void *var_v1;

    temp_v1 = arg0 * 0x28;
    var_t2 = arg5;
    var_t0 = arg6;
    temp_s1 = M2C_FIELD((((void *)D_011FC830) + temp_v1), void **, 0xC);
    if (var_t2 > 0) {
        var_v1 = temp_v1 + ((void *)D_011FC830);
        if (M2C_FIELD(var_v1, s16 *, 0x20) < var_t2) {
            goto block_4;
        }
    } else {
        var_v1 = temp_v1 + ((void *)D_011FC830);
block_4:
        var_t2 = M2C_FIELD(var_v1, s16 *, 0x20);
    }
    if ((var_t0 <= 0) || (M2C_FIELD(((arg0 * 0x28) + (((void *)D_011FC830) - 0x37D0)), s16 *, 0x22) < var_t0)) {
        var_t0 = M2C_FIELD(((arg0 * 0x28) + (((void *)D_011FC830) - 0x37D0)), s16 *, 0x22);
    }
    temp_t1 = (arg4 <= 0) ? 1 : arg4;
    temp_a7 = (arg3 <= 0) ? 1 : arg3;
    switch (M2C_FIELD(((void *)D_005C8D68), s32 *, 8)) {     /* irregular */
    case 0x2:
        temp_lo = temp_t1 / var_t0;
        if (M2C_FIELD(((void *)D_005C8D68), s32 *, 4) == 1) {
            temp_a0 = temp_a7 + 0x9FF;
            temp_lo1 = temp_a0 / temp_a7;
            var_a4 = ((arg2 + 0x32) & 0xFFF) << 0xC;
            var_a5 = ((temp_lo1 * temp_a7) - 1) << 0x20;
            var_a1 = ((arg1 * temp_lo1) + 0x27C) & 0xFFF;
            var_v1_2 = (((temp_a0 / var_t2) - 1) << 0x17) | ((temp_lo - 1) << 0x1B);
            if (M2C_FIELD(((void *)D_005C8D68), s32 *, -0x7298) != 0) {
                var_v1_3 = var_v1_2 | var_a5;
                var_v0_2 = (temp_t1 * 2) - 1;
            } else {
block_17:
                var_v0_2 = temp_t1 - 1;
                var_v1_3 = var_v1_2 | var_a5;
            }
block_18:
            M2C_FIELD(temp_s1, s64 *, 0x18) = (s64) (var_v1_3 | (var_a1 | (var_v0_2 << 0x2C)) | var_a4);
        } else {
            temp_v0 = temp_a7 + 0x9FF;
            temp_lo1_2 = temp_v0 / temp_a7;
            var_a3 = (temp_t1 - 1) << 0x2C;
            var_a1_2 = ((temp_lo - 1) << 0x1B) | (((arg2 + 0x19) & 0xFFF) << 0xC);
            var_v0_3 = ((temp_v0 / var_t2) - 1) << 0x17;
            var_a0 = temp_lo1_2 * temp_a7;
            var_v1_4 = (arg1 * temp_lo1_2) + 0x27C;
block_20:
            M2C_FIELD(temp_s1, s64 *, 0x18) = (s64) (var_v0_3 | ((var_a0 - 1) << 0x20) | ((var_v1_4 & 0xFFF) | var_a3) | var_a1_2);
        }
block_24:
        var_v0 = 0;
        break;
    case 0x3:
        temp_lo_2 = temp_t1 / var_t0;
        if (M2C_FIELD(((void *)D_005C8D68), s32 *, 4) == 1) {
            temp_a0_2 = temp_a7 + 0x9FF;
            temp_lo1_3 = temp_a0_2 / temp_a7;
            var_a4 = ((arg2 + 0x48) & 0xFFF) << 0xC;
            var_a5 = ((temp_lo1_3 * temp_a7) - 1) << 0x20;
            var_a1 = ((arg1 * temp_lo1_3) + 0x290) & 0xFFF;
            var_v1_2 = (((temp_a0_2 / var_t2) - 1) << 0x17) | ((temp_lo_2 - 1) << 0x1B);
            if (M2C_FIELD(((void *)D_005C8D68), s32 *, -0x7298) != 0) {
                var_v1_3 = var_v1_2 | var_a5;
                var_v0_2 = (temp_t1 * 2) - 1;
            } else {
                goto block_17;
            }
            goto block_18;
        }
        temp_v0_2 = temp_a7 + 0x9FF;
        temp_lo1_4 = temp_v0_2 / temp_a7;
        var_a3 = (temp_t1 - 1) << 0x2C;
        var_a1_2 = ((temp_lo_2 - 1) << 0x1B) | (((arg2 + 0x24) & 0xFFF) << 0xC);
        var_v0_3 = ((temp_v0_2 / var_t2) - 1) << 0x17;
        var_a0 = temp_lo1_4 * temp_a7;
        var_v1_4 = (arg1 * temp_lo1_4) + 0x290;
        goto block_20;
        goto block_24;
    case 0x3B:
        temp_a2 = temp_a7 * 2;
        temp_lo_3 = temp_t1 / var_t0;
        temp_lo1_5 = temp_a2 / var_t2;
        M2C_FIELD(temp_s1, s64 *, 0x18) = (s64) (((((temp_lo1_5 > 0) ? temp_lo1_5 : 1) - 1) << 0x17) | ((temp_a2 - 1) << 0x20) | ((((arg1 * 2) + 0x244) & 0xFFF) | ((temp_t1 - 1) << 0x2C)) | (((((temp_lo_3 > 0) ? temp_lo_3 : 1) - 1) << 0x1B) | (((arg2 + 0x22) & 0xFFF) << 0xC)));
        goto block_24;
    default:
        var_v0 = -1;
        if (M2C_FIELD(((void *)D_005C8D68), s32 *, 8) == 0x52) {
            goto block_24;
        }
        break;
    }
    return var_v0;
}

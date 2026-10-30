/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001E0AC0(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s16 var_a0;
    s16 var_v1;
    s32 temp_a6;
    s32 temp_t1;
    s32 var_s0;
    s32 var_s1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t9;
    s32 var_v0;
    u8 temp_t0;
    void *var_t8;

    temp_t1 = M2C_FIELD(arg0, u8 *, 0xB) - arg3;
    var_v1 = 0;
    if (temp_t1 >= 0) {
        temp_t0 = M2C_FIELD(arg0, u8 *, 0xA);
        var_t3 = 0;
        temp_a6 = temp_t0 - arg2;
loop_2:
        var_a0 = 0;
        var_v0 = M2C_FIELD(arg1, s32 *, 0xC) + (var_t3 << 6);
        if (temp_a6 >= 0) {
loop_3:
            var_t9 = 1;
            var_s0 = 0;
            if (arg3 > 0) {
                var_t2 = 0;
loop_5:
                var_t8 = var_v0 + (var_t2 << 6);
                var_s1 = 0;
                if (arg2 > 0) {
loop_7:
                    if (M2C_FIELD(var_t8, u16 *, 0x34) != 0) {
                        var_t9 = 0;
                    } else {
                        var_s1 += 1;
                        var_t8 += 0x40;
                        if (var_s1 < arg2) {
                            goto loop_7;
                        }
                    }
                }
                if (var_t9 != 0) {
                    var_s0 += 1;
                    var_t2 += temp_t0;
                    if (var_s0 < arg3) {
                        goto loop_5;
                    }
                }
            }
            if (var_t9 != 0) {
                M2C_FIELD(arg4, s16 *, 0) = var_a0;
                M2C_FIELD(arg4, s16 *, 2) = var_v1;
                return var_v0;
            }
            var_a0 += 1;
            var_v0 += 0x40;
            if (temp_a6 < var_a0) {
                goto block_17;
            }
            goto loop_3;
        }
block_17:
        var_v1 += 1;
        var_t3 += temp_t0;
        if (temp_t1 < var_v1) {
            goto block_18;
        }
        goto loop_2;
    }
block_18:
    return 0;
}

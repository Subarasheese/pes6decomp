/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_001CD9E0(f32);                             /* extern */
s32 func_0090B0A0(void *, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_00C26720();                                /* extern */
extern void *Pes6Ball_Current;

s32 func_0090AD50(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u8 temp_v0;
    u8 temp_v0_2;

    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x800)) {
        temp_s0 = arg6 & 0xFF;
        if (temp_s0 == 0) {
            if (func_00C26720() == 0) {
                temp_v0 = M2C_FIELD(arg0, u8 *, 0x201);
                if ((s32) temp_v0 < 2) {
                    var_v0 = 1;
                } else if (((s32) temp_v0 < 3) && (temp_s0 < 4)) {
                    if ((f32) arg5 <= 7.619544e7f) {
                        var_v0_2 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
                        if (var_v0_2 <= 0) {
                            var_v0_2 = -var_v0_2;
                        }
                        if (!((f32) var_v0_2 <= 5819.3335f)) {
                            var_v0 = 1;
                        } else {
                            goto block_16;
                        }
                    } else {
                        var_v0 = 1;
                    }
                } else {
                    goto block_16;
                }
            } else {
block_16:
                var_v0 = 0;
            }
            if (var_v0 != 0) {
                return 0;
            }
            goto block_38;
        }
        if (func_00C26720() == 0) {
            temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x201);
            if ((s32) temp_v0_2 < 2) {
                var_v0_3 = 1;
            } else if (((s32) temp_v0_2 < 3) && (temp_s0 < 4)) {
                temp_v1 = arg5 * 5;
                var_v0_4 = temp_v1 >> 2;
                if (temp_v1 < 0) {
                    var_v0_4 = (s32) (temp_v1 + 3) >> 2;
                }
                if ((f32) var_v0_4 <= 7.619544e7f) {
                    var_v0_5 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
                    if (var_v0_5 <= 0) {
                        var_v0_5 = -var_v0_5;
                    }
                    if (!((f32) var_v0_5 <= 5819.3335f)) {
                        var_v0_3 = 1;
                    } else {
                        goto block_35;
                    }
                } else {
                    var_v0_3 = 1;
                }
            } else {
                goto block_35;
            }
        } else {
block_35:
            var_v0_3 = 0;
        }
        if (var_v0_3 != 0) {
            return 0;
        }
block_38:
        if (temp_s0 != 1) {
            if (func_0090B0A0(arg0, arg1, arg2, arg3, ((arg4 * 4) / 5) + ((u32) (arg4 * 4) >> 0x1F), arg5, arg6) != 0) {
                return 1;
            }
            if (((s32) M2C_FIELD(arg0, u8 *, 0x201) >= 5) && (arg4 >= 0x240001) && (M2C_FIELD(arg0, u8 *, 0x1D5) == 0)) {
                goto block_55;
            }
            goto block_50;
        }
        if (func_0090B0A0(arg0, arg1, arg2, arg3, arg4, arg5, arg6) != 0) {
            return 1;
        }
block_50:
        temp_s0_2 = arg3 & 0xFFFF;
        if ((temp_s0_2 >= 0x20) && (M2C_FIELD(arg0, u8 *, 0x1D5) == 0) && (temp_s0_2 >= ((s32) func_001CD9E0((f32) arg4) * 0xC))) {
            return 1;
        }
block_55:
        return 3;
    }
    return 4;
}

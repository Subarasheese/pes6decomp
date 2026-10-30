/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0099C570(s32);                         /* extern */
M2C_UNK func_0099C660(s32);                         /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3C00(s8);                          /* extern */
extern void *D_00A7DD50;

void func_009C15A0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_lo;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_s0;
    s8 temp_s5;
    s8 var_s2;
    s8 var_s3;
    s8 var_s4;

    if (arg0 != 0) {
        if (arg0 <= 0) {
            var_v0 = -arg0;
        } else {
            var_v0 = arg0;
        }
        temp_lo = arg0 / var_v0;
        var_s3 = 0;
        temp_s5 = M2C_FIELD(D_00A7DD50, s8 *, 5);
        temp_s0 = M2C_FIELD(D_00A7DD50, s8 *, 7);
        var_s4 = temp_s5;
        var_s2 = temp_s0;
loop_26:
        if (var_s3 < temp_s0) {
            if (var_s3 < 0) {
                var_v0_2 = 0;
            } else if (var_s3 >= 3) {
                var_v0_2 = 0;
            } else if ((var_s3 == 0) && (func_009C17C0() == 0)) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = M2C_FIELD((D_00A7DD50 + (var_s3 * 4)), s32 *, 0x11A8);
            }
            if (var_v0_2 == 0) {
                var_s2 -= 1;
            } else {
                if ((temp_lo < 0) && (var_s3 < temp_s5)) {
                    var_s4 = var_s3;
                }
                if ((temp_lo > 0) && (temp_s5 < var_s3) && (var_s4 == temp_s5)) {
                    var_s4 = var_s3;
                }
            }
            var_s3 += 1;
            goto loop_26;
        }
        if (var_s2 >= 3) {
            var_s4 = temp_s5;
loop_29:
            var_s4 = (s8) ((s32) (var_s4 + temp_s0 + temp_lo) % temp_s0);
            if (var_s4 != temp_s5) {
                if (var_s4 < 0) {
                    var_v0_3 = 0;
                } else if (var_s4 >= 3) {
                    var_v0_3 = 0;
                } else if ((var_s4 == 0) && (func_009C17C0() == 0)) {
                    var_v0_3 = 0;
                } else {
                    var_v0_3 = M2C_FIELD((D_00A7DD50 + (var_s4 * 4)), s32 *, 0x11A8);
                }
                if (var_v0_3 == 0) {
                    goto loop_29;
                }
            }
        }
        M2C_FIELD(D_00A7DD50, s8 *, 5) = var_s4;
        if ((arg1 != 0) && (var_s4 != temp_s5)) {
            func_0026E840(0x8400F802);
        }
        func_009C3C00(var_s4);
        temp_a0 = M2C_FIELD(((M2C_FIELD(D_00A7DD50, s8 *, 5) * 4) + D_00A7DD50), s32 *, 0x420);
        if (temp_a0 == 0) {
            func_0099C570(temp_a0);
            return;
        }
        func_0099C660(temp_a0);
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_008BAB30(f32, f32, M2C_UNK);               /* extern */
M2C_UNK func_008BB690(s32, void *, void *, s32);    /* extern */

void func_008DC8A0(void *arg0) {
    f32 temp_f12;
    f32 temp_f13;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    void *var_s0;
    void *var_s1_2;
    void *var_s2_2;
    void *var_s4;
    void *var_s7;

    if (M2C_FIELD(arg0, u8 *, 0xE4) != 0) {
        var_s4 = arg0;
        var_s6 = 0;
        do {
            var_s1 = 6;
            var_s2 = 0;
            var_s0 = var_s4;
loop_3:
            temp_f13 = M2C_FIELD(var_s0, f32 *, 0x84);
            temp_f12 = M2C_FIELD(var_s0, f32 *, 0x24);
            if ((temp_f12 == temp_f13) && (M2C_FIELD(var_s0, f32 *, 0x28) == M2C_FIELD(var_s0, f32 *, 0x88))) {
                var_s1 -= 1;
            } else {
                M2C_FIELD(var_s0, f32 *, 0x24) = func_008BAB30(temp_f12, temp_f13, 0x42200000);
                M2C_FIELD(var_s0, f32 *, 0x28) = func_008BAB30(M2C_FIELD(var_s0, f32 *, 0x28), M2C_FIELD(var_s0, f32 *, 0x88), 0x42200000);
            }
            var_s2 += 1;
            var_s0 += 8;
            if (var_s2 < 6) {
                goto loop_3;
            }
            if (var_s1 != 0) {
                var_s0_2 = 0;
                var_s3 = 2;
                var_s7 = var_s4;
                do {
                    var_s5 = 0;
                    var_s2_2 = var_s4 + 0x24;
                    var_s1_2 = var_s7;
loop_11:
                    func_008BB690(M2C_FIELD(var_s1_2, s32 *, 0xF8), var_s2_2, (((s32) (var_s5 + 1) % 6) * 8) + var_s4 + 0x24, var_s3 & 0xFFFF);
                    var_s5 += 1;
                    var_s2_2 += 8;
                    var_s1_2 += 4;
                    if (var_s5 < 6) {
                        goto loop_11;
                    }
                    var_s0_2 += 1;
                    var_s3 += 4;
                    var_s7 += 0x18;
                } while (var_s0_2 < 2);
            }
            var_s6 += 1;
            var_s4 += 0x30;
        } while (var_s6 < 2);
    }
}

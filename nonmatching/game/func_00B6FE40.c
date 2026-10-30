/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B33A0(u8 *, s32, s32);                  /* extern */
M2C_UNK func_00B70040(u8 **, s32);                  /* extern */
s32 func_00B704F0(s32, u8);                         /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */

void func_00B6FE40(u8 **arg0) {
    s16 temp_s1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 temp_v1;

    var_s0 = 1;
    temp_v1 = **arg0;
    if ((temp_v1 != 1) && (temp_v1 != 0xC)) {
loop_2:
        if (func_00B704F0(var_s0, M2C_FIELD(*arg0, u8 *, 0)) == 0) {
            func_00B70040(arg0, var_s0);
            var_s2 = 0;
loop_4:
            temp_a0 = *arg0;
            if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) < 0x90000) {
                if (var_s2 >= 0xA) {
                    return;
                }
                func_00B70040(arg0, var_s0);
                var_s2 += 1;
                goto loop_4;
            }
        } else {
            var_s0 += 1;
            if (var_s0 >= 7) {
                var_s0_2 = 1;
loop_9:
                if ((func_00B704F0(var_s0_2, M2C_FIELD(*arg0, u8 *, 0)) == 1) && (M2C_FIELD(*arg0, s32 *, 0x9C) != var_s0_2)) {
                    func_00B70040(arg0, var_s0_2);
                    var_s2_2 = 0;
loop_12:
                    temp_a0_2 = *arg0;
                    if (func_009B33A0(temp_a0_2, (s32) M2C_FIELD(temp_a0_2, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_2, f32 *, 0x70)) < 0x90000) {
                        if (var_s2_2 >= 0xA) {
                            return;
                        }
                        func_00B70040(arg0, var_s0_2);
                        var_s2_2 += 1;
                        goto loop_12;
                    }
                    return;
                }
                var_s0_2 += 1;
                if (var_s0_2 >= 7) {
                    return;
                }
                goto loop_9;
            }
            goto loop_2;
        }
    } else {
        M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (-0x400 - func_00BBB8C0(0x100));
        temp_s0 = *arg0;
        temp_s1 = M2C_FIELD(temp_s0, s16 *, 0x14);
        M2C_FIELD(temp_s0, f32 *, 0x70) = (f32) ((temp_s1 * -0x180) + -(temp_s1 * func_00BBB8C0(0x500)));
    }
}

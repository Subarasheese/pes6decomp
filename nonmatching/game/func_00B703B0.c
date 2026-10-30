/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 **func_00B2A420(M2C_UNK);                        /* extern */
s32 func_00BBB990(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00BBB9C0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00B703B0(u8 **arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f23;
    u8 **var_v0;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 var_a2;

    temp_s1 = *arg0;
    temp_f20 = M2C_FIELD(temp_s1, f32 *, 0xE8);
    temp_f23 = (M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(0xC000, 0x800)) - 256.0f;
    temp_f21 = temp_f20 + (f32) func_00BBB9C0(0xC000, 0x800);
    var_v0 = func_00B2A420(1);
    var_a2 = **var_v0;
    if ((s32) var_a2 < 0x17) {
loop_1:
        temp_a1 = *var_v0;
        if ((M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 0x2C) != 0) && (**arg0 != M2C_FIELD(temp_a1, u8 *, 0))) {
            temp_f0 = M2C_FIELD(temp_a1, f32 *, 0xE0);
            if (!(temp_f0 < temp_f23) && (temp_f0 <= (512.0f + temp_f23))) {
                temp_f0_2 = M2C_FIELD(temp_a1, f32 *, 0xE8);
                if (!(temp_f0_2 < temp_f20) && (temp_f0_2 <= temp_f21)) {
                    return 0;
                }
            }
        }
        var_a2 += 1;
        var_v0 += 8;
        if ((s32) var_a2 >= 0x17) {
            goto block_10;
        }
        goto loop_1;
    }
block_10:
    return 1;
}

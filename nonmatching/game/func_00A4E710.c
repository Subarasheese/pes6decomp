/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
extern void *Pes6Ball_Current;

s32 func_00A4E710(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0_2;
    void *temp_v1;

    var_s1 = 0;
    if (func_002AE670(0xE0) > 0) {
        var_s0 = 0;
loop_4:
        temp_v0_2 = Pes6Ball_Current + var_s0;
        if ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), func_009B3480(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x47C), M2C_FIELD(temp_v0_2, f32 *, 0xB7C))) & 0xFFFF) < 0x28) {
            temp_v1 = Pes6Ball_Current + var_s0;
            if (M2C_FIELD(temp_v1, s32 *, 0x10BC) > 0) {
                if (!(M2C_FIELD(temp_v1, f32 *, 0x7FC) <= (f32) -M2C_FIELD(arg0, s32 *, 0x90))) {
                    goto block_8;
                }
                goto block_9;
            }
block_8:
            temp_a1 = var_s1 * 4;
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD((temp_a1 + Pes6Ball_Current), f32 *, 0x47C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD((temp_a1 + Pes6Ball_Current), f32 *, 0xB7C);
            return var_s1;
        }
block_9:
        var_s0 += 4;
        var_s1 += 1;
        if (var_s1 >= func_002AE670(0xE0)) {
            goto block_3;
        }
        goto loop_4;
    }
block_3:
    temp_v0 = var_s1 - 1;
    temp_a1_2 = temp_v0 * 4;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD((temp_a1_2 + Pes6Ball_Current), f32 *, 0x47C);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD((temp_a1_2 + Pes6Ball_Current), f32 *, 0xB7C);
    return temp_v0;
}

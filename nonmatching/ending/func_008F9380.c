/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00908CA0;

void func_008F9380(void) {
    f32 temp_f4;
    s32 var_a0;
    void **var_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;

    var_a0 = 0;
    var_v1 = &D_00908CA0;
    do {
        temp_a2 = *var_v1;
        if (*M2C_FIELD(temp_a2, s32 **, 4) != 0) {
            temp_f4 = M2C_FIELD(temp_a2, f32 *, 0xE8);
            M2C_FIELD(temp_a2, f32 *, 0xE8) = (f32) M2C_FIELD(temp_a2, f32 *, 0xE0);
            M2C_FIELD(*var_v1, f32 *, 0xE0) = temp_f4;
            temp_a1 = *var_v1;
            M2C_FIELD(temp_a1, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_a1, f32 *, 0xE8) * -1.0f);
            temp_a1_2 = *var_v1;
            M2C_FIELD(temp_a1_2, f32 *, 0xE0) = (f32) (M2C_FIELD(temp_a1_2, f32 *, 0xE0) + -4096.0f);
            temp_a1_3 = *var_v1;
            M2C_FIELD(temp_a1_3, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_a1_3, f32 *, 0xE8) + 7705.0f);
            temp_a2_2 = *var_v1;
            M2C_FIELD(temp_a2_2, u16 *, 0x28) = (u16) (M2C_FIELD(temp_a2_2, u16 *, 0x28) + 0x4000);
            temp_a2_3 = *var_v1;
            M2C_FIELD(temp_a2_3, u16 *, 0x26) = (u16) (M2C_FIELD(temp_a2_3, u16 *, 0x26) + 0x4000);
            temp_a2_4 = *var_v1;
            if ((u32) (M2C_FIELD(M2C_FIELD(temp_a2_4, s32 **, 4), u16 *, 0x30) - 0x59D) < 2U) {
                M2C_FIELD(temp_a2_4, s8 *, 0x4E) = 0;
                M2C_FIELD(*var_v1, s8 *, 0x16) = 0;
                M2C_FIELD(*var_v1, s32 *, 0x1C) = 0;
            }
        }
        var_a0 += 1;
        var_v1 += 4;
    } while (var_a0 < 0x19);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00908CA0;

void func_008F9470(void) {
    f32 temp_f4;
    s32 var_a2;
    void **var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    var_a2 = 0;
    var_a1 = &D_00908CA0;
    do {
        temp_a0 = *var_a1;
        if (*M2C_FIELD(temp_a0, s32 **, 4) != 0) {
            temp_f4 = M2C_FIELD(temp_a0, f32 *, 0xE8);
            M2C_FIELD(temp_a0, f32 *, 0xE8) = (f32) M2C_FIELD(temp_a0, f32 *, 0xE0);
            M2C_FIELD(*var_a1, f32 *, 0xE0) = temp_f4;
            temp_v1 = *var_a1;
            M2C_FIELD(temp_v1, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_v1, f32 *, 0xE8) * -1.0f);
            temp_v1_2 = *var_a1;
            M2C_FIELD(temp_v1_2, f32 *, 0xE0) = (f32) (M2C_FIELD(temp_v1_2, f32 *, 0xE0) + -4096.0f);
            temp_v1_3 = *var_a1;
            M2C_FIELD(temp_v1_3, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_v1_3, f32 *, 0xE8) + 7705.0f);
            temp_a0_2 = *var_a1;
            M2C_FIELD(temp_a0_2, u16 *, 0x28) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x28) + 0x4000);
            temp_a0_3 = *var_a1;
            M2C_FIELD(temp_a0_3, u16 *, 0x26) = (u16) (M2C_FIELD(temp_a0_3, u16 *, 0x26) + 0x4000);
        }
        var_a2 += 1;
        var_a1 += 4;
    } while (var_a2 < 0x19);
}

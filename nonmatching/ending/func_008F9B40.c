/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00908CA0;

void func_008F9B40(void) {
    s32 var_a4;
    u16 temp_a0_6;
    u16 var_a0;
    void **var_a3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    var_a4 = 0;
    var_a3 = &D_00908CA0;
    do {
        temp_a0 = *var_a3;
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, f32 *, 0xE0) = (f32) (M2C_FIELD(temp_a0, f32 *, 0xE0) + -12185.0f);
            temp_a0_2 = *var_a3;
            M2C_FIELD(temp_a0_2, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_a0_2, f32 *, 0xE8) + -4364.5f);
            if (*(u8 *)0x3A9B74 == 1) {
                temp_a0_3 = *var_a3;
                M2C_FIELD(temp_a0_3, f32 *, 0xE0) = (f32) (M2C_FIELD(temp_a0_3, f32 *, 0xE0) * -1.0f);
                temp_a0_4 = *var_a3;
                M2C_FIELD(temp_a0_4, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_a0_4, f32 *, 0xE8) * -1.0f);
                temp_a0_5 = *var_a3;
                temp_a0_6 = M2C_FIELD(temp_a0_5, u16 *, 0x26);
                if ((s32) temp_a0_6 < 0x8001) {
                    var_a0 = temp_a0_6 + 0x7FFF + 1;
                } else {
                    var_a0 = temp_a0_6 - 0x8000;
                }
                M2C_FIELD(temp_a0_5, u16 *, 0x26) = var_a0;
            }
        }
        var_a4 += 1;
        var_a3 += 4;
    } while (var_a4 < 0x19);
}

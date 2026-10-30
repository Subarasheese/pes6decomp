/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009AC230(u8, void *, void *);          /* extern */
s32 func_009AC4D0(u8);                              /* extern */
extern void *D_003EA9AC;

void func_009B0FE0(void) {
    s32 var_a1;
    s8 temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    temp_s0 = D_003EA9AC;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, u8 *, 0x5B0) = 0U;
        func_009AC230(M2C_FIELD(temp_s0, u8 *, 0x5B0), temp_s0 + 0x5B1, temp_s0 + 0x5B2);
        temp_a0 = func_009AC4D0(M2C_FIELD(temp_s0, u8 *, 0x5B0)) & 0xFF;
        if (temp_a0 == 0xFF) {
            M2C_FIELD(temp_s0, s8 *, 0x7FC) = 0;
        } else {
            M2C_FIELD(temp_s0, s8 *, 0x7FC) = temp_a0;
        }
        var_a1 = 0;
        do {
            temp_a0_2 = temp_s0 + var_a1;
            M2C_FIELD(temp_a0_2, s8 *, 0x7FD) = 0;
            var_a1 += 8;
            M2C_FIELD(temp_a0_2, s8 *, 0x845) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7FE) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x846) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7FF) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x847) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x800) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x848) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x801) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x849) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x802) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x84A) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x803) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x84B) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x804) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x84C) = 0;
        } while (var_a1 < 0x48);
        M2C_FIELD(temp_s0, s32 *, 0x890) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x894) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x896) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x5FA) = 0;
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
extern void *D_003E7B0C;
extern void *D_003EA9C0;

void func_009BAEA0(s32 arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a0;
    u8 temp_a0_2;
    u8 temp_a1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;

    temp_s0 = D_003EA9C0;
    if (temp_s0 != NULL) {
        temp_v0 = func_00229460();
        temp_a3 = arg0 & 0xFF;
        temp_a2 = temp_a3 * 4;
        temp_v1 = temp_a2 + temp_s0;
        if (M2C_FIELD(temp_v1, u16 *, 0x7C) != 0xFFFF) {
            if (M2C_FIELD(temp_v1, u16 *, 0x7E) != 0xFFFF) {
                if ((M2C_FIELD(temp_s0, u8 *, 0xE0) - 1) < (s32) M2C_FIELD((((M2C_FIELD(D_003E7B0C, u8 *, 0x28) & 0xFF) * 0xC) + temp_v0), u8 *, 0x4AB6)) {
                    temp_a0 = (temp_a3 * 6) + temp_s0;
                    temp_a1 = M2C_FIELD(temp_a0, u8 *, 7);
                    temp_a0_2 = M2C_FIELD(temp_a0, u8 *, 4);
                    if ((s32) temp_a1 < (s32) temp_a0_2) {
                        var_a0 = 2;
                    } else if (temp_a0_2 != temp_a1) {
                        var_a0 = 4;
                    } else {
                        var_a0 = 3;
                    }
                } else {
                    var_a0 = 1;
                }
                M2C_FIELD(temp_v1, s32 *, 0xB8) = var_a0;
            } else {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD((temp_a2 + temp_s0), s32 *, 0xB8) = 0;
        }
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
M2C_UNK func_009AC230(u8, void *, void *);          /* extern */
s32 func_009AC4D0(u8);                              /* extern */
extern void *D_003EA9A4;

void func_009AB640(void) {
    s32 var_a1;
    s8 temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = D_003EA9A4;
    if (temp_s0 != NULL) {
        temp_v0 = func_00229DF0();
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 7);
        if (temp_v1 == 1) {
            var_v0 = 4;
            goto block_15;
        }
        if (temp_v1 == 0) {
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 6);
            if (temp_v1_2 == 0) {
                M2C_FIELD(temp_s0, u8 *, 0x568) = 0U;
            } else if (temp_v1_2 != 1) {
                var_v0 = 2;
                if (temp_v1_2 != 2) {
                    var_v0 = 3;
                    if (temp_v1_2 == 3) {
                        goto block_15;
                    }
                } else {
block_15:
                    M2C_FIELD(temp_s0, u8 *, 0x568) = var_v0;
                }
            } else {
                M2C_FIELD(temp_s0, u8 *, 0x568) = 1U;
            }
        }
        func_009AC230(M2C_FIELD(temp_s0, u8 *, 0x568), temp_s0 + 0x569, temp_s0 + 0x56A);
        temp_a0 = func_009AC4D0(M2C_FIELD(temp_s0, u8 *, 0x568)) & 0xFF;
        if (temp_a0 == 0xFF) {
            M2C_FIELD(temp_s0, s8 *, 0x7B4) = 0;
        } else {
            M2C_FIELD(temp_s0, s8 *, 0x7B4) = temp_a0;
        }
        var_a1 = 0;
        do {
            temp_a0_2 = temp_s0 + var_a1;
            M2C_FIELD(temp_a0_2, s8 *, 0x7B5) = 0;
            var_a1 += 8;
            M2C_FIELD(temp_a0_2, s8 *, 0x7FD) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7B6) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7FE) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7B7) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7FF) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7B8) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x800) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7B9) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x801) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7BA) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x802) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7BB) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x803) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x7BC) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x804) = 0;
        } while (var_a1 < 0x48);
        M2C_FIELD(temp_s0, s32 *, 0x848) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x84C) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x84E) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x5B2) = 0;
    }
}

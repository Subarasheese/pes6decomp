/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s8 func_00AF3540(u16, M2C_UNK, void *, void *, void *, void *); /* extern */

void func_00AF3400(void) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;
    u16 temp_a0;
    u8 *temp_a3;
    u8 temp_a1_2;
    void *temp_a2;
    void *temp_a3_2;
    void *temp_a4;
    void *temp_a5;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_s2 = 0;
        do {
            temp_v1 = var_s2 & 0xFF;
            temp_s0 = temp_v0 + (temp_v1 * 0x56);
            if (M2C_FIELD(temp_s0, u8 *, 0xC390) == 0) {
                temp_a0 = M2C_FIELD(temp_s0, u16 *, 0xC35A);
                if (temp_a0 != 0) {
                    var_v0 = 0x1D;
                    temp_a5 = temp_s0 + 0xC372;
                    temp_a4 = temp_s0 + 0xC373;
                    do {
                        temp_a1 = var_v0 & 0xFF;
                        temp_a3 = temp_a5 + temp_a1;
                        temp_a2 = temp_a4 + temp_a1;
                        temp_a1_2 = M2C_FIELD(temp_a3, u8 *, 0);
                        var_v0 = (var_v0 - 7) & 0xFF;
                        M2C_FIELD(temp_a2, u8 *, 0) = temp_a1_2;
                        M2C_FIELD(temp_a2, u8 *, 0xFF) = (u8) M2C_FIELD(temp_a3, u8 *, 0xFF);
                        M2C_FIELD(temp_a2, u8 *, 0xFE) = (u8) M2C_FIELD(temp_a3, u8 *, 0xFE);
                        M2C_FIELD(temp_a2, u8 *, 0xFD) = (u8) M2C_FIELD(temp_a3, u8 *, 0xFD);
                        M2C_FIELD(temp_a2, u8 *, 0xFC) = (u8) M2C_FIELD(temp_a3, u8 *, 0xFC);
                        M2C_FIELD(temp_a2, u8 *, 0xFB) = (u8) M2C_FIELD(temp_a3, u8 *, 0xFB);
                        M2C_FIELD(temp_a2, u8 *, 0xFA) = (u8) M2C_FIELD(temp_a3, u8 *, 0xFA);
                    } while (var_v0 >= 8);
                    temp_a3_2 = temp_v0 + (temp_v1 * 0x56);
                    temp_v0_2 = temp_a3_2 + var_v0;
                    M2C_FIELD(temp_v0_2, u8 *, 0xC373) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0xC372);
                    M2C_FIELD(temp_s0, s8 *, 0xC373) = func_00AF3540(temp_a0, 0, temp_v0_2 + 0x10000, temp_a3_2, temp_a4, temp_a5);
                }
            }
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < 0x20);
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
void func_0095AED0(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a3;
    s32 var_s0;
    u8 temp_a0_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_a6;
    void *temp_a6_2;
    void *temp_a6_3;
    void *temp_a6_4;
    void *temp_a6_5;
    void *temp_a6_6;
    void *temp_a6_7;
    void *temp_a6_8;

    var_s0 = 0;
    do {
        temp_v0 = func_002260F0(var_s0);
        if (temp_v0 != 0) {
            var_a3 = 0;
            temp_a0 = 0 & 0x1F;
            temp_a2 = temp_v0 + M2C_FIELD(temp_v0, u8 *, 0xC0);
            do {
                var_a3 = (var_a3 + 8) & 0xFF;
                temp_a6 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_2 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_2, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_2, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_3 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_3, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_3, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_4 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_4, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_4, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_5 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_5, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_5, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_6 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_6, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_6, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_7 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_7, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_7, u8 *, 0x1F3) & ~0x1F) | temp_a0);
                temp_a6_8 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
                M2C_FIELD(temp_a6_8, u8 *, 0x1F3) = (u8) ((M2C_FIELD(temp_a6_8, u8 *, 0x1F3) & ~0x1F) | temp_a0);
            } while (var_a3 < 0x20);
            temp_a1 = temp_v0 + (M2C_FIELD(temp_a2, u8 *, 0x4B1) * 0x16);
            temp_a0_2 = M2C_FIELD(temp_a1, u8 *, 0x1F3);
            M2C_FIELD(temp_a1, u8 *, 0x1F3) = (u8) ((temp_a0_2 & ~0x1F) | (((temp_a0_2 & 0x1F) | 1) & 0x1F));
        }
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 0x50);
}

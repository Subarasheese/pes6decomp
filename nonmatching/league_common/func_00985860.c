/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
void func_00985860(void) {
    s32 temp_hi;
    s32 temp_v0;
    s32 var_s0;
    s32 var_t8;
    s8 temp_a0;
    s8 temp_a1;
    s8 temp_a2;
    s8 temp_a3;
    s8 temp_a4;
    s8 temp_a5;
    s8 temp_v1;
    s8 var_t9;
    u8 temp_a0_2;
    u8 temp_a1_2;
    u8 temp_a2_2;
    u8 temp_a3_2;
    u8 temp_a4_2;
    u8 temp_a5_2;
    u8 temp_s1;
    u8 temp_s2;
    void *temp_a6;

    var_s0 = 0;
    do {
        temp_v0 = func_002260F0(var_s0 & 0xFF);
        if (temp_v0 != 0) {
            var_t9 = 0;
            var_t8 = temp_v0;
            do {
                temp_a5 = var_t9 + 1;
                temp_a4 = var_t9 + 2;
                temp_a6 = temp_v0 + var_t9;
                temp_a3 = var_t9 + 3;
                temp_a2 = var_t9 + 4;
                M2C_FIELD(var_t8, u8 *, 0x1F4) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x1F4) & ~0xF) | 2);
                temp_a1 = var_t9 + 5;
                temp_a0 = var_t9 + 6;
                temp_v1 = var_t9 + 7;
                temp_hi = temp_a5 % 5;
                temp_s1 = (M2C_FIELD(var_t8, u8 *, 0x1F5) & ~0xFC) | ((((var_t9 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x1F5) = temp_s1;
                M2C_FIELD(var_t8, u8 *, 0x1F4) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x1F4) & ~0x3F0) | ((((u64) ((s64) temp_s1 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B1) = var_t9;
                var_t9 += 8;
                M2C_FIELD(var_t8, u8 *, 0x20A) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x20A) & ~0xF) | 2);
                temp_s2 = (M2C_FIELD(var_t8, u8 *, 0x20B) & ~0xFC) | (((temp_hi + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x20B) = temp_s2;
                M2C_FIELD(var_t8, u8 *, 0x20A) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x20A) & ~0x3F0) | ((((u64) ((s64) temp_s2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B2) = temp_a5;
                M2C_FIELD(var_t8, u8 *, 0x220) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x220) & ~0xF) | 2);
                temp_a5_2 = (M2C_FIELD(var_t8, u8 *, 0x221) & ~0xFC) | ((((temp_a4 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x221) = temp_a5_2;
                M2C_FIELD(var_t8, u8 *, 0x220) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x220) & ~0x3F0) | ((((u64) ((s64) temp_a5_2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B3) = temp_a4;
                M2C_FIELD(var_t8, u8 *, 0x236) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x236) & ~0xF) | 2);
                temp_a4_2 = (M2C_FIELD(var_t8, u8 *, 0x237) & ~0xFC) | ((((temp_a3 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x237) = temp_a4_2;
                M2C_FIELD(var_t8, u8 *, 0x236) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x236) & ~0x3F0) | ((((u64) ((s64) temp_a4_2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B4) = temp_a3;
                M2C_FIELD(var_t8, u8 *, 0x24C) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x24C) & ~0xF) | 2);
                temp_a3_2 = (M2C_FIELD(var_t8, u8 *, 0x24D) & ~0xFC) | ((((temp_a2 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x24D) = temp_a3_2;
                M2C_FIELD(var_t8, u8 *, 0x24C) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x24C) & ~0x3F0) | ((((u64) ((s64) temp_a3_2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B5) = temp_a2;
                M2C_FIELD(var_t8, u8 *, 0x262) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x262) & ~0xF) | 2);
                temp_a2_2 = (M2C_FIELD(var_t8, u8 *, 0x263) & ~0xFC) | ((((temp_a1 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x263) = temp_a2_2;
                M2C_FIELD(var_t8, u8 *, 0x262) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x262) & ~0x3F0) | ((((u64) ((s64) temp_a2_2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B6) = temp_a1;
                M2C_FIELD(var_t8, u8 *, 0x278) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x278) & ~0xF) | 2);
                temp_a1_2 = (M2C_FIELD(var_t8, u8 *, 0x279) & ~0xFC) | ((((temp_a0 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x279) = temp_a1_2;
                M2C_FIELD(var_t8, u8 *, 0x278) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x278) & ~0x3F0) | ((((u64) ((s64) temp_a1_2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B7) = temp_a0;
                M2C_FIELD(var_t8, u8 *, 0x28E) = (u8) ((M2C_FIELD(var_t8, u8 *, 0x28E) & ~0xF) | 2);
                temp_a0_2 = (M2C_FIELD(var_t8, u8 *, 0x28F) & ~0xFC) | ((((temp_v1 % 5) + 1) & 0x3F) * 4);
                M2C_FIELD(var_t8, u8 *, 0x28F) = temp_a0_2;
                M2C_FIELD(var_t8, u8 *, 0x28E) = (s16) (((u16) M2C_FIELD(var_t8, u8 *, 0x28E) & ~0x3F0) | ((((u64) ((s64) temp_a0_2 << 0x38) >> 0x3A) & 0x3F) * 0x10));
                M2C_FIELD(temp_a6, s8 *, 0x4B8) = temp_v1;
                var_t8 += 0xB0;
            } while (var_t9 < 0x20);
        }
        var_s0 += 1;
    } while (var_s0 < 0x50);
}

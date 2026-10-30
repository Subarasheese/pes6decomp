/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591DE1[];
extern char D_00591DE5[];

void func_002CD700(void *arg0) {
    M2C_UNK *var_a6;
    u16 temp_a4;
    u16 temp_a6;
    u8 temp_a1;
    u8 temp_a3;
    u8 temp_a6_2;

    if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
        var_a6 = ((void *)D_00591DE5);
    } else {
        var_a6 = ((void *)D_00591DE1);
    }
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) ((M2C_FIELD(arg0, u8 *, 0x38) & ~0x1F) | (((u8) M2C_FIELD(var_a6, u8 *, 0) >> 3) & 0x1F));
    M2C_FIELD(arg0, u8 *, 0x38) = (s16) (((u16) M2C_FIELD(arg0, u8 *, 0x38) & ~0x3E0) | ((((u8) M2C_FIELD(var_a6, u8 *, 1) >> 3) & 0x1F) << 5));
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) ((M2C_FIELD(arg0, u8 *, 0x39) & ~0x7C) | ((((u8) M2C_FIELD(var_a6, u8 *, 2) >> 3) & 0x1F) * 4));
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) ((M2C_FIELD(arg0, u8 *, 0x39) & ~0x80) | 0x80);
    temp_a6 = (M2C_FIELD(arg0, u16 *, 0x5A) & ~0x3E0) | ((0 & 0x1F) << 5);
    M2C_FIELD(arg0, u16 *, 0x5A) = temp_a6;
    temp_a6_2 = (M2C_FIELD(arg0, u8 *, 0x5B) & ~0x7C) | ((((u64) ((s64) temp_a6 << 0x36) >> 0x3B) & 0x1F) * 4);
    M2C_FIELD(arg0, u8 *, 0x5B) = temp_a6_2;
    M2C_FIELD(arg0, u16 *, 0x5A) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x5A) & ~0x1F) | (((u64) ((s64) temp_a6_2 << 0x39) >> 0x3B) & 0x1F));
    temp_a4 = (M2C_FIELD(arg0, u16 *, 0x5C) & ~0x3E0) | 0x3E0;
    M2C_FIELD(arg0, u16 *, 0x5C) = temp_a4;
    temp_a3 = (M2C_FIELD(arg0, u8 *, 0x5D) & ~0x7C) | ((((u64) ((s64) temp_a4 << 0x36) >> 0x3B) & 0x1F) * 4);
    M2C_FIELD(arg0, u8 *, 0x5D) = temp_a3;
    M2C_FIELD(arg0, u16 *, 0x5C) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x5C) & ~0x1F) | (((u64) ((s64) temp_a3 << 0x39) >> 0x3B) & 0x1F));
    temp_a1 = (M2C_FIELD(arg0, u8 *, 0x5D) & ~0x80) | 0x80;
    M2C_FIELD(arg0, u8 *, 0x5D) = temp_a1;
    M2C_FIELD(arg0, u8 *, 0x5B) = (u8) ((M2C_FIELD(arg0, u8 *, 0x5B) & ~0x80) | ((((u64) ((s64) temp_a1 << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, s8 *, 0x10) = 2;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 8;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0xC0;
    M2C_FIELD(arg0, s8 *, 0x11) = 1;
}

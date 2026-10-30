/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CF1FE0[];

void func_00C06070(void) {
    M2C_UNK *var_a7;
    s32 var_t0;

    func_001C48E8(((void *)D_00CF1FE0), 0, 0x44);
    var_t0 = 0;
    var_a7 = ((void *)D_00CF1FE0);
    do {
        var_t0 += 7;
        M2C_FIELD(var_a7, u8 *, 0) = (u8) ((M2C_FIELD(var_a7, u8 *, 0) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 0) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 0) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 1) = (u8) ((M2C_FIELD(var_a7, u8 *, 1) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 1) = (u8) ((M2C_FIELD(var_a7, u8 *, 1) & ~0x80) | 0x80);
        M2C_FIELD(var_a7, u8 *, 2) = (u8) ((M2C_FIELD(var_a7, u8 *, 2) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 2) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 2) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 3) = (u8) ((M2C_FIELD(var_a7, u8 *, 3) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 3) = (u8) ((M2C_FIELD(var_a7, u8 *, 3) & ~0x80) | 0x80);
        M2C_FIELD(var_a7, u8 *, 4) = (u8) ((M2C_FIELD(var_a7, u8 *, 4) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 4) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 4) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 5) = (u8) ((M2C_FIELD(var_a7, u8 *, 5) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 5) = (u8) ((M2C_FIELD(var_a7, u8 *, 5) & ~0x80) | 0x80);
        M2C_FIELD(var_a7, u8 *, 6) = (u8) ((M2C_FIELD(var_a7, u8 *, 6) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 6) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 6) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 7) = (u8) ((M2C_FIELD(var_a7, u8 *, 7) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 7) = (u8) ((M2C_FIELD(var_a7, u8 *, 7) & ~0x80) | 0x80);
        M2C_FIELD(var_a7, u8 *, 8) = (u8) ((M2C_FIELD(var_a7, u8 *, 8) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 8) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 8) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 9) = (u8) ((M2C_FIELD(var_a7, u8 *, 9) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 9) = (u8) ((M2C_FIELD(var_a7, u8 *, 9) & ~0x80) | 0x80);
        M2C_FIELD(var_a7, u8 *, 0xA) = (u8) ((M2C_FIELD(var_a7, u8 *, 0xA) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 0xA) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 0xA) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 0xB) = (u8) ((M2C_FIELD(var_a7, u8 *, 0xB) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 0xB) = (u8) ((M2C_FIELD(var_a7, u8 *, 0xB) & ~0x80) | 0x80);
        M2C_FIELD(var_a7, u8 *, 0xC) = (u8) ((M2C_FIELD(var_a7, u8 *, 0xC) & ~0x1F) | 0x1F);
        M2C_FIELD(var_a7, u8 *, 0xC) = (s16) (((u16) M2C_FIELD(var_a7, u8 *, 0xC) & ~0x3E0) | 0x3E0);
        M2C_FIELD(var_a7, u8 *, 0xD) = (u8) ((M2C_FIELD(var_a7, u8 *, 0xD) & ~0x7C) | 0x7C);
        M2C_FIELD(var_a7, u8 *, 0xD) = (u8) ((M2C_FIELD(var_a7, u8 *, 0xD) & ~0x80) | 0x80);
        var_a7 += 0xE;
    } while (var_t0 < 0x15);
}

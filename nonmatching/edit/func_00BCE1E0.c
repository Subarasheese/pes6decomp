/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, void *, M2C_UNK, s32, s32, u64, M2C_UNK); /* extern */
void *func_00BF4550(M2C_UNK, s32);                  /* extern */
s32 func_00BF5890(M2C_UNK);                         /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */
extern char D_00CE53C8[];

void func_00BCE1E0(void) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s0_2;
    u64 temp_a5;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_v0;

    temp_s0 = func_00BF5890(0) & 0xFF;
    temp_s0_2 = func_00C1B400(0);
    temp_s1 = temp_s0_2 + 0x34;
    temp_v0 = func_00BF4550(0, temp_s0 & 0xFF);
    temp_s0_3 = temp_v0 + 0x34;
    M2C_FIELD(temp_s1, u8 *, 0x24) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x24) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x58) << 0x38) >> 0x3E) & 3) << 6));
    temp_a5 = (s64) M2C_FIELD(temp_v0, u8 *, 0x35) << 0x38;
    temp_a4 = ((temp_a5 >> 0x3C) & 0xF) * 0x10;
    M2C_FIELD(temp_s1, u8 *, 1) = (u8) ((M2C_FIELD(temp_s1, u8 *, 1) & ~0xF0) | temp_a4);
    temp_a3 = (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x60) << 0x38) >> 0x3E) & 3) << 6;
    M2C_FIELD(temp_s1, u8 *, 0x2C) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x2C) & ~0xC0) | temp_a3);
    M2C_FIELD(temp_s1, u8 *, 0x3B) = (u8) (*(u8 *)D_00CE53C8);
    func_001C4730(temp_s0_2 + 0x20, temp_v0 + 0x20, 0xF, temp_a3, temp_a4, temp_a5, -0xC1);
    temp_a3_2 = 0 & 0x7FF;
    M2C_FIELD(temp_s1, u16 *, 0x30) = (u16) ((M2C_FIELD(temp_s1, u16 *, 0x30) & 0xFFFF001F) | (temp_a3_2 << 5));
    M2C_FIELD(temp_s1, u8 *, 0x32) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x32) & ~3) | (0 & 3));
    M2C_FIELD(temp_s1, u16 *, 0x28) = (u16) ((M2C_FIELD(temp_s1, u16 *, 0x28) & ~0x7FF) | temp_a3_2);
    M2C_FIELD(temp_s1, u8 *, 0x24) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x24) & ~0x3F) | 0x23);
    M2C_FIELD(temp_s1, u8 *, 0x25) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x25) & ~0x7F) | 0x46);
    M2C_FIELD(temp_s1, u8 *, 0x35) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x35) & ~0xF) | 7);
    M2C_FIELD(temp_s1, u8 *, 0x38) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x38) & ~0xF0) | 0x70);
    M2C_FIELD(temp_s1, u8 *, 0x39) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x39) & ~0xF) | 7);
    M2C_FIELD(temp_s1, u8 *, 0x35) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x35) & ~0xF0) | 0x70);
    M2C_FIELD(temp_s1, u8 *, 0x36) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x36) & ~0xF0) | 0x70);
    M2C_FIELD(temp_s1, u8 *, 0x37) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x37) & ~0xF) | 7);
    M2C_FIELD(temp_s1, u8 *, 0x37) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x37) & ~0xF0) | 0x70);
    M2C_FIELD(temp_s1, u8 *, 0x37) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x37) & ~0xF) | 7);
    M2C_FIELD(temp_s1, u8 *, 0x2E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x2E) & ~0x18) | ((((u64) ((s64) M2C_FIELD(temp_s0_3, u8 *, 0x2E) << 0x3B) >> 0x3E) & 3) * 8));
    M2C_FIELD(temp_s1, u8 *, 0x34) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x34) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s0_3, u8 *, 0x34) << 0x38) >> 0x3F) & 1) << 7));
}

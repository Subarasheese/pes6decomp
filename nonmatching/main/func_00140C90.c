/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00140C90(void *arg0, u32 arg1, s64 arg2, s64 arg3, s64 arg4, u32 arg5, s64 arg6, s64 arg7) {
    s64 temp_a2;
    s64 temp_a6;
    s64 temp_s1;
    s64 temp_s4;
    s64 temp_s4_2;
    s64 temp_s5;
    s64 temp_t0;
    s64 temp_t0_2;

    temp_a2 = (s64) (arg3 << 0x30) >> 0x30;
    temp_t0 = (s64) (arg2 << 0x30) >> 0x30;
    M2C_FIELD(arg0, u16 *, 0) = (u16) ((M2C_FIELD(arg0, u16 *, 0) & ~0x7FFF) | 0xD);
    temp_s4 = (s64) (arg4 << 0x30) >> 0x30;
    M2C_FIELD(arg0, u8 *, 1) = (u8) ((M2C_FIELD(arg0, u8 *, 1) & ~0x80) | 0x80);
    temp_t0_2 = (((s64) ((temp_t0 & 0xF) << 0x20) >> 0x20) << 0x18) | (((u64) ((s64) (arg1 >> 0xB) << 0x20) >> 0x20) | (((s64) (((temp_a2 >> 6) & 0x3F) << 0x20) >> 0x20) << 0x10));
    temp_a6 = (((s64) ((arg6 == 0) << 0x20) >> 0x20) << 0x20) | (((u64) ((s64) (arg5 >> 0xB) << 0x20) >> 0x20) | (((s64) ((((s64) (arg7 << 0x30) >> 0x30) & 0xF) << 0x20) >> 0x20) << 0x18));
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((M2C_FIELD(arg0, u8 *, 7) & ~0xC) | ((0 & 3) * 4));
    temp_s1 = (((s64) ((temp_a2 - 1) << 0x20) >> 0x20) << 0x10) | (((s64) ((temp_s4 - 1) << 0x20) >> 0x20) << 0x30);
    temp_s4_2 = (((s64) ((0x800 - (temp_a2 >> 1)) << 0x20) >> 0x20) * 0x10) | ((((s64) ((0x800 - (temp_s4 >> 1)) << 0x20) >> 0x20) * 0x10) << 0x20);
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((M2C_FIELD(arg0, u8 *, 7) & ~0xF0) | 0x10);
    temp_s5 = (((s64) ((((s64) (arg6 << 0x30) >> 0x30) & 3) << 0x20) >> 0x20) << 0x11) | 0x10000;
    M2C_FIELD(arg0, u8 *, 8) = (u8) ((M2C_FIELD(arg0, u8 *, 8) & ~0xF) | 0xE);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg0, u8 *, 0x10) & ~1) | 1);
    M2C_FIELD(arg0, s64 *, 0x18) = 0x1A;
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) ((M2C_FIELD(arg0, u8 *, 0x20) & ~1) | 1);
    M2C_FIELD(arg0, s64 *, 0x28) = 0x46;
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) ((M2C_FIELD(arg0, u8 *, 0x30) & ~1) | ((temp_t0 & 2) != 0));
    M2C_FIELD(arg0, s64 *, 0x38) = 0x45;
    M2C_FIELD(arg0, s64 *, 0x40) = temp_t0_2;
    M2C_FIELD(arg0, s64 *, 0x48) = 0x4C;
    M2C_FIELD(arg0, s64 *, 0x50) = temp_a6;
    M2C_FIELD(arg0, s64 *, 0x58) = 0x4E;
    M2C_FIELD(arg0, s64 *, 0x60) = temp_s4_2;
    M2C_FIELD(arg0, s64 *, 0x68) = 0x18;
    M2C_FIELD(arg0, s64 *, 0x70) = temp_s1;
    M2C_FIELD(arg0, s64 *, 0x78) = 0x40;
    M2C_FIELD(arg0, s64 *, 0x80) = temp_s5;
    M2C_FIELD(arg0, s64 *, 0x88) = 0x47;
    M2C_FIELD(arg0, s64 *, 0x90) = temp_t0_2;
    M2C_FIELD(arg0, s64 *, 0x98) = 0x4D;
    M2C_FIELD(arg0, s64 *, 0xA0) = temp_a6;
    M2C_FIELD(arg0, s64 *, 0xA8) = 0x4F;
    M2C_FIELD(arg0, s64 *, 0xB0) = temp_s4_2;
    M2C_FIELD(arg0, s64 *, 0xB8) = 0x19;
    M2C_FIELD(arg0, s64 *, 0xC0) = temp_s1;
    M2C_FIELD(arg0, s64 *, 0xC8) = 0x41;
    M2C_FIELD(arg0, s64 *, 0xD0) = temp_s5;
    M2C_FIELD(arg0, s64 *, 0xD8) = 0x48;
}

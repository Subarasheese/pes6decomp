/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00848680(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((M2C_FIELD(arg1, s32 *, 0) & 0xFFFC0000) | ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x18) << 0x2E) >> 0x2E));
    M2C_FIELD(arg1, u8 *, 2) = (u8) ((M2C_FIELD(arg1, u8 *, 2) & ~0x7C) | ((M2C_FIELD(arg0, u8 *, 0) & 0x1F) * 4));
    M2C_FIELD(arg1, u8 *, 2) = (s16) (((u16) M2C_FIELD(arg1, u8 *, 2) & ~0x380) | ((M2C_FIELD(arg0, u8 *, 1) & 7) << 7));
    M2C_FIELD(arg1, u8 *, 3) = (u8) ((M2C_FIELD(arg1, u8 *, 3) & ~0x1C) | ((M2C_FIELD(arg0, u8 *, 2) & 7) * 4));
    M2C_FIELD(arg1, u8 *, 3) = (u8) ((M2C_FIELD(arg1, u8 *, 3) & ~0xE0) | ((M2C_FIELD(arg0, u8 *, 3) & 7) << 5));
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((M2C_FIELD(arg1, s32 *, 4) & 0xFFFC0000) | ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x1C) << 0x2E) >> 0x2E));
    M2C_FIELD(arg1, u16 *, 6) = (u16) ((M2C_FIELD(arg1, u16 *, 6) & ~0x1FC) | ((M2C_FIELD(arg0, u8 *, 0x12) & 0x7F) * 4));
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((M2C_FIELD(arg1, s32 *, 0xC) & 0xFFFC0000) | ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x24) << 0x2E) >> 0x2E));
    M2C_FIELD(arg1, u8 *, 7) = (u8) ((M2C_FIELD(arg1, u8 *, 7) & ~2) | ((M2C_FIELD(arg0, u8 *, 8) & 1) * 2));
    M2C_FIELD(arg1, u8 *, 7) = (u8) ((M2C_FIELD(arg1, u8 *, 7) & ~4) | ((M2C_FIELD(arg0, u8 *, 9) & 1) * 4));
    M2C_FIELD(arg1, u8 *, 7) = (u8) ((M2C_FIELD(arg1, u8 *, 7) & ~8) | ((M2C_FIELD(arg0, u8 *, 0xA) & 1) * 8));
    M2C_FIELD(arg1, u8 *, 7) = (u8) ((M2C_FIELD(arg1, u8 *, 7) & ~0x30) | ((M2C_FIELD(arg0, u8 *, 0xC) & 3) * 0x10));
    M2C_FIELD(arg1, u8 *, 7) = (u8) ((M2C_FIELD(arg1, u8 *, 7) & ~0xC0) | ((M2C_FIELD(arg0, u8 *, 0xE) & 3) << 6));
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((M2C_FIELD(arg1, s32 *, 8) & 0xFFFC0000) | ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x20) << 0x2E) >> 0x2E));
    M2C_FIELD(arg1, u8 *, 0xA) = (u8) ((M2C_FIELD(arg1, u8 *, 0xA) & ~4) | ((M2C_FIELD(arg0, u8 *, 0xF) & 1) * 4));
}

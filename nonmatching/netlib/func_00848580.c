/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00848580(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0) << 0x2E) >> 0x2E);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 2) << 0x39) >> 0x3B);
    M2C_FIELD(arg1, s8 *, 1) = (s8) ((u64) ((s64) (u16) M2C_FIELD(arg0, u8 *, 2) << 0x36) >> 0x3D);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 3) << 0x3B) >> 0x3D);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 3) << 0x38) >> 0x3D);
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) ((u64) ((s64) M2C_FIELD(arg0, s32 *, 4) << 0x2E) >> 0x2E);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0xC) << 0x2E) >> 0x2E);
    M2C_FIELD(arg1, s8 *, 0x12) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u16 *, 6) << 0x37) >> 0x39);
    M2C_FIELD(arg1, s8 *, 8) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x3E) >> 0x3F);
    M2C_FIELD(arg1, s8 *, 9) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x3D) >> 0x3F);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x3C) >> 0x3F);
    M2C_FIELD(arg1, s8 *, 0xC) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x3A) >> 0x3E);
    M2C_FIELD(arg1, s8 *, 0xE) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x38) >> 0x3E);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) ((u64) ((s64) M2C_FIELD(arg0, s32 *, 8) << 0x2E) >> 0x2E);
    M2C_FIELD(arg1, s8 *, 0xF) = (s8) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0xA) << 0x3D) >> 0x3F);
}

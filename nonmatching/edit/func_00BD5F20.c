/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BD5F20(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x32) = (u8) ((M2C_FIELD(arg0, u8 *, 0x32) & ~3) | (M2C_FIELD(arg1, u8 *, 0x32) & 3));
    M2C_FIELD(arg0, u8 *, 0x24) = (u8) ((M2C_FIELD(arg0, u8 *, 0x24) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x24) << 0x38) >> 0x3E) & 3) << 6));
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) ((M2C_FIELD(arg0, u16 *, 0x30) & 0xFFFF001F) | ((((u64) ((s64) M2C_FIELD(arg1, u16 *, 0x30) << 0x30) >> 0x35) & 0x7FF) << 5));
    M2C_FIELD(arg0, u8 *, 0x26) = (u8) ((M2C_FIELD(arg0, u8 *, 0x26) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x26) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) ((M2C_FIELD(arg0, u8 *, 0x27) & ~0xF) | (M2C_FIELD(arg1, u8 *, 0x27) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x2A) << 0x38) >> 0x3E) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) ((M2C_FIELD(arg0, u8 *, 0x29) & ~0x78) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x29) << 0x39) >> 0x3C) & 0xF) * 8));
    M2C_FIELD(arg0, u8 *, 0x47) = (u8) ((M2C_FIELD(arg0, u8 *, 0x47) & ~0xE0) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x47) << 0x38) >> 0x3D) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) ((M2C_FIELD(arg0, u8 *, 0x40) & ~0x1F) | (M2C_FIELD(arg1, u8 *, 0x40) & 0x1F));
    M2C_FIELD(arg0, u16 *, 0x42) = (u16) ((M2C_FIELD(arg0, u16 *, 0x42) & ~0x380) | ((((u64) ((s64) M2C_FIELD(arg1, u16 *, 0x42) << 0x36) >> 0x3D) & 7) << 7));
    M2C_FIELD(arg0, u16 *, 0x42) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x42) & ~0xE) | ((((u64) ((s64) (u8) M2C_FIELD(arg1, u16 *, 0x42) << 0x3C) >> 0x3D) & 7) * 2));
    M2C_FIELD(arg0, u16 *, 0x42) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x42) & ~0x70) | ((((u64) ((s64) (u8) M2C_FIELD(arg1, u16 *, 0x42) << 0x39) >> 0x3D) & 7) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3F) & ~0xF8) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x3F) << 0x38) >> 0x3B) & 0x1F) * 8));
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) ((M2C_FIELD(arg0, u8 *, 0x40) & ~0xE0) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x40) << 0x38) >> 0x3D) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((M2C_FIELD(arg0, u8 *, 0x41) & ~7) | (M2C_FIELD(arg1, u8 *, 0x41) & 7));
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((M2C_FIELD(arg0, u8 *, 0x41) & ~0x38) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x41) << 0x3A) >> 0x3D) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x40) = (s32) (((s32) M2C_FIELD(arg0, u8 *, 0x40) & 0xFFFE3FFF) | ((((u64) ((s64) (s32) M2C_FIELD(arg1, u8 *, 0x40) << 0x2F) >> 0x3D) & 7) << 0xE));
    M2C_FIELD(arg0, u8 *, 0x45) = (u8) ((M2C_FIELD(arg0, u8 *, 0x45) & ~0x38) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x45) << 0x3A) >> 0x3D) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x46) = (u8) ((M2C_FIELD(arg0, u8 *, 0x46) & ~0xE) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x46) << 0x3C) >> 0x3D) & 7) * 2));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFE3FFF) | ((((u64) ((s64) M2C_FIELD(arg1, s32 *, 0x44) << 0x2F) >> 0x3D) & 7) << 0xE));
    M2C_FIELD(arg0, u8 *, 0x43) = (u8) ((M2C_FIELD(arg0, u8 *, 0x43) & ~0x1C) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x43) << 0x3B) >> 0x3D) & 7) * 4));
    M2C_FIELD(arg0, u8 *, 0x43) = (u8) ((M2C_FIELD(arg0, u8 *, 0x43) & ~0xE0) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x43) << 0x38) >> 0x3D) & 7) << 5));
    M2C_FIELD(arg0, s32 *, 0x44) = (s8) (((u8) M2C_FIELD(arg0, s32 *, 0x44) & ~0x1F) | ((u8) M2C_FIELD(arg1, s32 *, 0x44) & 0x1F));
    M2C_FIELD(arg0, u8 *, 0x45) = (u8) ((M2C_FIELD(arg0, u8 *, 0x45) & ~7) | (M2C_FIELD(arg1, u8 *, 0x45) & 7));
    M2C_FIELD(arg0, s32 *, 0x44) = (s8) (((u8) M2C_FIELD(arg0, s32 *, 0x44) & ~0xE0) | ((((u64) ((s64) (u8) M2C_FIELD(arg1, s32 *, 0x44) << 0x38) >> 0x3D) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x46) = (u8) ((M2C_FIELD(arg0, u8 *, 0x46) & ~0x70) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x46) << 0x39) >> 0x3D) & 7) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x46) = (s16) (((u16) M2C_FIELD(arg0, u8 *, 0x46) & ~0x380) | ((((u64) ((s64) (u16) M2C_FIELD(arg1, u8 *, 0x46) << 0x36) >> 0x3D) & 7) << 7));
    M2C_FIELD(arg0, u8 *, 0x47) = (u8) ((M2C_FIELD(arg0, u8 *, 0x47) & ~0x1C) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x47) << 0x3B) >> 0x3D) & 7) * 4));
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) ((M2C_FIELD(arg0, u16 *, 0x28) & ~0x7FF) | (M2C_FIELD(arg1, u16 *, 0x28) & 0x7FF));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0x3F) | (M2C_FIELD(arg1, u8 *, 0x2A) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) ((M2C_FIELD(arg0, u8 *, 0x39) & ~0x70) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x39) << 0x39) >> 0x3D) & 7) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x32) = (u8) ((M2C_FIELD(arg0, u8 *, 0x32) & ~0xFC) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x32) << 0x38) >> 0x3A) & 0x3F) * 4));
    M2C_FIELD(arg0, u8 *, 0x33) = (u8) ((M2C_FIELD(arg0, u8 *, 0x33) & ~0x3F) | (M2C_FIELD(arg1, u8 *, 0x33) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) ((M2C_FIELD(arg0, u8 *, 0x34) & ~0x3F) | (M2C_FIELD(arg1, u8 *, 0x34) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2B) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x2B) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3A) & ~0x38) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x3A) << 0x3A) >> 0x3D) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2B) & ~0x7F) | (M2C_FIELD(arg1, u8 *, 0x2B) & 0x7F));
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2C) & ~0x3F) | (M2C_FIELD(arg1, u8 *, 0x2C) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2D) & ~3) | (M2C_FIELD(arg1, u8 *, 0x2D) & 3));
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3A) & ~7) | (M2C_FIELD(arg1, u8 *, 0x3A) & 7));
}

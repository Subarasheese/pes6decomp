/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_00BD2D40(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 0x24) = (u8) ((M2C_FIELD(arg1, u8 *, 0x24) & ~0x3F) | (M2C_FIELD(arg0, u8 *, 0x24) & 0x3F));
    M2C_FIELD(arg1, u8 *, 0x25) = (u8) ((M2C_FIELD(arg1, u8 *, 0x25) & ~0x7F) | (M2C_FIELD(arg0, u8 *, 0x25) & 0x7F));
    M2C_FIELD(arg1, u8 *, 0x25) = (u8) ((M2C_FIELD(arg1, u8 *, 0x25) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x25) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg1, u8 *, 0x26) = (u8) ((M2C_FIELD(arg1, u8 *, 0x26) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x26) & 0xF));
    M2C_FIELD(arg1, u8 *, 0x26) = (u8) ((M2C_FIELD(arg1, u8 *, 0x26) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x26) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x27) = (u8) ((M2C_FIELD(arg1, u8 *, 0x27) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x27) & 0xF));
    M2C_FIELD(arg1, u8 *, 0x27) = (u8) ((M2C_FIELD(arg1, u8 *, 0x27) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x27) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x29) = (u8) ((M2C_FIELD(arg1, u8 *, 0x29) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x29) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg1, u8 *, 0x2C) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2C) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2C) << 0x38) >> 0x3E) & 3) << 6));
    M2C_FIELD(arg1, u8 *, 0x2D) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2D) & ~0xC) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2D) << 0x3C) >> 0x3E) & 3) * 4));
    M2C_FIELD(arg1, u8 *, 0x2D) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2D) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2D) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x2E) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2E) & ~7) | (M2C_FIELD(arg0, u8 *, 0x2E) & 7));
    M2C_FIELD(arg1, u8 *, 0x2E) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2E) & ~0x18) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2E) << 0x3B) >> 0x3E) & 3) * 8));
    M2C_FIELD(arg1, u8 *, 0x2E) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2E) & ~0xE0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2E) << 0x38) >> 0x3D) & 7) << 5));
    M2C_FIELD(arg1, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2F) & ~3) | (M2C_FIELD(arg0, u8 *, 0x2F) & 3));
    M2C_FIELD(arg1, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2F) & ~0x1C) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2F) << 0x3B) >> 0x3D) & 7) * 4));
    M2C_FIELD(arg1, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2F) & ~0x60) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2F) << 0x39) >> 0x3E) & 3) << 5));
    M2C_FIELD(arg1, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg1, u8 *, 0x2F) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x2F) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg1, u8 *, 0x30) = (u8) ((M2C_FIELD(arg1, u8 *, 0x30) & ~7) | (M2C_FIELD(arg0, u8 *, 0x30) & 7));
    M2C_FIELD(arg1, u8 *, 0x30) = (u8) ((M2C_FIELD(arg1, u8 *, 0x30) & ~0x18) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x30) << 0x3B) >> 0x3E) & 3) * 8));
    M2C_FIELD(arg1, u8 *, 0x33) = (u8) ((M2C_FIELD(arg1, u8 *, 0x33) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x33) << 0x38) >> 0x3E) & 3) << 6));
    M2C_FIELD(arg1, u8 *, 0x34) = (u8) ((M2C_FIELD(arg1, u8 *, 0x34) & ~0x40) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x34) << 0x39) >> 0x3F) & 1) << 6));
    M2C_FIELD(arg1, u8 *, 0x34) = (u8) ((M2C_FIELD(arg1, u8 *, 0x34) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x34) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg1, u8 *, 0x35) = (u8) ((M2C_FIELD(arg1, u8 *, 0x35) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x35) & 0xF));
    M2C_FIELD(arg1, u8 *, 0x35) = (u8) ((M2C_FIELD(arg1, u8 *, 0x35) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x35) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x36) = (u8) ((M2C_FIELD(arg1, u8 *, 0x36) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x36) & 0xF));
    M2C_FIELD(arg1, u8 *, 0x36) = (u8) ((M2C_FIELD(arg1, u8 *, 0x36) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x36) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x37) = (u8) ((M2C_FIELD(arg1, u8 *, 0x37) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x37) & 0xF));
    M2C_FIELD(arg1, u8 *, 0x37) = (u8) ((M2C_FIELD(arg1, u8 *, 0x37) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x37) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x38) = (u8) ((M2C_FIELD(arg1, u8 *, 0x38) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x38) & 0xF));
    M2C_FIELD(arg1, u8 *, 0x38) = (u8) ((M2C_FIELD(arg1, u8 *, 0x38) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x38) << 0x38) >> 0x3C) & 0xF) * 0x10));
    M2C_FIELD(arg1, u8 *, 0x39) = (u8) ((M2C_FIELD(arg1, u8 *, 0x39) & ~0xF) | (M2C_FIELD(arg0, u8 *, 0x39) & 0xF));
}

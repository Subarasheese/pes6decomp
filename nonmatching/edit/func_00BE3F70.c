/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_00BE3F70(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg0, u8 *, 0x10) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x10) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) ((M2C_FIELD(arg0, u8 *, 0x11) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x11) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) ((M2C_FIELD(arg0, u8 *, 0x18) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x18) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) ((M2C_FIELD(arg0, u8 *, 0x12) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x12) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) ((M2C_FIELD(arg0, u8 *, 0x13) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x13) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) ((M2C_FIELD(arg0, u8 *, 0x19) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x19) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) ((M2C_FIELD(arg0, u8 *, 0x16) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x16) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x14) = (u8) ((M2C_FIELD(arg0, u8 *, 0x14) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x14) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) ((M2C_FIELD(arg0, u8 *, 0x15) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x15) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((M2C_FIELD(arg0, u8 *, 0xE) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0xE) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) ((M2C_FIELD(arg0, u8 *, 0x17) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x17) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) ((M2C_FIELD(arg0, u8 *, 0x20) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x20) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~1) | (M2C_FIELD(arg1, u8 *, 0x1E) & 1));
    M2C_FIELD(arg0, u8 *, 0x1B) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1B) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1B) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((M2C_FIELD(arg0, u8 *, 0xF) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0xF) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~2) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x3E) >> 0x3F) & 1) * 2));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~4) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x3D) >> 0x3F) & 1) * 4));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~0x20) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x3A) >> 0x3F) & 1) << 5));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~8) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x3C) >> 0x3F) & 1) * 8));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~0x40) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x39) >> 0x3F) & 1) << 6));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x1A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1A) & ~0x80) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1A) << 0x38) >> 0x3F) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1E) & ~0x10) | ((((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1E) << 0x3B) >> 0x3F) & 1) * 0x10));
}

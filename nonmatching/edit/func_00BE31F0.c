/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BE29D0(u8);                              /* extern */

void func_00BE31F0(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg0, u8 *, 0) & 1);
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1C) << 0x38) >> 0x3E);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, u8 *, 1) & 3);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0) << 0x3B) >> 0x3C);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0) << 0x38) >> 0x3D);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) ((u64) ((s64) M2C_FIELD(arg0, u8 *, 1) << 0x3C) >> 0x3E);
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, u8 *, 0x1F) & 0x7F);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, u8 *, 0x20) & 0x7F);
    M2C_FIELD(arg1, s32 *, 0x24) = func_00BE29D0(M2C_FIELD(arg0, u8 *, 0x22));
}

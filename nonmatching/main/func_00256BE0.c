/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK);                     /* extern */

void func_00256BE0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s8 var_v1;

    func_001C4730(0x24);
    temp_a0 = arg2 & 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) ((M2C_FIELD(arg0, s32 *, 0x24) & 0xFFFE00FF) | ((M2C_FIELD(arg1, u16 *, 0x3C) & 0x1FF) << 8));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0x1F) | (((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x3D) << 0x3A) >> 0x3B) & 0x1F));
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) ((M2C_FIELD(arg0, u8 *, 0x29) & ~0x7F) | (M2C_FIELD(arg1, u8 *, 0x25) & 0x7F));
    M2C_FIELD(arg0, s32 *, 0x24) = (s8) (((u8) M2C_FIELD(arg0, s32 *, 0x24) & ~0xFC) | ((M2C_FIELD(arg1, u8 *, 0x24) & 0x3F) * 4));
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) ((M2C_FIELD(arg0, u8 *, 0x29) & ~0x80) | (((u64) ((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x24) << 0x2F) >> 0x37) < 0x1FU) << 7));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0x20) | ((((u64) ((s64) M2C_FIELD(arg0, s32 *, 0x24) << 0x2F) >> 0x37) == 0x1A) << 5));
    if ((temp_a0 != 0x4CC) && (temp_a0 != 0xEA8)) {
        var_v1 = ((u8) M2C_FIELD(arg0, s32 *, 0x24) & ~1) | (0 & 1);
    } else {
        var_v1 = ((u8) M2C_FIELD(arg0, s32 *, 0x24) & ~1) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_v1;
}

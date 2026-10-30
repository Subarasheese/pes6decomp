/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001454C0(s32);
M2C_UNK func_0014FC20(s32, s32, s8 *, s32, s32);    /* extern */

void func_0017D480(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s8 sp4C;
    s8 sp4D;
    s8 sp4E;
    s8 sp4F;
    s32 temp_s2;

    sp4C = (M2C_FIELD(arg2, u8 *, 0) & 0x1F) * 8;
    sp4D = ((u64) ((s64) (u16) M2C_FIELD(arg2, u8 *, 0) << 0x36) >> 0x3B) * 8;
    sp4E = ((u64) ((s64) M2C_FIELD(arg2, u8 *, 1) << 0x39) >> 0x3B) * 8;
    sp4F = ((u64) ((s64) M2C_FIELD(arg2, u8 *, 1) << 0x38) >> 0x3F) * 0xFF;
    temp_s2 = func_001454C0(arg0);
    func_0014FC20(temp_s2, func_001454C0(arg1), &sp4C, arg3, arg4);
}

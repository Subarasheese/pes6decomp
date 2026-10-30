/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001454C0(s32);
M2C_UNK func_0014FC20(s32, s32, u8 *, s32, s32);    /* extern */

void func_0017D330(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    u8 sp4C;
    u8 sp4D;
    u8 sp4E;
    s8 sp4F;
    s32 temp_a4;
    s32 temp_s2;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 var_a1;

    var_a1 = 0;
    temp_a3 = (M2C_FIELD(arg2, u8 *, 0) & 0x1F) * 8;
    sp4C = temp_a3;
    sp4D = ((u64) ((s64) (u16) M2C_FIELD(arg2, u8 *, 0) << 0x36) >> 0x3B) * 8;
    sp4E = ((u64) ((s64) M2C_FIELD(arg2, u8 *, 1) << 0x39) >> 0x3B) * 8;
    sp4F = ((u64) ((s64) M2C_FIELD(arg2, u8 *, 1) << 0x38) >> 0x3F) * 0xFF;
    if ((s32) temp_a3 > 0) {
        var_a1 = temp_a3;
    }
    temp_a2 = sp4D;
    if ((s32) var_a1 < (s32) temp_a2) {
        var_a1 = temp_a2;
    }
    temp_a2_2 = sp4E;
    if ((s32) var_a1 < (s32) temp_a2_2) {
        var_a1 = temp_a2_2;
    }
    temp_a4 = (((0xF8 - var_a1) / 5) + ((u32) (0xF8 - var_a1) >> 0x1F)) & 0xFF;
    sp4D += temp_a4;
    sp4C += temp_a4;
    sp4E += temp_a4;
    temp_s2 = func_001454C0(arg0);
    func_0014FC20(temp_s2, func_001454C0(arg1), &sp4C, arg3, arg4);
}

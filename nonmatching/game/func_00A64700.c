/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_00A13E50(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00AFBAD0(s32, M2C_UNK, s32);           /* extern */
extern char Pes6MatchSquads[];

void func_00A64700(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = arg1 & 0xFFFF;
    var_s0 = (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U) * 4) + 0x190;
    if ((temp_v1 != 0x92) && (temp_v1 != 0x94) && (temp_v1 != 0x93) && (temp_v1 != 0x91)) {

    } else {
        var_s0 -= 0x200;
    }
    if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg3) & 0xFFFF) < 0x49) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0xC01) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), arg3) & 0xFFFF) < 0x21)) {
        var_s0 += (s32) M2C_FIELD(arg0, s32 *, 0x1C) >> 4;
    }
    func_00AFBAD0(arg2, 0x200, -func_00A13E50(var_s0, 0x200));
}

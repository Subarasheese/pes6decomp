/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00A13E50(s32, s32);                        /* extern */
extern char Pes6MatchSquads[];

s32 func_00A5DFC0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg1 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0x8F:
    case 0x8E:
    case 0x23B:
    case 0x8D:
    case 0x90:
    case 0x8C:
        var_v0 = func_00A13E50(arg2, 0x1E00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
        break;
    case 0x81:
    case 0x76:
    case 0x88:
        var_v0 = func_00A13E50(arg2, 0x1B00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
        break;
    case 0x92:
    case 0x83:
    case 0x77:
        var_v0 = func_00A13E50(arg2, 0xE00);
        break;
    case 0xAC:
    case 0xAB:
    case 0xA9:
        var_v0 = func_00A13E50(arg2, 0xE00);
        break;
    case 0x7D:
    case 0x7C:
        var_v0 = func_00A13E50(arg2, 0x1100);
        break;
    default:
        var_v0 = func_00A13E50(arg2, 0x1300);
        break;
    }
    return var_v0 - 0xC8 + (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U) * 5);
}

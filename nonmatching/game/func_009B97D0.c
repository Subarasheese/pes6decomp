/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_002AE670(s32);
s32 func_009B97D0(s32 arg0) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00208310(arg0 & 0xFFFF);
    temp_a0 = arg0 & 0xFFFF;
    switch (temp_a0) {                              /* irregular */
    case 0x26A:
    case 0x3C3:
        return func_002AE670(7);
    case 0x26B:
    case 0x3C5:
        return func_002AE670(7);
    case 0x272:
    case 0x3CF:
        return func_002AE670(8);
    case 0x26F:
    case 0x3CB:
        return func_002AE670(0xA);
    case 0x26E:
    case 0x3C9:
        return func_002AE670(5);
    case 0x1B5:
    case 0x269:
    case 0x263:
    case 0x264:
    case 0x178:
    case 0x262:
        return func_002AE670(9);
    default:
        return M2C_FIELD(temp_v0, u8 *, 1) * 2;
    }
}

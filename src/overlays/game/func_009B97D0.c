/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *func_00208310(s32);
extern s32 func_002AE670(s32);

s32 func_009B97D0(s32 arg0) {
    u8 *p;
    s32 t;

    p = func_00208310(arg0 & 0xFFFF);
    t = (u16)arg0;
    switch (t) {
    case 0x3C3:
    case 0x26A:
        return func_002AE670(7);
    case 0x3C5:
    case 0x26B:
        return func_002AE670(7);
    case 0x3CF:
    case 0x272:
        return func_002AE670(8);
    case 0x3CB:
    case 0x26F:
        return func_002AE670(0xA);
    case 0x3C9:
    case 0x26E:
        return func_002AE670(5);
    case 0x262:
    case 0x178:
    case 0x264:
    case 0x263:
    case 0x269:
    case 0x1B5:
        return func_002AE670(9);
    default:
        return p[1] * 2;
    }
}

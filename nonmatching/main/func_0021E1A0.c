/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_002374D0(s32 a);
extern s32 func_002371A0(s32 a);
extern s32 D_0021E1A0(s32 a);
extern char D_003DF3A8[];
s32 func_0021E1A0(s32 a0) {
    u32 v = a0 & 0xFFFF;
    u32 w;
    if (v - 0x126 < 2) {
        if ((func_002374D0(a0) & 0xFF) == 1) {
            return 6;
        }
        w = func_002371A0(a0) & 0xFFFF;
        if (w - 0x126 < 2) {
            return 6;
        }
        return D_0021E1A0(w);
    }
    if ((s32)v < 0x128) {
        return *(s16 *)(D_003DF3A8 + v * 16);
    }
    return 0x73;
}

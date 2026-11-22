/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002374D0(s32 a);
extern s32 Pes6Team_ResolveSpecialId(s32 a);
extern s32 func_0021E1A0(s32 a);
extern char D_003DF3A8[];
s32 func_0021E1A0(s32 a0) {
    s32 result;
    do {

        u32 v = a0 & 0xFFFF;
        u32 w;
        if (v - 0x126 < 2) {
            if ((func_002374D0(a0) & 0xFF) == 1) {
                {
                    result = 6;
                    break;
                }
            }
            w = Pes6Team_ResolveSpecialId(a0) & 0xFFFF;
            if (w - 0x126 < 2) {
                {
                    result = 6;
                    break;
                }
            }
            {
                result = func_0021E1A0(w);
                break;
            }
        }
        if ((s32)v < 0x128) {
            {
                result = *(s16 *)(D_003DF3A8 + v * 16);
                break;
            }
        }
        result = 0x73;

    } while (0);
    return result;
}

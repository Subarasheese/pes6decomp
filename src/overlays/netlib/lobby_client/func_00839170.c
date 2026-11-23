/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_match_counters.h"

extern u8 D_008AB020[], D_008AAFA8[];
extern s32 func_0083A660(s32, s8, u16);
s32 func_00839170(s8 side, u16 index) {
    s32 mode = D_008A5F70[0];
    if (!func_00D0BAF0())
        return 2;
    switch (mode) {
    case 0x1c:
    case 0x1f:
    case 0x20:
    case 0x24:
    case 0x25:
        if (netlib_controls_counters() == 1) {
            if (side == 1) {
                D_008AB020[index] += 10;
            } else {
                D_008AAFA8[index] += 10;
            }
        } else if (side == 0) {
            D_008AB020[index] += 10;
        } else {
            D_008AAFA8[index] += 10;
        }
        return 2;
    case 0x26:
    case 0x27: {
        s32 submode = D_008A5F72[0];
        if (submode != 9 && submode != 8)
            return 2;
        break;
    }
    default:
        return 2;
    }
    return func_0083A660(5, side, index);
}

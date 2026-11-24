/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern void func_008B31A0(s32, s32);

void func_0024AE40(s32 pad) {
    s32 side = Pes6PadAssign[pad].side;
    switch (side > 0 ? side : -side) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        func_008B31A0(D_003E9B18->byPad.sideMarkers[pad], 1);
        break;
    default:
        func_008B31A0(D_003E9B18->byPad.sideMarkers[pad], 0);
        break;
    }
}

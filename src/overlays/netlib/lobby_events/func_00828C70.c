/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"
extern s32 D_008A4B70[], D_008A5674[], D_008A5C54[];
extern s32 func_008292D0(s32 channel, s32 value);
s32 func_00828C70(s32 value) {
    s32 channel;
    if (!D_008A4398[0]) {
        D_008A4B70[0] = 0;
        D_008A5C54[0] = 0;
        D_008A5674[0] = 0;
        return 2;
    }
    if (func_00862110(D_008A4398[0], 3) == 1)
        channel = 3;
    else if (func_00862110(D_008A4398[0], 8) == 1)
        channel = 8;
    else if (func_00862110(D_008A4398[0], 4) == 1)
        channel = 4;
    else if (func_00862110(D_008A4398[0], 5) == 1)
        channel = 5;
    else {
        D_008A4B70[0] = 0;
        D_008A5C54[0] = 0;
        D_008A5674[0] = 0;
        return 2;
    }
    return func_008292D0(channel, value);
}

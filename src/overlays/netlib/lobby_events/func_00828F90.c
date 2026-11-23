/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"
extern s32 D_008A4B60[], D_008A5664[], D_008A5C44[];
extern s32 func_00829D40(s32 channel);
s32 func_00828F90(void) {
    s32 channel;
    if (!D_008A4398[0]) {
        D_008A4B60[0] = 0;
        D_008A5C44[0] = 0;
        D_008A5664[0] = 0;
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
        D_008A4B60[0] = 0;
        D_008A5C44[0] = 0;
        D_008A5664[0] = 0;
        return 2;
    }
    return func_00829D40(channel);
}

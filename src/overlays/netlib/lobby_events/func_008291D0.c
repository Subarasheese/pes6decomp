/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_command_message.h"
extern s32 func_0082A0C0(s32 channel, s32 value);
extern s32 D_008A4B50[], D_008A5C38[], D_008A5658[];
s32 func_008291D0(void) {
    s32 value, channel;
    if (!D_008A4398[0]) {
        D_008A4B50[0] = 0;
        D_008A5C38[0] = 0;
        D_008A5658[0] = 0;
        return 2;
    }
    value = ((LobbyHost *)D_008A4398[0])->requestValue;
    if (func_00862110(D_008A4398[0], 3) == 1)
        channel = 3;
    else if (func_00862110(D_008A4398[0], 8) == 1)
        channel = 8;
    else if (func_00862110(D_008A4398[0], 4) == 1)
        channel = 4;
    else if (func_00862110(D_008A4398[0], 5) == 1)
        channel = 5;
    else {
        D_008A4B50[0] = 0;
        D_008A5C38[0] = 0;
        D_008A5658[0] = 0;
        return 1;
    }
    return func_0082A0C0(channel, value);
}

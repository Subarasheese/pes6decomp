/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_command_message.h"
extern u8 func_00840680(s32);
extern s32 func_00840C80(void);
s32 func_0082A430(void) {
    LobbyMessage message;
    LobbyChannel *channels = D_008A4398[0];
    if (func_00840680(func_00840C80()) != 1)
        return 4;
    if (!channels)
        return 2;
    if (func_00862110(channels, 3) != 1)
        return 2;
    if (!D_008A4398[0])
        return 2;
    if (netlib_channel_unavailable(3) == 1)
        return 2;
    func_001C48E8(&message, 0, sizeof(message));
    message.tag = 0x120;
    message.length = 0;
    return func_00825640(3, &message);
}

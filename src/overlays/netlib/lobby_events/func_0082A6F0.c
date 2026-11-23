/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_command_message.h"
s32 func_0082A6F0(s32 channel, s32 value) {
    LobbyMessage message;
    if (!D_008A4398[0])
        return 2;
    if (netlib_channel_unavailable(channel) == 1)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    func_001C48E8(&message, 0, sizeof(message));
    message.tag = 0x105;
    message.length = 4;
    message.words[0] = value;
    return func_00825640(channel, &message);
}

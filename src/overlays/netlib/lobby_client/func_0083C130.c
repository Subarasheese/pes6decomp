/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_event_result.h"
extern s32 func_00841D30(void);
extern s32 func_00870DB0(LobbyChannel *connection);
static inline s32 sendChannel(LobbyChannel *connection, s32 channel) {
    if (func_00841D30() == 1)
        return 0;
    return func_00870DB0(&connection[channel]);
}
s32 func_0083C130(s32 channel) {
    LobbyChannel *connection = func_00D0BAF0();
    s32 sent;
    func_0082B4C0(channel);
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        sent = sendChannel(connection, channel);
        if (sent == 0) {
            netlib_reset_reply(0x53);
            return netlib_channel_result(channel, 4);
        } else {
            netlib_reset_reply(0x53);
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

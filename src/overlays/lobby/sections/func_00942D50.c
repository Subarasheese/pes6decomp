/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_event_result.h"
extern s32 func_008791E0(void *connection, u8 value);
s32 func_00942D50(s32 channel, u8 value) {
    LobbyChannel *connection = func_00D0BAF0();
    s32 sent;
    func_0082B4C0(channel);
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        sent = func_008791E0(&connection[channel], value);
        if (sent == 0) {
            netlib_reset_reply(0x75);
            netlib_reset_reply(0x77);
            netlib_reset_reply(0x78);
            return netlib_channel_result(channel, 4);
        } else {
            netlib_reset_reply(0x75);
            netlib_reset_reply(0x77);
            netlib_reset_reply(0x78);
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

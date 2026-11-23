/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_event_result.h"
extern s32 func_00871080(void *connection, u8 value);
s32 func_0083C2A0(s32 channel, u8 value) {
    LobbyChannel *connection = func_00D0BAF0();
    s32 sent;
    func_0082B4C0(channel);
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        sent = func_00871080(&connection[channel], value);
        if (sent == 0) {
            netlib_reset_reply(0x50);
            netlib_reset_reply(0x53);
            netlib_reset_reply(0x52);
            return netlib_channel_result(channel, 4);
        } else {
            netlib_reset_reply(0x50);
            netlib_reset_reply(0x53);
            netlib_reset_reply(0x52);
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

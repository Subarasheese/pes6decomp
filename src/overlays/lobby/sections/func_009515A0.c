/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_event_result.h"
extern s32 func_0086F5C0(void *connection, u8 value);
extern s32 func_0082C8E0(s32 event, s32 value);
static inline void clearChannelReply(void) {
    func_0082C840(0x2b);
    func_0082C8E0(0x27, 0);
    func_0082C8E0(0x29, 0);
}
s32 func_009515A0(s32 channel, u8 value) {
    LobbyChannel *connection = func_0082C2A0();
    s32 sent;
    func_0082B4C0(channel);
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        sent = func_0086F5C0(&connection[channel], value);
        if (sent == 0) {
            clearChannelReply();
            return netlib_channel_result(channel, 4);
        } else {
            clearChannelReply();
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

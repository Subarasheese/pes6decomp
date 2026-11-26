/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_event_result.h"
extern s32 func_00868FD0(void *connection);
extern s32 func_0086D720(void *connection);
extern s32 func_00825610(void);
s32 func_0083CAA0(s32 channel) {
    LobbyChannel *connection = func_00D0BAF0();
    s32 sent;
    func_0082B4C0(channel);
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        if (func_00825610() == 5)
            sent = func_00868FD0(&connection[channel]);
        else
            sent = func_0086D720(&connection[channel]);
        if (sent == 0) {
            func_0082C840(0x2a);
            return netlib_channel_result(channel, 4);
        } else {
            func_0082C840(0x2a);
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

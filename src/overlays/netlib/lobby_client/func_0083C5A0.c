/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_event_result.h"
extern s32 func_008695B0(void *connection, s8 value);
extern s32 func_0086D2E0(void *connection, s8 value);
extern s32 func_00825610(void);
extern s32 D_008A9FCC[];
static inline void setMode(u8 mode) {
    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        D_008A9FCC[0] = mode;
        break;
    default:
        D_008A9FCC[0] = 0;
        break;
    }
}
s32 func_0083C5A0(s32 channel, s8 value) {
    LobbyChannel *connection = func_00D0BAF0();
    s32 sent;
    func_0082B4C0(channel);
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        if (func_00825610() == 5)
            sent = func_008695B0(&connection[channel], value);
        else
            sent = func_0086D2E0(&connection[channel], value);
        if (sent == 0) {
            func_0082C840(0x30);
            setMode((u8)value);
            if (func_00827450(channel) == 1)
                return 3;
            return 4;
        } else {
            func_0082C840(0x30);
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

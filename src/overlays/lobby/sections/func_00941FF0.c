/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_event_result.h"
extern s32 func_0082C650(s32 event);
extern s32 func_0086A280(void *connection);
extern s32 func_00836E20(void);
static inline void cancelRequest(void) {
    func_0082C920(0x81);
    func_0082C840(0x8f);
    func_0082C650(0x8f);
}
s32 func_00941FF0(void) {
    LobbyChannel *connection = func_0082C2A0();
    s32 channel = func_00836E20();
    func_0082B4C0(channel);
    if (channel != 3 && channel != 5) {
        cancelRequest();
        return 2;
    }
    if (!connection) {
        cancelRequest();
        return 2;
    }
    if (channel < 0 || channel >= 9) {
        cancelRequest();
        return 2;
    }
    if (func_00862110(connection, channel) == 1) {
        if (func_0086A280(&connection[channel]) == 0) {
            func_0082C840(0x8f);
            return netlib_channel_result(channel, 4);
        } else {
            func_0082C840(0x8f);
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00824910(void);
extern s32 func_00866C80(LobbyChannel *, s32, s32);
s32 func_00959110(s32 channel, s32 payload) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x18, -1);
    if (!connection)
        func_0082CA50(0x18, -1);
    switch (func_0082CA10(0x18)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_00866C80(&connection[channel], func_00824910(), payload) == 0) {
                func_0082C840(0x14);
                func_0082C690(0x14, 0);
                func_0082C980(0x18);
            } else {
                func_0082CA50(0x18, -1);
            }
            if (pending == 1)
                func_0082CA50(0x18, -1);
        } else
            func_0082CA50(0x18, -1);
        break;
    case 1:
        if (func_0082C8A0(0x14) == 1) {
            if (func_0082C7C0(0x14) == 0) {
                func_0082C980(0x18);
            } else {
                func_0082CA50(0x18, 3);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x18, -1);
            if (func_0082C5B0(0x14) > 7200)
                func_0082CA50(0x18, 3);
            if (pending == 1)
                func_0082CA50(0x18, -1);
        }
        break;
    case 2:
        func_0082C920(0x18);
        func_0082C690(0x14, 0);
        return 4;
    case 3:
        func_0082C920(0x18);
        func_0082C690(0x14, 0);
        return 1;
    default:
        func_0082C920(0x18);
        func_0082C690(0x14, 0);
        return 2;
    }
    return 0;
}

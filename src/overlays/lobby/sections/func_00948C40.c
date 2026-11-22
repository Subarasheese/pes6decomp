/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_0087B190(LobbyChannel *channel, s32 payload);
s32 func_00948C40(s32 channel, s32 payload) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x5a, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x5a, -1);
    switch (func_0082CA10(0x5a)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_0087B190(&connection[channel], payload) == 0) {
                func_0082C840(0x5e);
                func_0082C6D0(0x5e);
                func_0082C690(0x5e, 0);
                func_0082C980(0x5a);
            } else
                func_0082CA50(0x5a, -1);
            if (pending == 1)
                func_0082CA50(0x5a, -1);
        } else
            func_0082CA50(0x5a, -1);
        break;
    case 1:
        if (func_0082C8A0(0x5e) == 1) {
            if (func_0082C7C0(0x5e) == 0) {
                func_0082C980(0x5a);
            } else {
                func_0082C980(0x5a);
                func_0082C980(0x5a);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x5a, -1);
            if (func_0082C5B0(0x5e) > 7200)
                func_0082CA50(0x5a, 3);
            if (pending == 1)
                func_0082CA50(0x5a, -1);
        }
        break;
    case 2:
        func_0082C920(0x5a);
        func_0082C840(0x5e);
        func_0082C690(0x5e, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x5a);
        func_0082C840(0x5e);
        func_0082C690(0x5e, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x5a);
        func_0082C840(0x5e);
        func_0082C690(0x5e, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

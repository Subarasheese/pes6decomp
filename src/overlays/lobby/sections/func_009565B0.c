/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_0086AFE0(LobbyChannel *);
s32 func_009565B0(s32 channel) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if ((channel != 4) && (channel != 5))
        pending = 1;
    if (!connection)
        func_0082CA50(0x55, -1);
    switch (func_0082CA10(0x55)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_0086AFE0(&connection[channel]) == 0) {
                func_0082C840(0x5a);
                func_0082C840(0x59);
                func_0082C840(0x5b);
                func_0082C840(0x58);
                func_0082C690(0x58, 0);
                func_0082C980(0x55);
            } else {
                func_0082CA50(0x55, -1);
            }
            if (pending == 1)
                func_0082CA50(0x55, -1);
        } else
            func_0082CA50(0x55, -1);
        break;
    case 1:
        if (func_0082C8A0(0x58) == 1) {
            if (func_0082C7C0(0x58) == 0) {
                func_0082C980(0x55);
            } else {
                func_0082CA50(0x55, 3);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x55, -1);
            if (func_0082C5B0(0x58) > 7200)
                func_0082CA50(0x55, 3);
            if (pending == 1)
                func_0082CA50(0x55, -1);
        }
        break;
    case 2:
        func_0082C920(0x55);
        func_0082C690(0x58, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x55);
        func_0082C690(0x58, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x55);
        func_0082C690(0x58, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

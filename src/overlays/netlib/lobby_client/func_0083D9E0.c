/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00825610(void);
extern s32 func_00869900(void *, void *), func_0086BB60(void *, void *);
s32 func_0083D9E0(s32 channel, u8 *request) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x44, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x44, -1);
    switch (func_0082CA10(0x44)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            s32 sent;
            if (func_00825610() == 5)
                sent = func_00869900(&connection[channel], request + 0x874);
            else
                sent = func_0086BB60(&connection[channel], request + 0x874);
            if (sent == 0) {
                func_0082C840(0x42);
                func_0082C690(0x42, 0);
                func_0082C980(0x44);
            } else {
                func_0082CA50(0x44, -1);
            }
            if (pending == 1)
                func_0082CA50(0x44, -1);
        } else
            func_0082CA50(0x44, -1);
        break;
    case 1:
        if (func_0082C8A0(0x42) == 1) {
            func_0082C980(0x44);
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x44, -1);
            if (func_0082C5B0(0x42) > 7200)
                func_0082CA50(0x44, 3);
            if (pending == 1)
                func_0082CA50(0x44, -1);
        }
        break;
    case 2:
        func_0082CA50(0x44, 0);
        func_0082C690(0x42, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x44, 0);
        func_0082C690(0x42, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x44, 0);
        func_0082C690(0x42, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern LobbyChannel *func_00D0BAF0(void);
extern s32 func_00825610(void), func_00868FD0(void *), func_0086D720(void *);
s32 func_0083C7B0(s32 channel) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_00D0BAF0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x30, -1);
    if (!connection)
        func_0082CA50(0x30, -1);
    switch (func_0082CA10(0x30)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            s32 sent;
            if (func_00825610() == 5)
                sent = func_00868FD0(&connection[channel]);
            else
                sent = func_0086D720(&connection[channel]);
            if (sent == 0) {
                func_0082C840(0x2a);
                func_0082C690(0x2a, 0);
                func_0082C980(0x30);
            } else {
                func_0082CA50(0x30, -1);
            }

        } else
            func_0082CA50(0x30, -1);
        break;
    case 1:
        if (func_0082C8A0(0x2a) == 1) {
            if (func_0082C7C0(0x2a) == 0) {
                func_0082C980(0x30);
            } else {
                func_0082C980(0x30);
                func_0082C980(0x30);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x30, -1);
            if (func_0082C5B0(0x2a) > 7200)
                func_0082CA50(0x30, 3);
            if (pending == 1)
                func_0082CA50(0x30, -1);
        }
        break;
    case 2:
        func_0082CA50(0x30, 0);
        func_0082C690(0x2a, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x30, 0);
        func_0082C690(0x2a, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x30, 0);
        func_0082C690(0x2a, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

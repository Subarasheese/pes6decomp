/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
#include "pes6/lobby_endpoints.h"
#include "pes6/netlib_connection.h"
extern char *strcpy(char *dest, const char *source);

s32 func_009570B0(s32 channel, u8 mode) {
    /* The two address buffers begin 0x80 bytes apart in the PAL stack frame. */
    char first[129], second[128];
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x23, -1);
    switch (func_0082CA10(0x23)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            const LobbyEndpoints *server = (const LobbyEndpoints *)func_008580D0();
            strcpy(first, func_002DCDE0(server->firstAddress));
            strcpy(second, func_002DCDE0(server->secondAddress));
            if (func_00872610(&connection[channel], mode, first, server->firstPort, second,
                              server->secondPort, server->value16) == 0) {
                func_0082C840(0x1b);
                func_0082C690(0x1b, 0);
                func_0082C980(0x23);
            } else {
                func_0082CA50(0x23, -1);
            }
            if (pending == 1)
                func_0082CA50(0x23, -1);
        } else
            func_0082CA50(0x23, -1);
        break;
    case 1:
        if (func_0082C8A0(0x1b) == 1) {
            if (((NetlibConnection *)connection)->error == 0) {
                func_0082C980(0x23);
            } else {
                func_0082C980(0x23);
                func_0082C980(0x23);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x23, -1);
            if (func_0082C5B0(0x1b) > 7200)
                func_0082CA50(0x23, 3);
            if (pending == 1)
                func_0082CA50(0x23, -1);
        }
        break;
    case 2:
        func_0082CA50(0x23, 0);
        func_0082C690(0x1b, 0);
        return 4;
    case 3:
        func_0082CA50(0x23, 0);
        func_0082C690(0x1b, 0);
        return 1;
    default:
        func_0082CA50(0x23, 0);
        func_0082C690(0x1b, 0);
        return 2;
    }
    return 0;
}

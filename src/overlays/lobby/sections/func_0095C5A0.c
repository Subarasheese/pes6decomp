/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00875B70(LobbyChannel *, s32);
s32 func_0095C5A0(s32 value) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(3) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x76, -1);
    switch (func_0082CA10(0x76)) {
    case 0:
        if (func_00862110(connection, 3) == 1) {
            if (func_00875B70(&connection[3], value) == 0) {
                func_0082C840(0x83);
                func_0082C690(0x83, 0);
                func_0082C980(0x76);
            } else {
                func_0082CA50(0x76, -1);
            }
            if (pending == 1)
                func_0082CA50(0x76, -1);
        } else
            func_0082CA50(0x76, -1);
        break;
    case 1:
        if (func_0082C8A0(0x83) == 1) {
            if (func_0082C7C0(0x83) == 0) {
                func_0082C980(0x76);
            } else {
                func_0082CA50(0x76, 3);
            }
        } else {
            if (func_00862110(connection, 3) == 0)
                func_0082CA50(0x76, -1);
            if (func_0082C5B0(0x83) > 7200)
                func_0082CA50(0x76, 3);
            if (pending == 1)
                func_0082CA50(0x76, -1);
        }
        break;
    case 2:
        func_0082CA50(0x76, 0);
        func_0082C690(0x83, 0);
        return 4;
    case 3:
        func_0082CA50(0x76, 0);
        func_0082C690(0x83, 0);
        return 1;
    default:
        func_0082CA50(0x76, 0);
        func_0082C690(0x83, 0);
        return 2;
    }
    return 0;
}

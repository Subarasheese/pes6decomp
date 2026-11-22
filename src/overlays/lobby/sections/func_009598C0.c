/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00867A90(LobbyChannel *, s32, s32);
s32 func_009598C0(s32 value, s32 payload) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(2) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0xf, -1);
    if (payload == 0)
        func_0082CA50(0xf, -1);
    switch (func_0082CA10(0xf)) {
    case 0:
        if (func_00862110(connection, 2) == 1) {
            if (func_00867A90(&connection[2], value, payload) == 0) {
                func_0082C840(0xb);
                func_0082C690(0xb, 0);
                func_0082C980(0xf);
            } else {
                func_0082CA50(0xf, -1);
            }
            if (pending == 1)
                func_0082CA50(0xf, -1);
        } else
            func_0082CA50(0xf, -1);
        break;
    case 1:
        if (func_0082C8A0(0xb) == 1) {
            if (func_0082C7C0(0xb) == 0) {
                func_0082C980(0xf);
            } else {
                func_0082CA50(0xf, 3);
            }
        } else {
            if (func_00862110(connection, 2) == 0)
                func_0082CA50(0xf, -1);
            if (func_0082C5B0(0xb) > 7200)
                func_0082CA50(0xf, 3);
            if (pending == 1)
                func_0082CA50(0xf, -1);
        }
        break;
    case 2:
        func_0082C920(0xf);
        func_0082C690(0xb, 0);
        return 4;
    case 3:
        func_0082C920(0xf);
        func_0082C690(0xb, 0);
        return 1;
    default:
        func_0082C920(0xf);
        func_0082C690(0xb, 0);
        return 2;
    }
    return 0;
}

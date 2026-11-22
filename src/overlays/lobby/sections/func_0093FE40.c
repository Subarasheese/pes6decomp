/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00868630(LobbyChannel *);
s32 func_0093FE40(void) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(1) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(9, -1);
    switch (func_0082CA10(9)) {
    case 0:
        if (func_00862110(connection, 1) == 1) {
            if (func_00868630(&connection[1]) == 0) {
                func_0082C840(8);
                func_0082C690(8, 0);
                func_0082C980(9);
            } else {
                func_0082CA50(9, -1);
            }
            if (pending == 1)
                func_0082CA50(9, -1);
        } else
            func_0082CA50(9, -1);
        break;
    case 1:
        if (func_0082C8A0(8) == 1) {
            if (func_0082C7C0(8) == 0) {
                func_0082C980(9);
            } else {
                func_0082CA50(9, 3);
            }
        } else {
            if (func_00862110(connection, 1) == 0)
                func_0082CA50(9, -1);
            if (func_0082C5B0(8) > 7200)
                func_0082CA50(9, 3);
            if (pending == 1)
                func_0082CA50(9, -1);
        }
        break;
    case 2:
        func_0082C920(9);
        func_0082C690(8, 0);
        return 4;
    case 3:
        func_0082C920(9);
        func_0082C690(8, 0);
        return 1;
    default:
        func_0082C920(9);
        func_0082C690(8, 0);
        return 2;
    }
    return 0;
}

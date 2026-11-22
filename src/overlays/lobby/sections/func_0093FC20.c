/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00868710(LobbyChannel *);
s32 func_0093FC20(void) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(1) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(5, -1);
    switch (func_0082CA10(5)) {
    case 0:
        if (func_00862110(connection, 1) == 1) {
            if (func_00868710(&connection[1]) == 0) {
                func_0082C840(6);
                func_0082C690(6, 0);
                func_0082C980(5);
            } else {
                func_0082CA50(5, -1);
            }
            if (pending == 1)
                func_0082CA50(5, -1);
        } else
            func_0082CA50(5, -1);
        break;
    case 1:
        if (func_0082C8A0(6) == 1) {
            if (func_0082C7C0(6) == 0) {
                func_0082C980(5);
            } else {
                func_0082CA50(5, 3);
            }
        } else {
            if (func_00862110(connection, 1) == 0)
                func_0082CA50(5, -1);
            if (func_0082C5B0(6) > 7200)
                func_0082CA50(5, 3);
            if (pending == 1)
                func_0082CA50(5, -1);
        }
        break;
    case 2:
        func_0082C920(5);
        func_0082C690(6, 0);
        return 4;
    case 3:
        func_0082C920(5);
        func_0082C690(6, 0);
        return 1;
    default:
        func_0082C920(5);
        func_0082C690(6, 0);
        return 2;
    }
    return 0;
}

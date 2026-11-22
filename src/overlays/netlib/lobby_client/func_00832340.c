/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_008768C0(LobbyChannel *);
s32 func_00832340(void) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(5) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x8e, -1);
    switch (func_0082CA10(0x8e)) {
    case 0:
        if (func_00862110(connection, 5) == 1) {
            if (func_008768C0(&connection[5]) == 0) {
                func_0082C840(0x9d);
                func_0082C690(0x9d, 0);
                func_0082C980(0x8e);
            } else {
                func_0082CA50(0x8e, -1);
            }
            if (pending == 1)
                func_0082CA50(0x8e, -1);
        } else
            func_0082CA50(0x8e, -1);
        break;
    case 1:
        if (func_0082C8A0(0x9d) == 1) {
            if (func_0082C7C0(0x9d) == 0) {
                func_0082C980(0x8e);
            } else {
                func_0082C980(0x8e);
                func_0082C980(0x8e);
            }
        } else {
            if (func_00862110(connection, 5) == 0)
                func_0082CA50(0x8e, -1);
            if (func_0082C5B0(0x9d) > 7200)
                func_0082CA50(0x8e, 3);
            if (pending == 1)
                func_0082CA50(0x8e, -1);
        }
        break;
    case 2:
        func_0082CA50(0x8e, 0);
        func_0082C690(0x9d, 0);
        return func_00827450(5) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x8e, 0);
        func_0082C690(0x9d, 0);
        return func_00827450(5) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x8e, 0);
        func_0082C690(0x9d, 0);
        return func_00827450(5) == 1 ? 3 : 2;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_request.h"
extern u8 D_008AA10E[];
extern s32 func_00875480(void *, s32);
s32 func_0095B890(s32 value) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(3) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x7a, -1);
    switch (func_0082CA10(0x7a)) {
    case 0:
        if (func_00862110(connection, 3) == 1) {
            if (func_00875480(&connection[3], value) == 0) {
                func_0082C840(0x88);
                func_0082C690(0x88, 0);
                func_0082C980(0x7a);
            } else {
                func_0082CA50(0x7a, -1);
            }
            if (pending == 1)
                func_0082CA50(0x7a, -1);
        } else
            func_0082CA50(0x7a, -1);
        break;
    case 1:
        if (func_0082C8A0(0x88) == 1) {
            s32 result = func_0082C7C0(0x88);
            switch (result) {
            case 0:
                func_0082C980(0x7a);
                break;
            case -800:
                *D_008AA10E = 0;
                func_0082C980(0x7a);
                break;
            default:
                *D_008AA10E = 0;
                func_0082CA50(0x7a, 3);
                break;
            }
        } else {
            if (func_00862110(connection, 3) == 0)
                func_0082CA50(0x7a, -1);
            if (func_0082C5B0(0x88) > 7200)
                func_0082CA50(0x7a, 3);
            if (pending == 1)
                func_0082CA50(0x7a, -1);
        }
        break;
    case 2:
        func_0082CA50(0x7a, 0);
        func_0082C690(0x88, 0);
        return 4;
    case 3:
        func_0082CA50(0x7a, 0);
        func_0082C690(0x88, 0);
        return 1;
    default:
        func_0082CA50(0x7a, 0);
        func_0082C690(0x88, 0);
        return 2;
    }
    return 0;
}

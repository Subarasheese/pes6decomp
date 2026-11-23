/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_request.h"
extern u8 D_008AA10F[];
extern s32 D_008AA110[];
extern s32 func_008757A0(void *);
s32 func_0095C340(void) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(3) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x77, -1);
    switch (func_0082CA10(0x77)) {
    case 0:
        if (func_00862110(connection, 3) == 1) {
            if (func_008757A0(&connection[3]) == 0) {
                func_0082C840(0x85);
                func_0082C690(0x85, 0);
                func_0082C980(0x77);
            } else {
                func_0082CA50(0x77, -1);
            }
            if (pending == 1)
                func_0082CA50(0x77, -1);
        } else
            func_0082CA50(0x77, -1);
        break;
    case 1:
        if (func_0082C8A0(0x85) == 1) {
            s32 result = func_0082C7C0(0x85);
            switch (result) {
            case 0:
                func_0082C980(0x77);
                break;
            case -800:
                *D_008AA10F = 0;
                *D_008AA110 = 0;
                func_0082C980(0x77);
                break;
            default:
                *D_008AA10F = 0;
                *D_008AA110 = 0;
                func_0082CA50(0x77, 3);
                break;
            }
        } else {
            if (func_00862110(connection, 3) == 0)
                func_0082CA50(0x77, -1);
            if (func_0082C5B0(0x85) > 7200)
                func_0082CA50(0x77, 3);
            if (pending == 1)
                func_0082CA50(0x77, -1);
        }
        break;
    case 2:
        func_0082CA50(0x77, 0);
        func_0082C690(0x85, 0);
        return 4;
    case 3:
        func_0082CA50(0x77, 0);
        func_0082C690(0x85, 0);
        return 1;
    default:
        func_0082CA50(0x77, 0);
        func_0082C690(0x85, 0);
        return 2;
    }
    return 0;
}

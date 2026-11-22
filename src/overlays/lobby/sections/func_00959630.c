/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00824910(void);
extern s32 func_008671E0(LobbyChannel *, s32);
s32 func_00959630(s32 channel) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x14, -1);
    switch (func_0082CA10(0x14)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_008671E0(&connection[channel], func_00824910()) == 0) {
                func_0082C840(0x10);
                func_0082C690(0x10, 0);
                func_0082C980(0x14);
            } else {
                func_0082CA50(0x14, -1);
            }
            if (pending == 1)
                func_0082CA50(0x14, -1);
        } else
            func_0082CA50(0x14, -1);
        break;
    case 1:
        if (func_0082C8A0(0x10) == 1) {
            if (func_0082C7C0(0x10) == 0) {
                func_0082C980(0x14);
            } else {
                func_0082CA50(0x14, 3);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x14, -1);
            if (func_0082C5B0(0x10) > 7200)
                func_0082CA50(0x14, 3);
            if (pending == 1)
                func_0082CA50(0x14, -1);
        }
        break;
    case 2:
        func_0082C920(0x14);
        func_0082C690(0x10, 0);
        return 4;
    case 3:
        func_0082C920(0x14);
        func_0082C690(0x10, 0);
        return 1;
    default:
        func_0082C920(0x14);
        func_0082C690(0x10, 0);
        return 2;
    }
    return 0;
}

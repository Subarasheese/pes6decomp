/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00841D50(void);
extern void func_0082B990(s32);
extern s32 func_00866E00(LobbyChannel *, s32, s32, s32);
s32 func_00930580(s32 channel, s32 payload, s32 option, s32 detail) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x15, -1);
    if (!connection)
        func_0082CA50(0x15, -1);
    switch (func_0082CA10(0x15)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_00841D50() == 1) {
                func_0082B990(channel);
                func_0082CA50(0x15, -1);
            } else if (func_00866E00(&connection[channel], detail, option, payload) == 0) {
                func_0082C840(0x11);
                func_0082C690(0x11, 0);
                func_0082C980(0x15);
            } else {
                func_0082CA50(0x15, -1);
            }
            if (pending == 1)
                func_0082CA50(0x15, -1);
        } else
            func_0082CA50(0x15, -1);
        break;
    case 1:
        if (func_0082C8A0(0x11) == 1) {
            if (func_0082C7C0(0x11) == 0) {
                func_0082C980(0x15);
            } else {
                func_0082CA50(0x15, 3);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x15, -1);
            if (func_0082C5B0(0x11) > 7200)
                func_0082CA50(0x15, 3);
            if (pending == 1)
                func_0082CA50(0x15, -1);
        }
        break;
    case 2:
        func_0082C920(0x15);
        func_0082C690(0x11, 0);
        return 4;
    case 3:
        func_0082C920(0x15);
        func_0082C690(0x11, 0);
        return 1;
    default:
        func_0082C920(0x15);
        func_0082C690(0x11, 0);
        return 2;
    }
    return 0;
}

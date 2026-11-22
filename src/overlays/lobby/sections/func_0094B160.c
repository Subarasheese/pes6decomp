/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_0081D6D0(s32);
extern s32 func_0087AA30(LobbyChannel *, s32);
s32 func_0094B160(s32 channel, s32 payload) {
    s32 pending;
    LobbyChannel *connection;
    s32 valid;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x6c, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x6c, -1);
    valid = func_0081D6D0(payload);
    if (valid == 0)
        func_0082CA50(0x6c, -1);
    switch (func_0082CA10(0x6c)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_0087AA30(&connection[channel], payload) == 0) {
                func_0082C840(0x7b);
                func_0082C6D0(0x7b);
                func_0082C690(0x7b, 0);
                func_0082C980(0x6c);
            } else
                func_0082CA50(0x6c, -1);
            if (pending == 1)
                func_0082CA50(0x6c, -1);
        } else
            func_0082CA50(0x6c, -1);
        break;
    case 1:
        if (func_0082C8A0(0x7b) == 1) {
            if (func_0082C7C0(0x7b) == 0) {
                func_0082C980(0x6c);
            } else {
                func_0082C980(0x6c);
                func_0082C980(0x6c);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x6c, -1);
            if (func_0082C5B0(0x7b) > 7200)
                func_0082CA50(0x6c, 3);
            if (pending == 1)
                func_0082CA50(0x6c, -1);
        }
        break;
    case 2:
        func_0082C920(0x6c);
        func_0082C840(0x7b);
        func_0082C690(0x7b, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x6c);
        func_0082C840(0x7b);
        func_0082C690(0x7b, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x6c);
        func_0082C840(0x7b);
        func_0082C690(0x7b, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

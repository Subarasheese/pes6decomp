/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00836E20(void);
extern s32 func_0086A750(void *connection, u8 first, u8 second, u8 third);
s32 func_00942160(u8 first, u8 second, u8 third) {
    s32 pending;
    LobbyChannel *connection;
    s32 channel;
    pending = 0;
    connection = func_0082C2A0();
    channel = func_00836E20();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (channel != 3)
        pending = 1;
    if (!connection)
        func_0082CA50(0x7e, -1);
    switch (func_0082CA10(0x7e)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_0086A750(&connection[channel], first, second, third) == 0) {
                func_0082C840(0x5a);
                func_0082C840(0x59);
                func_0082C840(0x5b);
                func_0082C840(0x8c);
                func_0082C690(0x8c, 0);
                func_0082C980(0x7e);
            } else {
                func_0082CA50(0x7e, -1);
            }
            if (pending == 1)
                func_0082CA50(0x7e, -1);
        } else
            func_0082CA50(0x7e, -1);
        break;
    case 1:
        if (func_0082C8A0(0x8c) == 1) {
            if (func_0082C7C0(0x8c) == 0) {
                func_0082C980(0x7e);
            } else {
                func_0082CA50(0x7e, 3);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x7e, -1);
            if (func_0082C5B0(0x8c) > 7200)
                func_0082CA50(0x7e, 3);
            if (pending == 1)
                func_0082CA50(0x7e, -1);
        }
        break;
    case 2:
        func_0082C920(0x7e);
        func_0082C690(0x8c, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x7e);
        func_0082C690(0x8c, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x7e);
        func_0082C690(0x8c, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

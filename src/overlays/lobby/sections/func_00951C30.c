/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
#include "pes6/netlib_room.h"
extern s32 func_0081D6D0(const char *text);
extern s32 func_0082C8E0(s32 event, s32 value);
extern s32 func_0086FB40(void *, NetlibRoomState *, const char *, s8, const char *);
s32 func_00951C30(s32 channel, const char *name, const char *password) {
    s32 pending;
    s8 hasPassword;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (func_0081D6D0(name) == 0)
        pending = 1;
    hasPassword = func_0081D6D0(password) == 1;
    if (!connection)
        func_0082CA50(0x2c, -1);
    if (channel < 0 || channel >= 9)
        pending = 1;
    switch (func_0082CA10(0x2c)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_0086FB40(&connection[channel], (NetlibRoomState *)((u8 *)connection + 0xf8a4),
                              name, hasPassword, password) == 0) {
                func_0082C840(0x24);
                func_0082C690(0x24, 0);
                func_0082C980(0x2c);
            } else {
                func_0082CA50(0x2c, -1);
            }
            if (pending == 1)
                func_0082CA50(0x2c, -1);
        } else
            func_0082CA50(0x2c, -1);
        break;
    case 1:
        if (func_0082C8A0(0x24) == 1) {
            if (func_0082C7C0(0x24) == 0) {
                func_0082C8E0(0x26, 0);
                func_0082C980(0x2c);
            } else {
                func_0082C980(0x2c);
                func_0082C980(0x2c);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x2c, -1);
            if (func_0082C5B0(0x24) > 7200)
                func_0082CA50(0x2c, 3);
            if (pending == 1)
                func_0082CA50(0x2c, -1);
        }
        break;
    case 2:
        func_0082CA50(0x2c, 0);
        func_0082C690(0x24, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x2c, 0);
        func_0082C690(0x24, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x2c, 0);
        func_0082C690(0x24, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

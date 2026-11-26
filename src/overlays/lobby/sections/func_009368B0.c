/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00867600(void *, s32);

s32 func_009368B0(s32 channel) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x97, -1);
    if (!connection)
        func_0082CA50(0x97, -1);
    switch (func_0082CA10(0x97)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (*(s32 *)((u8 *)connection + 0x4bb8) == 1) {
                func_0082C8E0(0x0f, 1);
                func_0082C800(0x0f, 0);
                func_0082C690(0x0f, 0);
                func_0082C980(0x97);
            } else if (func_00867600(&connection[channel], *(s32 *)((u8 *)connection + 0x49e8)) ==
                       0) {
                func_0082C840(0x0f);
                func_0082C690(0x0f, 0);
                func_0082C980(0x97);
            } else {
                func_0082CA50(0x97, -1);
            }
            if (pending == 1)
                func_0082CA50(0x97, -1);
        } else
            func_0082CA50(0x97, -1);
        break;
    case 1:
        if (func_0082C8A0(0x0f) == 1) {
            if (func_0082C7C0(0x0f) == 0) {
                func_0082C980(0x97);
            } else {
                func_0082C980(0x97);
                func_0082C980(0x97);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x97, -1);
            if (func_0082C5B0(0x0f) > 7200)
                func_0082CA50(0x97, 3);
            if (pending == 1)
                func_0082CA50(0x97, -1);
        }
        break;
    case 2:
        func_0082CA50(0x97, 0);
        func_0082C690(0x0f, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x97, 0);
        func_0082C690(0x0f, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x97, 0);
        func_0082C690(0x0f, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

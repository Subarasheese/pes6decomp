/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_request.h"
#include "pes6/lobby_directories.h"
extern s32 func_00870690(void *, s8, const void *);
s32 func_00936260(s32 channel, s8 value, const void *data) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x9f, -1);
    if (!data)
        func_0082CA50(0x9f, 3);
    if (!connection)
        func_0082CA50(0x9f, -1);
    switch (func_0082CA10(0x9f)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_00870690(&connection[channel], value, data) == 0) {
                func_0082C840(0xae);
                func_0082C690(0xae, 0);
                func_0082C980(0x9f);
            } else {
                func_0082CA50(0x9f, -1);
            }
            if (pending == 1)
                func_0082CA50(0x9f, -1);
        } else
            func_0082CA50(0x9f, -1);
        break;
    case 1:
        if (func_0082C8A0(0xae) == 1) {
            if (func_0082C7C0(0xae) == 0) {
                func_0082C980(0x9f);
            } else {
                if (func_0082C7C0(0xae) == -610) {
                    LobbyRoomList *list = lobby_room_list();
                    if (list) {
                        list->count = 0;
                        func_0082C980(0x9f);
                    } else {
                        func_0082C980(0x9f);
                        func_0082C980(0x9f);
                    }
                } else {
                    func_0082C980(0x9f);
                    func_0082C980(0x9f);
                }
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x9f, -1);
            if (func_0082C5B0(0xae) > 7200)
                func_0082CA50(0x9f, 3);
            if (pending == 1)
                func_0082CA50(0x9f, -1);
        }
        break;
    case 2:
        func_0082CA50(0x9f, 0);
        func_0082C690(0xae, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x9f, 0);
        func_0082C690(0xae, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x9f, 0);
        func_0082C690(0xae, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

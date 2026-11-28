/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_request.h"
extern void *func_001C48E8(void *, s32, u32);
extern char *func_001C8590(char *, const char *, u32);
extern s32 func_0081D6D0(const char *text);
extern s32 func_0086F980(void *, s32, const char *);
extern char D_00A68410[0x400];
s32 func_00951790(s32 channel, s32 roomId, const char *password) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    const char *roomPassword = password;
    func_001C48E8(D_00A68410, 0, sizeof(D_00A68410));
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        return 2;
    if (!roomId)
        return 1;
    if (func_0081D6D0(roomPassword) == 1) {
        func_001C8590(D_00A68410, roomPassword, 16);
        roomPassword = D_00A68410;
    } else
        roomPassword = D_00A68410;
    if (!(channel >= 0 && channel < 9))
        return 1;
    switch (func_0082CA10(0x2d)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_0086F980(&connection[channel], roomId, roomPassword) == 0) {
                func_0082C840(0x25);
                func_0082C690(0x25, 0);
                func_0082C840(0x31);
                func_0082C690(0x31, 0);
                func_0082C980(0x2d);
            } else {
                func_0082CA50(0x2d, -1);
            }

        } else
            func_0082CA50(0x2d, -1);
        break;
    case 1:
        if (func_0082C8A0(0x25) == 1) {
            if (func_0082C7C0(0x25) == 0) {
                if (func_0082C8A0(0x31) == 1)
                    func_0082C980(0x2d);
                else {
                    if (func_00862110(connection, channel) == 0)
                        func_0082CA50(0x2d, -1);
                    if (func_0082C5B0(0x25) > 7200)
                        func_0082CA50(0x2d, 3);
                    if (pending == 1)
                        func_0082CA50(0x2d, -1);
                }
            } else {
                func_0082C980(0x2d);
                func_0082C980(0x2d);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x2d, -1);
            if (func_0082C5B0(0x25) > 7200)
                func_0082CA50(0x2d, 3);
            if (pending == 1)
                func_0082CA50(0x2d, -1);
        }
        break;
    case 2:
        func_0082CA50(0x2d, 0);
        func_0082C690(0x25, 0);
        func_0082C690(0x31, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082CA50(0x2d, 0);
        func_0082C690(0x25, 0);
        func_0082C690(0x31, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x2d, 0);
        func_0082C690(0x25, 0);
        func_0082C690(0x31, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

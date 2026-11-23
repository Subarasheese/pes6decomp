/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00877B50(LobbyChannel *, char *);
extern char D_00A68810[0x400];
extern void *func_001C48E8(void *, s32, u32);

s32 func_00942830(s32 channel, char *buffer) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x6a, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x6a, -1);
    if (!buffer) {
        func_001C48E8(D_00A68810, 0, sizeof(D_00A68810));
        buffer = D_00A68810;
    }
    switch (func_0082CA10(0x6a)) {
    case 0:

        if (func_00862110(connection, channel) == 1) {

            if (func_00877B50(&connection[channel], buffer) == 0) {
                func_0082C840(0x74);
                func_0082C6D0(0x74);
                func_0082C690(0x74, 0);
                func_0082C980(0x6a);
            } else {
                func_0082CA50(0x6a, -1);
            }
            if (pending == 1)
                func_0082CA50(0x6a, -1);
        } else
            func_0082CA50(0x6a, -1);
        break;
    case 1:
        if (func_0082C8A0(0x74) == 1) {
            if (func_0082C7C0(0x74) == 0) {
                func_0082C980(0x6a);
            } else {
                func_0082C980(0x6a);
                func_0082C980(0x6a);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x6a, -1);
            if (func_0082C5B0(0x74) > 7200)
                func_0082CA50(0x6a, 3);
            if (pending == 1)
                func_0082CA50(0x6a, -1);
        }
        break;
    case 2:
        func_0082C920(0x6a);
        func_0082C840(0x74);
        func_0082C690(0x74, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x6a);
        func_0082C840(0x74);
        func_0082C690(0x74, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x6a);
        func_0082C840(0x74);
        func_0082C690(0x74, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

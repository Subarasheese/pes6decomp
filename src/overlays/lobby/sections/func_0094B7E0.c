/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_request.h"
extern s32 func_0087AD10(LobbyChannel *, s32, s32, char *);
extern char D_00A68810[0x400];
extern void *func_001C48E8(void *, s32, u32);

s32 func_0094B7E0(s32 value, s32 channel) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x70, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x70, -1);
    if (!value)
        func_0082CA50(0x70, -1);
    switch (func_0082CA10(0x70)) {
    case 0:
        func_001C48E8(D_00A68810, 0, sizeof(D_00A68810));
        if (func_00862110(connection, channel) == 1) {

            if (func_0087AD10(&connection[channel], 0, value, D_00A68810) == 0) {
                func_0082C840(0x7f);
                func_0082C6D0(0x7f);
                func_0082C690(0x7f, 0);
                func_0082C980(0x70);
            } else {
                func_0082CA50(0x70, -1);
            }
            if (pending == 1)
                func_0082CA50(0x70, -1);
        } else
            func_0082CA50(0x70, -1);
        break;
    case 1:
        if (func_0082C8A0(0x7f) == 1) {
            if (func_0082C7C0(0x7f) == 0) {
                func_0082C980(0x70);
            } else {
                func_0082C980(0x70);
                func_0082C980(0x70);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x70, -1);
            if (func_0082C5B0(0x7f) > 7200)
                func_0082CA50(0x70, 3);
            if (pending == 1)
                func_0082CA50(0x70, -1);
        }
        break;
    case 2:
        func_0082C920(0x70);
        func_0082C840(0x7f);
        func_0082C690(0x7f, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x70);
        func_0082C840(0x7f);
        func_0082C690(0x7f, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x70);
        func_0082C840(0x7f);
        func_0082C690(0x7f, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

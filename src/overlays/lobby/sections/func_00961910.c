/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00876F40(void *, s32);
extern s32 func_00876D10(void *, s32);
s32 func_00961910(s32 value) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(5) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x8a, -1);
    if (!value)
        func_0082CA50(0x8a, -1);
    switch (func_0082CA10(0x8a)) {
    case 0:
        if (func_00862110(connection, 5) == 1) {
            if (func_00876F40(&connection[5], value) == 0) {
                func_0082C840(0x98);
                func_0082C690(0x98, 0);
                func_0082C980(0x8a);
            } else {
                func_0082CA50(0x8a, -1);
            }
            if (pending == 1)
                func_0082CA50(0x8a, -1);
        } else
            func_0082CA50(0x8a, -1);
        break;
    case 1:
        if (func_0082C8A0(0x98) == 1) {
            if (func_0082C7C0(0x98) == 0) {
                func_0082CA50(0x8a, 4);
            } else {
                func_0082CA50(0x8a, 5);
            }
        } else {
            if (func_00862110(connection, 5) == 0)
                func_0082CA50(0x8a, -1);
            if (func_0082C5B0(0x98) > 7200)
                func_0082CA50(0x8a, 5);
            if (pending == 1)
                func_0082CA50(0x8a, -1);
        }
        break;
    case 2:
        if (func_00862110(connection, 5) == 1) {
            if (func_00876D10(&connection[5], value) == 0) {
                func_0082C840(0x99);
                func_0082C690(0x99, 0);
                func_0082C980(0x8a);
            } else {
                func_0082CA50(0x8a, -1);
            }
            if (pending == 1)
                func_0082CA50(0x8a, -1);
        } else
            func_0082CA50(0x8a, -1);
        break;
    case 3:
        if (func_0082C8A0(0x99) == 1) {
            if (func_0082C7C0(0x99) == 0) {
                func_0082C980(0x8a);
            } else {
                func_0082CA50(0x8a, 5);
            }
        } else {
            if (func_00862110(connection, 5) == 0)
                func_0082CA50(0x8a, -1);
            if (func_0082C5B0(0x99) > 7200)
                func_0082CA50(0x8a, 5);
            if (pending == 1)
                func_0082CA50(0x8a, -1);
        }
        break;
    case 4:
        func_0082CA50(0x8a, 0);
        func_0082C690(0x98, 0);
        func_0082C690(0x99, 0);
        return func_00827450(5) == 1 ? 3 : 4;
    case 5:
        func_0082CA50(0x8a, 0);
        func_0082C690(0x98, 0);
        func_0082C690(0x99, 0);
        return func_00827450(5) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x8a, 0);
        func_0082C690(0x98, 0);
        func_0082C690(0x99, 0);
        return func_00827450(5) == 1 ? 3 : 2;
    }
    return 0;
}

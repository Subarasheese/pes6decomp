/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_request.h"
extern s32 func_008250A0(void);
extern s32 func_008250F0(void);
extern s32 func_00862740(void *connection, s32 channel, s32 *request);
extern s32 func_008626C0(void *connection, s32 request, s32 timeout);
extern u32 func_00831260(void);
extern s32 func_00868230(void *channel);
extern s32 func_0082C650(s32 event);
extern u32 func_00930540(void);
extern s32 D_008A64B4[];
s32 func_0095A7F0(void) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(2) == 1)
        pending = 1;
    if (!connection)
        pending = 1;
    switch (func_0082CA10(12)) {
    case 0:
        func_008250F0();
        *D_008A64B4 = 0;
        func_0082C980(12);
        func_0082C800(0, 0);
        break;
    case 1:
        if (func_008250A0() == 1) {
            s32 request = func_00862740(connection, 2, D_008A64B4);
            if (request < 0)
                func_0082CA50(12, -1);
            else {
                *D_008A64B4 = request;
                func_0082C980(12);
            }
        }
        break;
    case 2: {
        s32 result = func_008626C0(connection, *D_008A64B4, 20);
        if (result == -102)
            return 0;
        if (result == -64)
            return 0;
        if (result != 0)
            func_0082CA50(12, -1);
        else {
            *D_008A64B4 = 0;
            func_0082C980(12);
        }
        break;
    }
    case 3:
        switch (func_00831260()) {
        case 0:
            if (func_00862110(connection, 2) == 1) {
                if (func_00868230(&connection[2]) == 0) {
                    func_0082C8E0(1, 0);
                    func_0082C690(1, 0);
                    func_0082C980(12);
                } else
                    func_0082CA50(12, -1);
                if (pending == 1)
                    func_0082CA50(12, -1);
            } else
                func_0082CA50(12, -1);
            break;
        case 2:
            func_0082CA50(12, 5);
            break;
        case 1:
        default:
            func_0082CA50(12, 5);
            break;
        }
        break;
    case 4:
        if (func_0082C8A0(1) == 1) {
            if (func_0082C7C0(1) == 0)
                func_0082C980(12);
            else
                func_0082CA50(12, 6);
        } else {
            if (func_00862110(connection, 2) == 0)
                func_0082CA50(12, -1);
            if (func_0082C5B0(1) > 7200)
                func_0082CA50(12, 6);
            if (pending == 1)
                func_0082CA50(12, -1);
        }
        break;
    case 5:
        func_0082C920(12);
        func_0082C650(1);
        return 4;
    case 6: {
        s32 result;
        switch (func_00831260()) {
        case 0:
        case 2:
            break;
        case 1:
        default:
            func_00930540();
            break;
        }
        func_0082C920(12);
        func_0082C650(1);
        result = func_0082C7C0(0);
        switch (result) {
        case -401:
            return 1;
        case 0:
            return 1;
        default:
            return 2;
        }
    }
    default: {
        s32 result;
        switch (func_00831260()) {
        case 0:
        case 2:
            break;
        case 1:
        default:
            func_00930540();
            break;
        }
        func_0082C920(12);
        func_0082C650(1);
        result = func_0082C7C0(0);
        switch (result) {
        case -401:
            return 1;
        case 0:
            return 2;
        default:
            return 2;
        }
    }
    }
    return 0;
}

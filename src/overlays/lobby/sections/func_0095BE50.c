/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_channel_task.h"
extern s32 func_0095C340(void);
extern s32 func_0095BAF0(s32 id);
extern s32 func_00960370(void);
extern s32 func_009602B0(void);
extern s32 func_008755A0(void *connection, s32 id);
extern s32 func_00832E10(s32 value);
extern s32 func_00832D40(s8 value);
extern s32 func_0095DB00(void);

s32 func_0095BE50(s32 value) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(3) == 1)
        pending = 1;
    if (!connection)
        pending = 1;
    switch (func_0082CA10(0x78)) {
    case 0:
        lobby_apply_request_result(0x78, func_0095C340(), 7, 8);
        break;
    case 1: {
        s32 first = func_00960370();
        s32 second = func_009602B0();
        if (first == 0 && second == 0)
            func_0082CA50(0x78, 3);
        else if (second != 0)
            func_0082CA50(0x78, 7);
        else if (first != value) {
            func_0082C800(0x86, first);
            func_0082C980(0x78);
        } else
            func_0082CA50(0x78, 6);
        break;
    }
    case 2:
        lobby_apply_request_result(0x78, func_0095BAF0(func_0082C7C0(0x86)), 7, 8);
        break;
    case 3:
        if (connection) {
            if (func_00862110(connection, 3) == 1) {
                if (func_008755A0(&connection[3], value) == 0) {
                    func_0082C840(0x86);
                    func_0082C690(0x86, 0);
                    func_0082C980(0x78);
                } else
                    func_0082CA50(0x78, -1);
                if (pending == 1)
                    func_0082CA50(0x78, -1);
            } else
                func_0082CA50(0x78, -1);
        } else
            func_0082CA50(0x78, -1);
        break;
    case 4:
        if (func_0082C8A0(0x86) == 1) {
            if (func_0082C7C0(0x86) == 0)
                func_0082C980(0x78);
            else
                func_0082CA50(0x78, 7);
        } else if (connection) {
            if (func_00862110(connection, 3) == 0)
                func_0082CA50(0x78, -1);
            if (func_0082C5B0(0x86) > 7200) {
                func_0082CA50(0x78, 7);
            }
            if (pending == 1)
                func_0082CA50(0x78, -1);
        } else
            func_0082CA50(0x78, -1);
        break;
    case 5:
        lobby_apply_request_result(0x78, func_0095C340(), 7, 8);
        break;
    case 6:
        lobby_clear_request(0x78, 0x86);
        func_00832E10(func_0095DB00());
        func_00832D40(0);
        return 4;
    case 7:
        lobby_clear_request(0x78, 0x86);
        func_00832E10(0);
        func_00832D40(0);
        return 1;
    case 8:
        lobby_clear_request(0x78, 0x86);
        func_00832E10(0);
        func_00832D40(0);
        return 3;
    default:
        lobby_clear_request(0x78, 0x86);
        func_00832E10(0);
        func_00832D40(0);
        return 2;
    }
    return 0;
}

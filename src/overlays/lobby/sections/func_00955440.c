/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
extern s32 func_00872800(void *, u8);
extern s32 D_008A6494[];
extern s32 D_008A64A0[];
#include "pes6/lobby_endpoints.h"
extern char *strcpy(char *dest, const char *source);

s32 func_00955440(s32 channel, s8 direction) {
    s32 result = 0;
    s32 pending = 0;
    /* The two address buffers begin 0x80 bytes apart in the PAL stack frame. */
    char first[129], second[128];
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0xab, -1);
    switch (func_0082CA10(0xab)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {

            if (func_00872800(&connection[channel], func_008248F0()) == 0) {
                func_0082C8E0(0x1a, 0);
                func_0082C690(0xba, 0);
                func_0082C980(0xab);
            } else
                func_0082CA50(0xab, -1);
            if (pending == 1)
                func_0082CA50(0xab, -1);
        } else
            func_0082CA50(0xab, -1);
        break;
    case 1:
        if (func_0082C8A0(0x1a) == 1) {
            func_0082C980(0xab);
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0xab, -1);
            if (func_0082C5B0(0xba) > 7200)
                func_0082CA50(0xab, -1);
            if (pending == 1)
                func_0082CA50(0xab, -1);
        }
        break;
    case 2:
        func_0082C800(0xba, lobby_entry_count());
        if (direction == 1)
            *D_008A6494 = 0;
        else
            *D_008A6494 = func_0082C7C0(0xba) - 1;
        func_0082C980(0xab);
        if (func_0082C7C0(0xba) <= 0)
            func_0082CA50(0xab, 9);
        func_0082C7C0(0xba);
        break;
    case 3:
        if (func_00862110(connection, channel) == 1) {
            const LobbyEndpoints *server = (const LobbyEndpoints *)func_008580D0();
            strcpy(first, func_002DCDE0(server->firstAddress));
            strcpy(second, func_002DCDE0(server->secondAddress));
            if (func_00872610(&connection[channel], (u8)*D_008A6494, first, server->firstPort,
                              second, server->secondPort, server->value16) == 0) {
                func_0082C8E0(0x1b, 0);
                func_0082C690(0xba, 0);
                func_0082C980(0xab);
            } else
                func_0082CA50(0xab, -1);
            if (pending == 1)
                func_0082CA50(0xab, -1);
        } else
            func_0082CA50(0xab, -1);
        break;
    case 4:
        if (func_0082C8A0(0x1b) == 1) {
            if (func_0082C7C0(0x1b) == 0)
                func_0082C980(0xab);
            else if (*D_008A64A0 == *D_008A6494 && func_0082C7C0(0x1b) == -452)
                func_0082C980(0xab);
            else
                func_0082CA50(0xab, 6);
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0xab, -1);
            if (func_0082C5B0(0xba) > 7200)
                func_0082CA50(0xab, -1);
            if (pending == 1)
                func_0082CA50(0xab, -1);
        }
        break;
    case 5:
        func_0082CA50(0xab, 7);
        break;
    case 6:
        if (direction == 1) {
            ++*D_008A6494;
            if (func_0082C7C0(0xba) <= *D_008A6494) {
                *D_008A6494 = 0;
                func_0082CA50(0xab, -1);
            } else
                func_0082CA50(0xab, 3);
        } else {
            --*D_008A6494;
            if (*D_008A6494 < 0) {
                *D_008A6494 = 0;
                func_0082CA50(0xab, -1);
            } else
                func_0082CA50(0xab, 3);
        }
        break;
    case 7:
        *D_008A64A0 = *D_008A6494;
        func_0082CA50(0xab, 0);
        func_0082CA50(0xab, 0);
        func_0082C690(0xba, 0);
        func_0082C690(0xba, 0);
        if (func_00827450(channel) == 1)
            result = 3;
        else
            result = 4;
        break;
    default:
        *D_008A6494 = 0;
        func_0082CA50(0xab, 0);
        func_0082C690(0xba, 0);
        func_0082C690(0xba, 0);
        if (func_00827450(channel) == 1)
            result = 3;
        else
            result = 1;
        break;
    }
    return result;
}

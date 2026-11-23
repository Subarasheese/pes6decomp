/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
typedef struct {
    u8 reserved[0xaf0];
    s32 status;
} LobbyPasswordState;
typedef struct {
    u8 reserved[0x101a8];
    LobbyPasswordState state;
} LobbyServiceState;
extern s32 func_0087B3A0(LobbyChannel *, s8, s32);

s32 func_00949200(s32 channel, s32 value, s32 mode) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x59, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x59, -1);
    if (!value)
        func_0082CA50(0x59, -1);
    switch (func_0082CA10(0x59)) {
    case 0:

        if (func_00862110(connection, channel) == 1) {
            s8 requestMode;
            if (mode == 0)
                requestMode = 0;
            else if (mode == 1)
                requestMode = 1;
            else
                requestMode = 2;
            if (func_0087B3A0(&connection[channel], requestMode, value) == 0) {
                func_0082C840(0x5d);
                func_0082C6D0(0x5d);
                func_0082C690(0x5d, 0);
                func_0082C980(0x59);
            } else {
                func_0082CA50(0x59, -1);
            }
            if (pending == 1)
                func_0082CA50(0x59, -1);
        } else
            func_0082CA50(0x59, -1);
        break;
    case 1:
        if (func_0082C8A0(0x5d) == 1) {
            if (func_0082C7C0(0x5d) == 0) {
                func_0082C980(0x59);
            } else {
                if (func_0082C7C0(0x5d) == -0x262) {
                    LobbyChannel *owner = func_0082C2A0();
                    LobbyPasswordState *state =
                        owner == 0 ? 0 : (LobbyPasswordState *)((u8 *)owner + 0x101a8);
                    if (state) {
                        state->status = 0;
                        func_0082C980(0x59);
                        func_0082C980(0x59);
                        break;
                    } else {
                        func_0082C980(0x59);
                        func_0082C980(0x59);
                        break;
                    }
                } else {
                    func_0082C980(0x59);
                    func_0082C980(0x59);
                    break;
                }
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x59, -1);
            if (func_0082C5B0(0x5d) > 7200)
                func_0082CA50(0x59, 3);
            if (pending == 1)
                func_0082CA50(0x59, -1);
        }
        break;
    case 2:
        func_0082C920(0x59);
        func_0082C840(0x5d);
        func_0082C690(0x5d, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 3:
        func_0082C920(0x59);
        func_0082C840(0x5d);
        func_0082C690(0x5d, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x59);
        func_0082C840(0x5d);
        func_0082C690(0x5d, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
complete:
    return 0;
}

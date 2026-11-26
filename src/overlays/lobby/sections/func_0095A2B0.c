/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_login.h"
typedef struct {
    u8 reserved00[0x1c0];
    u8 challenge[16];
} LobbyLoginChallenge;
extern u32 func_00831260(void);
extern u32 func_00930540(void);
extern void *func_00930840(void);
extern s32 func_00930830(void);
extern s32 func_00930C70(void);
extern u8 D_008A600C[];
extern u32 func_00827B00(const void *state);
extern s32 func_00835520(void);
extern u32 func_00827AC0(s32 value);
extern s32 func_00835570(void);
extern u32 func_00827AB0(s32 value);
extern s32 func_008355C0(void);
extern u32 func_00827AA0(s32 value);
extern s32 func_00835610(void);
extern u32 func_00827A90(s32 value);
extern s32 func_00835660(void);
extern u32 func_00827A80(s32 value);
extern s32 func_008356B0(void);
extern u32 func_00827A70(s32 value);
static inline void reset_login_mode(void) {
    switch (func_00831260()) {
    case 0:
    case 2:
        break;
    case 1:
    default:
        func_00930540();
        break;
    }
}
s32 func_0095A2B0(const char *name, const char *password) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(2) == 1)
        pending = 1;
    if (!connection)
        pending = 1;
    if (!name || !password)
        pending = 1;
    switch (func_0082CA10(13)) {
    case 0:
        func_0082C690(2, 0);
        switch (func_00831260()) {
        case 0:
            func_0082CA50(13, 10);
            break;
        case 2:
            func_00827B00(D_008A600C);
            func_00827AC0(func_00835520());
            func_00827AB0(func_00835570());
            func_00827AA0(func_008355C0());
            func_00827A90(func_00835610());
            func_00827A80(func_00835660());
            func_00827A70(func_008356B0());
            func_0082C980(13);
            break;
        case 1:
        default:
            func_0082C980(13);
            break;
        }
        break;
    case 1:
        if (func_00862110(connection, 2) == 1) {
            func_0082C690(2, 0);
            func_0082C8E0(3, 0);
            func_0082C980(13);
        } else
            func_0082CA50(13, 3);
        break;
    case 2:
        if (func_0082C8A0(3) == 1) {
            func_0082C800(2, func_0082C7C0(3));
            if (func_0082C7C0(2) == 0) {
                reset_login_mode();
                func_0082CA50(13, 12);
            } else {
                reset_login_mode();
                func_0082CA50(13, 13);
            }
        } else {
            if (func_00862110(connection, 2) == 0)
                func_0082CA50(13, 3);
            if (func_0082C5B0(2) > 7200)
                func_0082CA50(13, 3);
            if (pending == 1)
                func_0082CA50(13, 3);
        }
        break;
    case 3:
        reset_login_mode();
        func_0082CA50(13, -1);
        break;
    case 10:
        if (func_00862110(connection, 2) == 1) {
            void *players = func_00930840();
            s32 options = func_00930830();
            s32 mode = func_00930C70();
            if (func_00868000(connection, name, password,
                              ((LobbyLoginChallenge *)connection)->challenge, &connection[2],
                              players, options, mode) == 0) {
                func_0082C690(2, 0);
                func_0082C840(2);
                func_0082C980(13);
            } else
                func_0082CA50(13, -1);
            if (pending == 1)
                func_0082CA50(13, -1);
        } else
            func_0082CA50(13, -1);
        break;
    case 11:
        if (func_0082C8A0(2) == 1) {
            if (func_0082C7C0(2) == 0)
                func_0082C980(13);
            else
                func_0082CA50(13, 13);
        } else {
            if (func_00862110(connection, 2) == 0)
                func_0082CA50(13, -1);
            if (func_0082C5B0(2) > 7200)
                func_0082CA50(13, 13);
            if (pending == 1)
                func_0082CA50(13, -1);
        }
        break;
    case 12:
        func_0082C920(13);
        func_0082C690(2, 0);
        return 4;
    case 13:
        func_0082C920(13);
        func_0082C690(2, 0);
        return 1;
    default:
        func_0082C920(13);
        func_0082C690(2, 0);
        return 2;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00870060(void *channel, const char *text);
extern u32 func_00828160(void);
extern s32 func_0082A0C0(s32 channel, s32 value);
extern s32 func_0082A0A0(void);
s32 func_0094F3E0(s32 channel, const char *text) {
    s32 pending;
    LobbyChannel *connection;
    pending = 0;
    connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x21, -1);
    if (!(channel >= 0 && channel < 9))
        func_0082CA50(0x21, -1);
    if (text == 0)
        func_0082CA50(0x21, -1);
    switch (func_0082CA10(0x21)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (func_00870060(&connection[channel], text) == 0) {
                func_0082C840(0x19);
                func_0082C6D0(0x19);
                func_0082C690(0x19, 0);
                func_0082C980(0x21);
            } else {
                func_0082CA50(0x21, -1);
            }
            if (pending == 1)
                func_0082CA50(0x21, -1);
        } else
            func_0082CA50(0x21, -1);
        break;
    case 1:
        if (func_0082C8A0(0x19) == 1) {
            if (func_0082C7C0(0x19) == 0) {
                func_0082C980(0x21);
            } else {
                func_0082C980(0x21);
                func_0082C980(0x21);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x21, -1);
            if (func_0082C5B0(0x19) > 7200)
                func_0082CA50(0x21, 3);
            if (pending == 1)
                func_0082CA50(0x21, -1);
        }
        break;
    case 2:
        switch (func_0082A0C0(channel, (s32)func_00828160())) {
        case 0:
            break;
        case 1:
            func_0082CA50(0x21, 3);
            break;
        case 2:
            func_0082CA50(0x21, -1);
            break;
        case 3:
            func_0082CA50(0x21, 3);
            break;
        case 4:
            func_0082C920(0x21);
            func_0082C840(0x19);
            func_0082C690(0x19, 0);
            func_0082A0A0();
            return func_00827450(channel) == 1 ? 3 : 4;
        default:
            break;
        }
        break;
    case 3:
        func_0082C920(0x21);
        func_0082C840(0x19);
        func_0082C690(0x19, 0);
        func_0082A0A0();
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082C920(0x21);
        func_0082C840(0x19);
        func_0082C690(0x19, 0);
        func_0082A0A0();
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

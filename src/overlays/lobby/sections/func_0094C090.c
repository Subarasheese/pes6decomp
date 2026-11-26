/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_0082A6F0(s32 channel, s32 value);
extern u32 func_00828160(void);
extern s32 func_0086C1F0(void *, s8);
s32 func_0094C090(s32 channel, s8 value) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(channel) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x40, -1);
    if (!(channel >= 0 && channel < 9))
        pending = 1;
    switch (func_0082CA10(0x40)) {
    case 0:
        if (func_00862110(connection, channel) == 1) {
            if (value == 1) {
                if (func_0082A6F0(channel, (s32)func_00828160()) == 4) {
                    func_0082C840(0x4e);
                    func_0082C690(0x3d, 0);
                    func_0082C980(0x40);
                } else {
                    func_0082CA50(0x40, -1);
                }
            } else
                func_0082CA50(0x40, 2);
        } else
            func_0082CA50(0x40, -1);
        break;
    case 1:
        if (func_0082C8A0(0x4e) == 1) {
            if (func_0082C7C0(0x4e) == 0) {
                func_0082C980(0x40);
            } else {
                func_0082CA50(0x40, 6);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x40, -1);
            if (func_0082C5B0(0x3d) > 7200)
                func_0082CA50(0x40, 5);
            if (pending == 1)
                func_0082CA50(0x40, -1);
        }
        break;
    case 2:
        if (func_00862110(connection, channel) == 1) {
            if (func_0086C1F0(&connection[channel], value) == 0) {
                func_0082C840(0x3d);
                func_0082C690(0x3d, 0);
                func_0082C980(0x40);
            } else {
                func_0082CA50(0x40, -1);
            }
            if (pending == 1)
                func_0082CA50(0x40, -1);
        } else
            func_0082CA50(0x40, -1);
        break;
    case 3:
        if (func_0082C8A0(0x3d) == 1) {
            if (func_0082C7C0(0x3d) == 0) {
                func_0082C980(0x40);
            } else {
                func_0082C980(0x40);
                func_0082C980(0x40);
            }
        } else {
            if (func_00862110(connection, channel) == 0)
                func_0082CA50(0x40, -1);
            if (func_0082C5B0(0x3d) > 7200)
                func_0082CA50(0x40, 5);
            if (pending == 1)
                func_0082CA50(0x40, -1);
        }
        break;
    case 4:
        func_0082CA50(0x40, 0);
        func_0082C690(0x3d, 0);
        func_0082C690(0x4e, 0);
        return func_00827450(channel) == 1 ? 3 : 4;
    case 5:
        func_0082CA50(0x40, 0);
        func_0082C690(0x3d, 0);
        func_0082C690(0x4e, 0);
        return func_00827450(channel) == 1 ? 3 : 1;
    default:
        func_0082CA50(0x40, 0);
        func_0082C690(0x3d, 0);
        func_0082C690(0x4e, 0);
        return func_00827450(channel) == 1 ? 3 : 2;
    }
    return 0;
}

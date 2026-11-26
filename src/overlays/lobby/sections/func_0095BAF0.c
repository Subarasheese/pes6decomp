/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00832E10(s32 value);
extern s32 func_00832D40(s8 value);
extern s32 func_0095C340(void);
extern s32 func_00874DC0(void *connection, s32 value);
s32 func_0095BAF0(s32 value) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(3) == 1)
        pending = 1;
    if (!connection)
        pending = 1;
    if (!value)
        func_0082CA50(0x79, 3);
    switch (func_0082CA10(0x79)) {
    case 0:
        if (connection) {
            if (func_00862110(connection, 3) == 1) {
                if (func_00874DC0(&connection[3], value) == 0) {

                    func_0082C840(0x87);
                    func_0082C690(0x87, 0);
                    func_0082C980(0x79);
                } else
                    func_0082CA50(0x79, -1);
                if (pending == 1)
                    func_0082CA50(0x79, -1);
            } else
                func_0082CA50(0x79, -1);
        } else
            func_0082CA50(0x79, -1);
        break;
    case 1:
        if (func_0082C8A0(0x87) == 1) {
            if (func_0082C7C0(0x87) == 0)
                func_0082C980(0x79);
            else
                func_0082CA50(0x79, 4);
        } else if (connection) {
            if (func_00862110(connection, 3) == 0)
                func_0082CA50(0x79, -1);
            if (func_0082C5B0(0x87) > 7200) {
                func_0082CA50(0x79, 4);
            }
            if (pending == 1)
                func_0082CA50(0x79, -1);
        } else
            func_0082CA50(0x79, -1);
        break;
    case 2:
        switch (func_0095C340()) {
        case 0:
            break;
        case 1:
            func_0082CA50(0x79, 4);
            break;
        case 4:
            func_0082C980(0x79);
            break;
        case 3:
            func_0082CA50(0x79, 5);
            break;
        case 2:
        default:
            func_0082CA50(0x79, -1);
            break;
        }
        break;
    case 3:
        func_0082CA50(0x79, 0);
        func_0082C690(0x87, 0);
        func_00832E10(0);
        func_00832D40(0);
        return 4;
    case 4:
        func_0082CA50(0x79, 0);
        func_0082C690(0x87, 0);
        func_00832E10(0);
        func_00832D40(0);
        return 1;
    case 5:
        func_0082CA50(0x79, 0);
        func_0082C690(0x87, 0);
        func_00832E10(0);
        func_00832D40(0);
        return 3;
    default:
        func_0082CA50(0x79, 0);
        func_0082C690(0x87, 0);
        func_00832E10(0);
        func_00832D40(0);
        return 2;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"
extern s32 func_00832E10(s32 value);
extern s32 func_00832D40(s8 value);
extern s32 func_0095C340(void);
extern s32 func_008752F0(void *connection, s32 id, s8 first, u8 second);
extern s32 D_008AA114[];
s32 func_0095B4E0(s32 id, s8 first, u8 second) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(3) == 1)
        pending = 1;
    if (!connection)
        pending = 1;

    switch (func_0082CA10(0x7b)) {
    case 0:
        if (connection) {
            if (func_00862110(connection, 3) == 1) {
                if (func_008752F0(&connection[3], id, first, second) == 0) {
                    func_00832E10(0);
                    func_00832D40(0);
                    func_0082C840(0x89);
                    func_0082C690(0x89, 0);
                    func_0082C980(0x7b);
                } else
                    func_0082CA50(0x7b, -1);
                if (pending == 1)
                    func_0082CA50(0x7b, -1);
            } else
                func_0082CA50(0x7b, -1);
        } else
            func_0082CA50(0x7b, -1);
        break;
    case 1:
        if (func_0082C8A0(0x89) == 1) {
            switch (D_008AA114[0]) {
            case 0:
            case -814:
                func_0082C980(0x7b);
                break;
            case -800:
            case -810:
            case -811:
            case -812:
            case -820:
            case -840:
            default:
                func_0082CA50(0x7b, 4);
                break;
            }
        } else if (connection) {
            if (func_00862110(connection, 3) == 0)
                func_0082CA50(0x7b, -1);
            if (func_0082C5B0(0x89) > 7200) {
                func_0082CA50(0x7b, 4);
                D_008AA114[0] = -830;
            }
            if (pending == 1)
                func_0082CA50(0x7b, -1);
        } else
            func_0082CA50(0x7b, -1);
        break;
    case 2:
        switch (func_0095C340()) {
        case 0:
            break;
        case 1:
            func_0082CA50(0x7b, 4);
            break;
        case 4:
            func_0082C980(0x7b);
            break;
        case 3:
            func_0082CA50(0x7b, 5);
            break;
        case 2:
        default:
            func_0082CA50(0x7b, -1);
            break;
        }
        break;
    case 3:
        func_0082CA50(0x7b, 0);
        func_0082C690(0x89, 0);
        return 4;
    case 4:
        func_0082CA50(0x7b, 0);
        func_0082C690(0x89, 0);
        return 1;
    case 5:
        func_0082CA50(0x7b, 0);
        func_0082C690(0x89, 0);
        return 3;
    default:
        func_0082CA50(0x7b, 0);
        func_0082C690(0x89, 0);
        return 2;
    }
    return 0;
}

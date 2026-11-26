/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_channel_task.h"
extern s32 func_0095C340(void);
extern s32 func_0095BAF0(s32 id);
extern s32 func_00960370(void);
extern s32 func_009602B0(void);
extern s32 func_0095B890(s32 id);
extern s32 func_0095B4E0(s32 id, s8 first, u8 second);
extern s32 func_0095B070(s32 id);
extern u8 D_008AA10E[], D_008AA10F[];
extern s32 D_008AA11C[];

s32 func_0095B090(s32 id) {
    func_0082C2A0();
    func_0082B4C0(3);
    switch (func_0082CA10(0x7c)) {
    case 0:
        lobby_apply_request_result(0x7c, func_0095B890(id), 5, 6);
        break;
    case 1:
        switch (func_0095C340()) {
        case 0:
            break;
        case 1:
            func_0082CA50(0x7c, 5);
            break;
        case 4: {
            s32 first = func_00960370();
            s32 second = func_009602B0();
            if (!first && !second)
                func_0082C980(0x7c);
            else if (second != 0) {
                if (second != id)
                    func_0082CA50(0x7c, 5);
                else
                    func_0082C980(0x7c);
            } else if (first != id) {
                func_0082C800(0x8a, first);
                func_0082CA50(0x7c, 7);
            } else
                func_0082C980(0x7c);
        } break;
        case 3:
            func_0082CA50(0x7c, 6);
            break;
        case 2:
        default:
            func_0082CA50(0x7c, -1);
            break;
        }
        break;
    case 2:
        lobby_apply_request_result(0x7c, func_0095B4E0(id, (s8)*D_008AA10E, *D_008AA10F), 5, 6);
        break;
    case 3:
        lobby_apply_request_result(0x7c, func_0095B070(id), 5, 6);
        break;
    case 4:
        lobby_clear_request(0x7c, 0x8a);
        *D_008AA11C = id;
        return 4;
    case 5:
        lobby_clear_request(0x7c, 0x8a);
        return 1;
    case 6:
        lobby_clear_request(0x7c, 0x8a);
        return 3;
    case 7:
        switch (func_0095BAF0(func_0082C7C0(0x8a))) {
        case 0:
            break;
        case 1:
            func_0082CA50(0x7c, 5);
            break;
        case 4:
            func_0082CA50(0x7c, 0);
            break;
        case 3:
            func_0082CA50(0x7c, 6);
            break;
        case 2:
        default:
            func_0082CA50(0x7c, -1);
            break;
        }
        break;
    default:
        lobby_clear_request(0x7c, 0x8a);
        return 2;
    }
    return 0;
}

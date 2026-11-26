/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_request.h"
#include "pes6/lobby_selected_roster.h"
extern u32 func_00222D70(u32 id);
extern u32 func_00828160(void);
extern s32 func_00877500(void *channel, s32 profile);
extern s32 func_00876F40(void *channel, s32 profile);
extern s32 func_00876D10(void *channel, s32 profile);
extern void *func_008428B0(void);
extern s32 func_00831830(void);
extern void func_00362580(void *slot, s32 player);
static inline void reset_roster_events(void) {
    func_0082C920(0x90);
    func_0082C840(0x9f);
    func_0082C690(0x9f, 0);
    func_0082C920(0x91);
    func_0082C840(0xa0);
    func_0082C690(0xa0, 0);
    func_0082C920(0x92);
    func_0082C840(0x9f);
    func_0082C690(0x9f, 0);
    func_0082C840(0xa0);
    func_0082C690(0xa0, 0);
    func_0082CA50(0x88, 0);
    func_0082C690(0x96, 0);
}
static inline void update_team(void) {
    void *slot = func_008428B0();
    if (slot)
        func_00362580(slot, func_00831830());
}
s32 func_00962480(s32 team) {
    s32 pending = 0;
    LobbyChannel *connection = func_0082C2A0();
    if (func_0082B4C0(5) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(0x88, -1);
    switch (func_0082CA10(0x88)) {
    case 0:
        if (func_00862110(connection, 5) == 1) {
            s32 i;
            func_00962CA0(team);
            for (i = 0; i < 40; i++) {
                u16 *id = &((LobbyPlayerSelection *)D_008A5F70)->playerIds[i];
                *id = (u16)func_00222D70(*id);
            }
            if (func_00877310(&connection[5], *D_008AB328, *D_008AB32A, D_008AB32C, D_008AB37C) ==
                0) {
                func_0082C840(150);
                func_0082C690(150, 0);
                func_0082CA50(0x88, 1);
            } else {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        } else {
            func_0082CA50(0x88, -1);
        }
        break;
    case 1:
        if (func_0082C8A0(150) == 1) {
            if (func_0082C7C0(150) == 0) {
                func_0082CA50(0x88, 2);
            } else {
                func_0082CA50(0x88, 5);
            }
        } else {
            if (func_00862110(connection, 5) == 0) {
                func_0082CA50(0x88, -1);
            }
            if (func_0082C5B0(150) > 7200) {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        }
        break;
    case 2:
        if (func_00862110(connection, 5) == 1) {

            if (func_00877500(&connection[5], (s32)func_00828160()) == 0) {
                func_0082C840(132);
                func_0082C690(150, 0);
                func_0082CA50(0x88, 3);
            } else {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        } else {
            func_0082CA50(0x88, -1);
        }
        break;
    case 3:
        if (func_0082C8A0(132) == 1) {
            if (func_0082C7C0(132) == 0) {
                func_0082CA50(0x88, 4);
            } else {
                func_0082CA50(0x88, 10);
            }
        } else {
            if (func_00862110(connection, 5) == 0) {
                func_0082CA50(0x88, -1);
            }
            if (func_0082C5B0(150) > 7200) {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        }
        break;
    case 9:
        reset_roster_events();
        func_0082C690(0x99, 0);
        return 4;
    case 10:
        reset_roster_events();
        func_0082C690(0x99, 0);
        return 1;
    case 4:
        if (func_00862110(connection, 5) == 1) {

            if (func_00876F40(&connection[5], (s32)func_00828160()) == 0) {
                func_0082C840(152);
                func_0082C690(150, 0);
                func_0082CA50(0x88, 5);
            } else {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        } else {
            func_0082CA50(0x88, -1);
        }
        break;
    case 5:
        if (func_0082C8A0(152) == 1) {
            if (func_0082C7C0(152) == 0) {
                func_0082CA50(0x88, 9);
            } else {
                func_0082CA50(0x88, 10);
            }
        } else {
            if (func_00862110(connection, 5) == 0) {
                func_0082CA50(0x88, -1);
            }
            if (func_0082C5B0(150) > 7200) {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        }
        break;
    case 6:
        if (func_00862110(connection, 5) == 1) {

            if (func_00876D10(&connection[5], (s32)func_00828160()) == 0) {
                func_00828160();
                func_0082C840(153);
                func_0082C690(153, 0);
                func_0082CA50(0x88, 7);
            } else {
                func_0082CA50(0x88, -1);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        } else {
            func_0082CA50(0x88, -1);
        }
        break;
    case 7:
        if (func_0082C8A0(153) == 1) {
            if (func_0082C7C0(153) == 0) {
                update_team();
                func_0082CA50(0x88, 8);
            } else {
                func_0082CA50(0x88, 10);
            }
        } else {
            if (func_00862110(connection, 5) == 0) {
                func_0082CA50(0x88, -1);
            }
            if (func_0082C5B0(153) > 7200) {
                func_0082CA50(0x88, 10);
            }
            if (pending == 1) {
                func_0082CA50(0x88, -1);
            }
        }
        break;
    case 8:
        update_team();
        func_0082CA50(0x88, 9);
        break;
    case 11:
    default:
        reset_roster_events();
        return func_00827450(5) == 1 ? 3 : 2;
    }
    return 0;
}

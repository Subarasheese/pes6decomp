/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern u8 D_00591F24[], D_00591E4D[], D_00592742[], D_0059274E[];
extern s32 func_002727B0(void), func_002DCA30(void), func_00997E60(const u8 *id);
extern void func_0099C790(void), func_002727C0(s32 mode), func_0084EA90(void *player, s32 mode);
extern u8 Pes6MatchFlow_GetState(s32);
void func_00B7A180(void) {
    func_002727B0();
    func_0099C790();
    if (Pes6MatchFlow_GetState(1) == 10) {
        func_002727C0(3);
        return;
    } else {
        switch (D_00591F24[0]) {
        case 4:
        case 5:
            return;
        case 7:
            func_002727C0(2);
            return;
        case 0:
        case 2:
            func_002727C0(3);
            return;
        case 1:
            D_00592742[0] = 3;
            func_002727C0(5);
            D_00592742[0] = 0;
            D_0059274E[0] = 1;
            if (func_002DCA30()) {
                func_0084EA90(Pes6MatchPlayer_Get(D_00591E4D[0]), 5);
            }
            return;
        case 3:
            if (func_002DCA30()) {
                func_0084EA90(Pes6MatchPlayer_Get(D_00591E4D[0]), 6);
            } else
                goto updateView;
            return;
        case 6:
            if (func_002DCA30()) {
                func_0084EA90(Pes6MatchPlayer_Get(D_00591E4D[0]), 7);
            } else {
                if (Pes6MatchFlow_GetState(2) != 0) {
                    D_00592742[0] = 3;
                    if (D_00591E4D[0] < 23 &&
                        func_00997E60(&Pes6MatchPlayer_Get(D_00591E4D[0])->id))
                        goto updateView;
                }
                func_002727C0(3);
                return;
            }
            return;
        }
    }
    goto finish;
updateView:
    switch (D_00591F24[0]) {
    case 1:
        func_002727C0(5);
        D_00592742[0] = 0;
        D_0059274E[0] = 1;
        break;
    case 3:
        switch (Pes6MatchFlow_GetState(2)) {
        case 0x10:
        case 0xe:
            func_002727C0(6);
            break;
        }
        break;
    case 6:
        switch (Pes6MatchFlow_GetState(2)) {
        case 0x10:
        case 0xe:
            func_002727C0(7);
            D_0059274E[0] = 1;
            break;
        }
        break;
    }
finish:
    return;
}

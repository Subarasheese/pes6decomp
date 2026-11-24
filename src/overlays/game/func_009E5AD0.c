/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern Pes6MatchPlayer D_0058E7F0[];
extern u8 D_00591DB4[], D_00CBBDF0[];
extern s32 D_00591E14[], D_008B1454[], D_008B1458[], D_008B145C[], D_008B1460[];
extern s16 D_008B1464[], D_008B1466[];
extern s8 D_008B144D[];
extern s32 func_00152130(s32 input, s8 mask), func_002DCA30(void);
extern void func_001AAF40(Pes6PlayerFieldState *, s8 active), func_00B24790(s32 active),
    func_00B26FA0(void), func_00B70590(void), func_002727C0(s32), func_009E3990(void),
    func_009E33B0(void), func_00852750(s32 state), func_0027AA00(s32 active),
    Pes6MatchFlow_SetState(s32 index, s8 state);
void func_009E5AD0(void) {
    s32 i;
    Pes6MatchPlayer *player;
    if (!func_00152130(1, 16))
        return;
    i = 0;
    player = D_0058E7F0;
    do {
        if (player->info->active)
            func_001AAF40(player->info->fieldState, 0);
        ++i;
        ++player;
    } while (i < 22);
    func_00B24790(0);
    D_00591DB4[0] = 1;
    D_00591E14[0] = 0;
    func_00B26FA0();
    func_00B70590();
    func_002727C0(17);
    func_009E3990();
    func_009E33B0();
    D_00CBBDF0[0] = 0;
    if (func_002DCA30()) {
        s32 mode;
        if (D_008B144D[0] != 5) {
            mode = D_008B144D[0] = 5;
        } else
            mode = 7;
        func_00852750(mode);
        D_008B1454[0] = D_008B1458[0] = D_008B145C[0] = D_008B1460[0];
        D_008B1464[0] = D_008B1466[0] = 0;
    }
    func_0027AA00(1);
    Pes6MatchFlow_SetState(2, 5);
}

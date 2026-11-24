/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern u8 D_00591F11[], D_00591F12[], D_00591DB4[], D_00CBBDF8[], D_00591BE4[];
extern s32 D_00591E14[];
extern Pes6MatchPlayer D_0058E7F0[];
extern Pes6PlayerInfo *volatile D_0058E5B4[];
extern void func_00186220(void), Pes6World_SetActive(s32), func_002727C0(s32), func_00182B30(s32);
extern void func_001A58E0(Pes6PlayerFieldState *field, u8 active), func_009E37F0(void);
extern void func_00209830(Pes6PlayerInfo *info), func_00B6CE80(Pes6MatchPlayer *player),
    func_009B37F0(Pes6MatchPlayer *player);
extern void func_00B24790(s32 active), Pes6MatchFlow_SetState(s32 index, s8 state);
void func_009E5D20(void) {
    Pes6MatchPlayer *player;
    s32 frame;
    s32 index;
    Pes6PlayerInfo *info;
    D_00591F11[0] = 1;
    D_00591F12[0] = 0;
    D_00591DB4[0] = 0;
    func_00186220();
    Pes6World_SetActive(1);
    func_002727C0(16);
    func_00182B30(1);
    D_0058E5B4[0]->active = 0;
    info = D_0058E5B4[0];
    {
        Pes6PlayerFieldState *field = info->fieldState;
        s32 active = info->active;
        func_001A58E0(field, active);
    }
    func_009E37F0();
    if (D_00CBBDF8[0] == 1) {
        D_00591E14[0] = 0;
        for (frame = 0; frame < D_00591BE4[0] * 30; ++frame) {
            ++D_00591E14[0];
            player = D_0058E7F0;
            for (index = 0; index < 22; ++index) {
                func_00209830(player->info);
                func_00B6CE80(player);
                func_009B37F0(player);
                ++player;
            }
        }
    }
    func_00B24790(1);
    Pes6MatchFlow_SetState(2, 3);
}

/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/match_player.h"
typedef struct {
    u8 pad00[7], starting[11], reserved[0x8b - 18];
} ShootoutLineup;
extern ShootoutLineup D_00591A90[];
extern u8 D_00591F24[], D_00CBBDF0[], D_00CBBDF2[], D_00CBBDF1[], D_00CBBDFD[], D_00CBBDF6[],
    D_00CBBDF7[], D_00CBBDFB[], D_00CBBDFC[], D_00CBBDF3[], D_00CBBDF4[], D_00CBBDFE[],
    D_00CBBE00[], D_00CBBE07[], D_00CBBE08[], D_00CBBE09[];
extern s8 D_00CBBE06[];
extern s16 D_00CBCDE8[];
extern s32 D_00591E14[];
extern s32 func_00BBB8C0(s32 limit), func_002DCA30(void);
extern void func_009E3990(void), func_00849DA0(void), func_0099B4F0(void);
extern void func_00BF4000(s32), Pes6MatchFlow_SetState(s32 index, s8 state);
void func_009E5F80(void) {
    s32 side, slot, count;
    u8 minimum;
    Pes6Squad *squad;
    ShootoutLineup *lineup;
    D_00591F24[0] = 8;
    D_00591E14[0] = 0;
    D_00CBCDE8[0] = 0;
    D_00CBBDF0[0] = 0;
    D_00CBBDF2[0] = 0;
    D_00CBBDF1[0] = 0;
    D_00CBBDFD[0] = 0;
    D_00CBBDF6[0] = 0;
    D_00CBBDF7[0] = 0;
    D_00CBBE00[0] = 0xff;
    D_00CBBDFB[0] = 0;
    D_00CBBDFC[0] = 0;
    D_00CBBDF3[0] = 0;
    D_00CBBDF4[0] = 0;
    D_00CBBE07[0] = 0;
    D_00CBBE08[0] = 0;
    D_00CBBE09[0] = 0;
    D_00CBBDFE[0] = 11;
    side = 0;
    squad = Pes6MatchSquads;
    lineup = D_00591A90;
    minimum = D_00CBBDFE[0];
    for (; side < 2; ++side) {
        count = 0;
        for (slot = 0; slot < 11; ++slot) {
            if (squad->setupPlayers[lineup->starting[slot]].fieldD4)
                ++count;
        }
        if (count < minimum)
            minimum = (u8)count;
        ++squad;
        ++lineup;
    }
    D_00CBBDFE[0] = minimum;
    D_00CBBE06[0] = 1;
    if (func_00BBB8C0(3) > 0)
        D_00CBBE06[0] = -1;
    func_009E3990();
    if (func_002DCA30())
        func_00849DA0();
    func_0099B4F0();
    func_00BF4000(0);
    Pes6MatchFlow_SetState(2, 1);
}

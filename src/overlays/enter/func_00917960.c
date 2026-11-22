/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "pes6/match_player.h"
extern Pes6PlayerInfo *D_0058E5B4; /* info in the first entry of Pes6MatchPlayers */
extern void func_001A58E0(Pes6PlayerFieldState *, s8);
extern void func_00209A00(Pes6PlayerInfo *, s32, s32);
extern void func_00287370(Pes6MatchPlayer *);
void func_00917960(void) {
    D_0058E5B4->active = 0;
    func_001A58E0(D_0058E5B4->fieldState, 0);
    func_00209A00(D_0058E5B4, 0x1bf, 0);
    func_00287370(Pes6MatchPlayers);
}

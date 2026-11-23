/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "pes6/match_player.h"
extern void func_001A66C0(Pes6PlayerFieldState *), func_001B1170(Pes6PlayerFieldState *),
    func_001A72E0(Pes6PlayerFieldState *), func_001A9A10(Pes6PlayerFieldState *);
void func_008CBCB0(s32 playerId) {
    Pes6PlayerFieldState *field = Pes6MatchPlayer_Get(playerId)->info->fieldState;
    func_001A66C0(field);
    func_001B1170(field);
    func_001A72E0(field);
    func_001A9A10(field);
}

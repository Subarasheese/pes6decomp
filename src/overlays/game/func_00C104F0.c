/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
void func_00C104F0(u8 side, u8 slot) {
    MatchTeamReport *team = &D_00CBD8E0.teams[(u8)side];
    if ((u8)slot < 18) {
        ++team->cards[0];
        ++team->players[slot].cards[0];
    }
}

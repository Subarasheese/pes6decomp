/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
int func_003120D0(Pes6SquadPlayerStatus **out, int team, int slot) {
    if (team < 0 || slot < 0 || team >= 2 || slot >= 32) {
        *out = 0;
        return 0;
    }
    *out = &Pes6MatchSquads[team].players[slot].status;
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_player_ranks.h"

extern u16 D_003E9A14;
extern u16 D_0053A810[32];

u16 func_0022D350(u32 place) {
    u16 last = 0, rank = 0;
    s32 i;
    CompetitionPlayerStats *data = competitionPlayerStats();
    if (competitionDataUnavailable() == 1)
        return 0;
    if (!data)
        return 0;
    if (D_003E9A14 <= place)
        return 0;
    if (place >= 32)
        return 0;
    for (i = 0; i < D_003E9A14; ++i) {
        CompetitionPlayerRank *entry = &data->ranks[D_0053A810[i]];
        if (last != entry->total06) {
            rank = i + 1;
            last = entry->total06;
        }
        if (place == rank)
            return last;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_player_ranks.h"

extern u16 D_003E9A18;
extern u16 D_0053A850[32];

u16 func_0022D590(u32 place) {
    u16 last = 0, rank = 0;
    s32 i;
    CompetitionPlayerStats *data = competitionPlayerStats();
    if (competitionDataUnavailable() == 1)
        return 0;
    if (!data)
        return 0;
    if (D_003E9A18 <= place)
        return 0;
    if (place >= 32)
        return 0;
    for (i = 0; i < D_003E9A18; ++i) {
        CompetitionPlayerRank *entry = &data->ranks[D_0053A850[i]];
        if (last != entry->total04) {
            rank = i + 1;
            last = entry->total04;
        }
        if (place == rank)
            return last;
    }
    return 0;
}

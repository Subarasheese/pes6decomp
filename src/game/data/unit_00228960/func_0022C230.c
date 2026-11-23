/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_player_ranks.h"

s32 func_0022C230(u8 side) {
    CompetitionPlayerStats *data = competitionPlayerStats();
    if (side != 0 && side != 1)
        return 0;
    if (!data)
        return 0;
    return data->sideValues[side];
}

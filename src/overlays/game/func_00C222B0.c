/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stats.h"
#include "pes6/match_player_ratings.h"
u8 func_00C222B0(u8 side, u8 slot) {
    const PlayerRatings *ratings = &D_00CCAF80;
    u8 index = func_00C17E10(side, slot);
    u8 value = 0;
    if (index < 18)
        value = ratings->rank[side][index];
    return value;
}

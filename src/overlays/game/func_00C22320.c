/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stats.h"
#include "pes6/match_player_ratings.h"
f32 func_00C22320(u8 side, u8 slot) {
    const PlayerRatings *ratings = &D_00CCAF80;
    u8 index = func_00C17E10(side, slot);
    f32 value = 0.0f;
    if (index < 18)
        value = ratings->rating[side][index];
    return value;
}

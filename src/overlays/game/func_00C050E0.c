/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_direction_state.h"

s32 func_00C050E0(const Pes6MatchPlayer *player, s32 kind) {
    s32 i;
    for (i = 0; i < SUPPORT_ORDER_COUNT; ++i) {
        if (D_00CB52A0.orders[i].owner == player->id && D_00CB52A0.orders[i].kind == kind)
            return 1;
    }
    return 0;
}

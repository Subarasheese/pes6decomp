/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00326F70(MatchPlayerStateRows *state, u8 player, s32 mask) {
    u8 side, slot;
    PlayerStateEntry *entry;
    func_00311A50(&side, &slot, player);
    if (!findPlayerState(&entry, state, side, slot))
        return 0;
    return entry->flags & mask;
}

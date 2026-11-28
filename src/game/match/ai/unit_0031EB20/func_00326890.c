/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00326890(MatchPlayerStateRows *state, u8 side, u8 slot, s32 mask) {
    PlayerStateEntry *entry;
    if (!findPlayerState(&entry, state, side, slot))
        return 0;
    return entry->flags & mask;
}

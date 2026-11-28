/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00326A10(s32 *value, MatchPlayerStateRows *state, s32 side, s32 slot) {
    PlayerStateEntry *entry;
    if (findPlayerState(&entry, state, side, slot))
        *value = entry->field18;
    else
        *value = 1;
    return 1;
}

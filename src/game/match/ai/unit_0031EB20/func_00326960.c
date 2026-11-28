/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00326960(u8 *value, MatchPlayerStateRows *state, s32 side, s32 slot) {
    PlayerStateEntry *entry;
    if (findPlayerState(&entry, state, side, slot))
        *value = entry->field11;
    else
        *value = 0xee;
    return 1;
}

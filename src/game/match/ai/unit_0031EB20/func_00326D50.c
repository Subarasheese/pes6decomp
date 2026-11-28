/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00326D50(s16 *value, MatchPlayerStateRows *state, u8 player) {
    u8 side, slot;
    PlayerStateEntry *entry;
    func_00311A50(&side, &slot, player);
    if (findPlayerState(&entry, state, side, slot))
        *value = entry->field0A;
    else
        *value = 0xff;
    return 1;
}

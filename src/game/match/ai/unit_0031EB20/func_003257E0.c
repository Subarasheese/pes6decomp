/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern u8 func_00223EB0(u8 team, u16 player, u8 stat);

s32 func_003257E0(s32 *out, MatchPlayerStateRows *state, u8 player) {
    u8 side, slot;
    PlayerStateEntry *entry;
    func_00311A50(&side, &slot, player);
    if (findPlayerState(&entry, state, side, slot)) {
        u8 team = D_003E77B0->team[(s32)side % 2];
        u16 playerId = entry->playerId;
        u8 stat = (u8)state->mode;
        *out = func_00223EB0(team, playerId, stat);
    } else {
        *out = 0;
    }
    return 1;
}

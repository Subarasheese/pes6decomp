/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00327060(MatchPlayerStateRows *state, u8 side) {
    PlayerStateEntry *entry;
    s32 i;
    for (i = 0; i < 32; ++i) {
        if (findPlayerState(&entry, state, side, i)) {
            if (entry->flags & 0x60000000)
                entry->flags |= 0x80000000;
            entry->flags &= ~0x60000000;
        }
    }
    for (i = 0; i < 32; ++i) {
        if (findPlayerState(&entry, state, side, i)) {
            const Pes6SquadSetupPlayer *player = &Pes6MatchSquads[side].setupPlayers[i];
            if (player->extra.match.active104 && !(entry->flags & 0x80000000)) {
                if (player->extra.match.flag102)
                    entry->flags |= 0x40000000;
                if (player->extra.match.flag110)
                    entry->flags |= 0x20000000;
            }
        }
    }
    return 1;
}

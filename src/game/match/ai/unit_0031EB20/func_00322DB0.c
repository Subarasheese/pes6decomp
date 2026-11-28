/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern s32 func_0030E170(s16 *out, s32 side, s32 slot);

s32 func_00322DB0(MatchPlayerStateRows *state, u8 side) {
    PlayerStateEntry *entry;
    s32 i;
    for (i = 0; i < 32; ++i) {
        if (findPlayerState(&entry, state, side, i)) {
            const Pes6SquadSetupPlayer *player = &Pes6MatchSquads[side].setupPlayers[i];
            func_0030E170(&entry->status, side, i);
            switch (entry->lineupStatus) {
            case 2:
            case 6:
            case 5:
                if (player->value44) {
                    if (entry->status) {
                        ++entry->count;
                        entry->field10 = 0;
                    } else {
                        entry->count = 0;
                        ++entry->field10;
                    }
                } else if (entry->status) {
                    ++entry->count;
                    entry->field10 = 0;
                } else {
                    entry->count = 0;
                    entry->field10 = 0xff;
                }
                /* Fall through to the state reset. */
            case 3:
                entry->count = 0;
                entry->field10 = 0xff;
                break;
            }
        }
    }
    return 1;
}

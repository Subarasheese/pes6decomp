/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player_state_rows.h"
#include "pes6/match_lineup_statistics.h"

extern s32 func_00292D50(void);

s32 func_00325A40(MatchPlayerStateRows *state) {
    s32 side, slot, i;
    s32 count = (u8)func_00292D50();
    for (side = 0; side < 2; ++side) {
        for (slot = 0; slot < 32; ++slot) {
            PlayerStateEntry *entry = &state->players[side][slot];
            if (slot < count) {
                entry->lineupStatus = 3;
                for (i = 0; i < 11; ++i) {
                    if (D_00591A90[side].selected[i] == D_00591A90[side].startingSlots[slot])
                        entry->lineupStatus = 2;
                }
            } else
                entry->lineupStatus = 4;
        }
    }
    return 1;
}

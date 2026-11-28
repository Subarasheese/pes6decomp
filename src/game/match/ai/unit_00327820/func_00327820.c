/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern void *func_001C48E8(void *dest, int value, u32 size);

s32 func_00327820(MatchPlayerStateRows *state, s32 side) {
    s32 i;
    if (side > 1)
        return 0;
    for (i = 0; i < 32; ++i) {
        PlayerStateEntry *entry = &state->players[side][i];
        u16 playerId;
        func_001C48E8(entry, 0, sizeof(*entry));
        playerId = Pes6MatchSquads[side].setupPlayers[i].playerId;
        if (playerId != 0) {
            entry->playerId = playerId;
            entry->field04 = 0;
            entry->field02 = 0;
            entry->field10 = 0xff;
            entry->field18 = 1;
            entry->field11 = 0xee;
            entry->field08 = 0xff;
            entry->field0E = 0xff;
            entry->field0A = 0xff;
            entry->count = 0;
            entry->flags &= 0x00fffe00;
        }
    }
    return 1;
}

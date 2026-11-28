/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

s32 func_00311A50(u8 *side, u8 *squadSlot, u8 player) {
    s32 maskedIndex;
    s32 slot;
    Pes6MatchPlayer *rec;

    maskedIndex = player;
    if (maskedIndex == 0 || maskedIndex >= 23) {
        *side = 0xFF;
        *squadSlot = 0xFF;
        return 0;
    }
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    rec = &Pes6MatchPlayers[slot];
    *side = rec->team;
    *squadSlot = rec->slot;
    return 1;
}

/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern s32 func_00288670(s32, s32);
extern u8 D_00CB5382[];

static inline s32 tacticalRating(const TacticalActor *actor, s32 index, s32 scale) {
    const Pes6SquadSetupPlayer *entry =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return func_00288670(entry->current.base[index] & 127, scale);
}

s32 func_00963340(TacticalActor *actor) {
    s32 rating = tacticalRating(actor, 12, 30);
    s32 limit = 0;
    switch (D_00CB5382[0]) {
    case 0x0:
    case 0x1:
        limit = 50;
        limit -= rating / 4;
        break;
    case 0x2:
        limit = 30;
        limit -= rating / 5;
        break;
    case 0x3:
        limit = 10;
        limit -= rating / 10;
        break;
    case 0x4:
    case 0x5:
        break;
    default:
        break;
    }
    return limit;
}

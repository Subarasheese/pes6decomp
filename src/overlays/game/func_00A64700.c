/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u16 func_009B30B0(u16, u16);
extern s32 func_00288670(s32, s32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_00AFBAD0(s32, s32, s32);

s32 func_00A64700(KeeperActor *actor, u16 action, s32 value, u16 heading) {
    const Pes6LineupProfile *profile =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot].current;
    s32 limit = 400 + 4 * func_00288670(profile->base[0x16] & 127, 50);
    switch (action) {
    case 145:
    case 147:
    case 148:
    case 146:
        limit -= 512;
        break;
    }
    if (func_009B30B0(actor->decision.facing, heading) <= 72 && actor->player.speed > 3072 &&
        func_009B30B0(actor->decision.movement, heading) <= 32)
        limit += actor->player.speed >> 4;
    return func_00AFBAD0(value, 512, -func_00A13E50(limit, 512));
}

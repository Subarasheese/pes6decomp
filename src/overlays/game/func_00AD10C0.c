/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u16 func_009B30B0(u16 first, u16 second);
extern u16 func_0099DFF0(TouchActor *actor);

s32 func_00AD10C0(TouchActor *actor) {
    u16 angle;
    if (!(actor->touch.flags & 0x100) && (actor->touch.flags & 0x4000)) {
        actor->touch.command = 1;
        actor->touch.targetFrame = 0;
        angle = func_0099DFF0(actor);
        if (func_009B30B0(actor->touch.facing, (u16)angle) < 14) {
            const Pes6SquadSetupPlayer *player =
                &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
            actor->touch.chosenFoot = pes6LineupKickingFoot(&player->current);
        } else
            actor->touch.chosenFoot = (u16)(actor->touch.facing - (u16)angle + 0x10000) <= 0x8000;
        actor->player.role = 0x40;
        actor->player.action = 0;
        return 1;
    }
    return 0;
}

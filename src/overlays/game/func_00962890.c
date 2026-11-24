/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

u8 func_00962890(TouchActor *actor) {
    s32 i;
    TouchTeamSlots *team = &Pes6MatchSides[actor->player.team];
    for (i = 0; i < TOUCH_TEAM_SLOTS; ++i) {
        if (actor->player.slot == team->slot[i])
            return Pes6MatchSides[actor->player.team].kind[i];
    }
    return 0xff;
}

/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

static inline u8 touchSlotKind(const TouchTeamSlots *team, u8 i) {
    const TouchTeamSlots *indexed = (const TouchTeamSlots *)((const u8 *)(u32)i + (u32)team);
    return indexed->kind[0];
}
u8 func_00962900(TouchActor *actor, s32 kind) {
    u8 i;
    TouchTeamSlots *team = &Pes6MatchSides[actor->player.team];
    for (i = 0; i < TOUCH_TEAM_SLOTS; ++i) {
        if (actor->player.slot == team->slot[i] && (u8)kind == touchSlotKind(team, i))
            return Pes6MatchSides[actor->player.team].value[i];
    }
    return 0;
}

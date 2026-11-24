/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_first_touch.h"

extern u8 D_005926DE[];
extern f32 D_005926D8[];
extern s32 func_00A09950(void *player);
extern u8 D_00591E19[];
extern u8 func_00A1B4A0(TouchActor *);
extern s32 func_00A14020(TouchActor *);

s32 func_00AD21D0(TouchActor *actor) {
    s32 end;
    s32 active = (u8)func_00A1B4A0(actor);
    if (!active &&
        actor->heading.motion->frame <=
            (f32)((s32)actor->heading.motion->descriptor->eventFrame * 2 - 4) &&
        D_005926D8[0] <= (f32)(u32)D_005926DE[0] && D_00591E19[0] != actor->player.id)
        return 1;
    if (actor->heading.motion->frame <= 32.f) {
        if (!func_00A14020(actor))
            return 0;
    }
    end = (s32)actor->heading.motion->descriptor->recoveryFrame * 2;
    if (!end || actor->heading.motion->frame < (f32)end)
        return 0;
    if (Pes6MatchState_Current.owner && actor->player.id != Pes6MatchState_Current.owner &&
        (Pes6MatchState_Current.owner == 1 || Pes6MatchState_Current.owner == 12))
        return 1;
    switch (Pes6Ball_Current->action) {
    case 0:
        if (actor->player.role == 5 && actor->player.id == D_00591E19[0])
            return 0;
        break;
    case 4:
        if (!func_00A09950(actor))
            return 0;
        /* Fall through when this player can take the touch. */
    case 13:
    case 11:
    case 15:
    case 5:
        return 1;
    default:
        return 0;
    }

    return 1;
}

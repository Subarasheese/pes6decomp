/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_first_touch.h"

extern s32 func_00AA3540(TouchActor *);
extern s32 func_00AA3210(Pes6MatchPlayer *player, f32 x, f32 z);
extern u8 D_005926E4[];
extern u8 D_00591E53[][2];

static inline s32 touchClip(TouchActor *actor) {
    switch (actor->heading.motion->clip) {
    case 0x33:
    case 0x34:
    case 0x26:
    case 0x32:
        return 1;
    default:
        return 0;
    }
}

static inline s32 touchReaction(TouchActor *actor) {
    if (touchClip(actor))
        return 4;
    if (touchRating(actor, 10, 40) < 71)
        return 0;
    return (touchRating(actor, 10, 40) - 70) / 7;
}

s32 func_009F8310(TouchActor *actor) {
    if (!(func_00AA3210(&actor->player, touchPredictionAt(D_005926E4[0])->x[0],
                        touchPredictionAt(D_005926E4[0])->z[0]) > 0x10000 &&
          func_00AA3540(actor) > 0x14400))
        return 4;
    {
        const Pes6MatchPlayer *opponent =
            Pes6MatchPlayer_Get(D_00591E53[actor->player.side ^ 1][0]);
        if ((u32)(opponent->role - 12) > 1) {
            return touchReaction(actor);
        }
    }
    return 4;
}

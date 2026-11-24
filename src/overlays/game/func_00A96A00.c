/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_00591E4F[][2];
extern s32 func_00A14EC0(Pes6MatchPlayer *, Pes6MatchPlayer *);
extern s32 func_00B274B0(s32);
extern void func_00AA9F90(TouchActor *, TouchActor *, s32, s32, s32, s32);

s32 func_00A96A00(TouchActor *actor) {
    f32 x = touchBall->trajectory.targetX;
    f32 z = touchBall->trajectory.targetZ;
    u8 frame = touchBall->trajectory.candidateFrame;
    s32 result;
    if (func_00B274B0(D_00591E4F[actor->player.side ^ 1][0])) {
        TouchActor *opponent =
            (TouchActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
        if (!func_00A14EC0(&opponent->player, &actor->player))
            func_00AA9F90(opponent, actor, opponent->touch.runLimit, 0, 96,
                          touchHeight(actor, -420));
        result = touchBall->trajectory.candidateFrame;
    } else
        result = 0x7fffffff;
    touchBall->trajectory.candidateFrame = frame;
    touchBall->trajectory.targetX = x;
    touchBall->trajectory.targetZ = z;
    return result;
}

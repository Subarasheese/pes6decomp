/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 D_00591F20[];
extern void func_0027A600(Pes6MatchPlayer *player, u8 enabled);
extern void func_00209820(void *motion);
extern void func_00AAE520(TouchActor *, s32, s32, s32);
extern s32 func_00A1B390(TouchActor *);

void func_00A527E0(TouchActor *actor) {
    func_0027A600(&actor->player, 1);
    actor->player.actionGroup = 2;
    func_00209820(actor->heading.motion);
    touchBall->trajectory.targetX = (f32)actor->player.goalDirection * 13465.f;
    if ((f32)D_00591F20[0] < actor->player.z)
        touchBall->trajectory.targetZ = 8729.f;
    else
        touchBall->trajectory.targetZ = -8729.f;
    func_00AAE520(actor, actor->touch.runLimit, 0, 0);
    actor->player.aimX = actor->player.x;
    actor->player.aimZ = actor->player.z;
    if (func_00A1B390(actor) || !((f32)actor->player.goalDirection * actor->player.x < 13337.f)) {
        actor->player.role = 7;
        actor->player.action = 0;
    }
}

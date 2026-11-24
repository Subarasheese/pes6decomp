/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u16 func_009B30B0(u16, u16);
extern s32 func_009B3480(Pes6MatchPlayer *, f32 x, f32 z);
extern s32 func_009B3350(Pes6Ball *, s32 x, s32 z);
extern s32 D_00591F1C[];
extern s32 D_00591F20[];

u32 func_00AAE380(KeeperActor *actor) {
    KeeperBall *ball = keeperBall;
    u32 oldDistance, newDistance;
    u16 oldHeading, newHeading;
    if (ball->ball.action != 1)
        return 0;
    if (ball->ball.unk6E <= 1)
        return 0;
    oldDistance =
        func_009B3350(&ball->ball, (s32)ball->decision.targetX, (s32)ball->decision.targetZ);
    newDistance = func_009B3350(&ball->ball, D_00591F1C[0], D_00591F20[0]);
    if (oldDistance > newDistance)
        return 0;
    if (actor->player.role == 4) {
        if (func_009B30B0(actor->decision.ballHeading, keeperBall->ball.dir) >= 112)
            return 0;
    }
    if (func_009B30B0(actor->decision.movement, actor->player.angle) <= 32 &&
        actor->player.speed > 2048) {
        oldHeading = func_009B3480(&actor->player, keeperBall->decision.targetX,
                                   keeperBall->decision.targetZ);
        newHeading = func_009B3480(&actor->player, (f32)D_00591F1C[0], (f32)D_00591F20[0]);
        if (func_009B30B0(actor->decision.movement, newHeading) <
            func_009B30B0(actor->decision.movement, oldHeading)) {
            keeperBall->decision.targetX = (f32)D_00591F1C[0];
            keeperBall->decision.targetZ = (f32)D_00591F20[0];
            return 1;
        }
    }
    return 0;
}

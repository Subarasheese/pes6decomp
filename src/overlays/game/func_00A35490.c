/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_shot.h"
extern u16 func_009B30B0(u16 first, u16 second);
extern u8 D_00591E4F[][2], D_00591E4C[], D_005926FC[];
s32 func_00A35490(ShotActor *actor, s32 force) {
    const Pes6MatchPlayer *opponent = Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    s32 opponentAngle = func_009B30B0(actor->shot.ballHeading, actor->shot.opponentHeading);
    s32 trajectoryAngle = func_009B30B0(actor->shot.ballHeading, shotBall->ball.dir);
    if (opponentAngle >= 96 && opponent->speed < 0x1900 &&
        force < 0x200 + (0x2000 - opponent->speed) / 16)
        return 0;
    if (!D_00591E4C[0])
        return 1;
    if ((f32)actor->player.goalDirection *
            (0.f + actor->player.x + actor->shot.velocityX * (f32)(u32)D_005926FC[0]) <
        -13465.f) {
        if (!((f32)shotMagnitude((s32)actor->player.z) <= 1195.f))
            return 0;
    }
    if (force >= 0x200 && trajectoryAngle <= 64 && shotBall->ball.horizontalSpeed >= 0x1000)
        return 1;
    if (trajectoryAngle > 32) {
        if (trajectoryAngle >= 80)
            return 4 * opponentAngle + 0x280 + 4 * trajectoryAngle < force;
        return force > 0x300 ? 1 : opponentAngle <= 48;
    }
    return 1;
}

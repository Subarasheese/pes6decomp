/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4C[];
extern u16 func_009B30B0(u16, u16);
extern u8 D_005926E4[];

s32 func_00A358F0(ShotActor *actor, ShotActor *opponent, s32 actorFrame, s32 opponentFrame) {
    if (opponentFrame < actorFrame && shotBall->ball.horizontalSpeed > 0x800 &&
        func_009B30B0(actor->shot.ballHeading, actor->shot.opponentHeading) >= 80 &&
        opponent->player.role == 2)
        return 1;
    if (func_009B30B0(actor->shot.ballHeading, opponent->shot.ballHeading) <= 32 &&
        actor->player.distance114 > opponent->player.distance114 + 32)
        return 1;
    if (((opponentFrame < 8 || opponent->player.distance114 <= 0x180) && !D_00591E4C[0]) ||
        actorFrame > 23) {
        if (actor->shot.opponentDistanceSquared > 0x1900000 &&
            actorFrame <= opponentFrame + D_005926E4[0])
            return 0;
        if (actor->player.distance114 < opponent->player.distance114 + 0x180 &&
            func_009B30B0(actor->shot.facing, shotBall->ball.dir) <= 48 &&
            func_009B30B0(actor->shot.movement, shotBall->ball.dir) <= 48 && actorFrame <= 40)
            return 0;
        if (actor->player.distance114 < opponent->player.distance114 &&
            actor->player.distance114 < 0x180)
            return 0;
        if (D_00591E4C[0] &&
            func_009B30B0(opponent->shot.facing, opponent->shot.approachHeading) >= 64)
            return 0;
        if (!shotBall->ball.horizontalSpeed &&
            func_009B30B0(actor->shot.ballHeading, actor->shot.opponentHeading) >= 96)
            return 0;
        if (actorFrame < opponentFrame &&
            (actor->player.distance114 < opponent->player.distance114 ||
             actor->shot.ballDistanceSquared <
                 actor->shot.playerDistancesSquared[opponent->player.id] ||
             func_009B30B0(actor->shot.ballHeading, shotBall->ball.dir) <= 96))
            return 0;
        if (func_009B30B0(actor->shot.ballHeading, actor->shot.opponentHeading) >= 64 &&
            func_009B30B0(actor->shot.ballHeading, shotBall->ball.dir) >= 64 &&
            actor->player.distance114 <= 255)
            return 0;
        return 1;
    }
    return 0;
}

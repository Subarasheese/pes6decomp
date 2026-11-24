/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u16 func_009B30B0(u16, u16);

s32 func_00A356D0(ShotActor *actor, ShotActor *opponent, s32 force) {
    u16 clip = opponent->heading.motion->clip;
    switch (clip) {
    case 0x2e5:
    case 0x2e1:
    case 0x2e2:
    case 0x58:
    case 0x36:
    case 0x37:
    case 0x89:
    case 0x10b:
    case 0x2ea:
    case 0x3a:
        if (func_009B30B0(actor->shot.ballHeading, actor->shot.opponentHeading) >= 80 &&
            force < 0x180)
            return 1;
    case 0x5d:
    case 0x291:
    case 0x238:
    case 0x3aa:
    case 0x2d4:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x237:
    case 0x59:
        if ((func_009B30B0(actor->shot.ballHeading, shotBall->ball.dir) >= 112 ||
             func_009B30B0(actor->shot.ballHeading, opponent->shot.facing) >= 112) &&
            force < 0x200)
            return 1;
        break;
    }
    if (shotBall->shot.y[0] < -256.f && actor->player.distance114 < 0x140 &&
        shotBall->ball.horizontalSpeed < 0x800 &&
        actor->shot.ballDistanceSquared < actor->shot.playerDistancesSquared[opponent->player.id])
        return 1;
    return 0;
}

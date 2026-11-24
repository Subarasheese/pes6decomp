/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern s32 func_00A72D50(s32, s32, s32);
extern void func_00285080(s32);
extern u8 D_005926E0[];

s32 func_00A74E50(s32 kind, s32 distance, s32 lower, s32 mode) {
    s32 speed;
    for (speed = lower + 0x100; speed < 0xff00; speed += 0x800) {
        shotBall->shot.targetX = 0.f;
        shotBall->shot.targetY = -28.f;
        shotBall->shot.targetZ = 0.f;
        shotBall->shot.projectionTurn = 0;
        shotBall->shot.projectionAngle = 0;
        shotBall->shot.projectionSpeed = speed;
        shotBall->shot.projectionVy = (f32)func_00A72D50(kind, distance, 0x180);
        shotBall->shot.projectionVy *= -188.f;
        shotBall->shot.projecting = 1;
        shotBall->shot.projectionMode = mode;
        shotBall->ball.unk6E = 1;
        while (shotBall->shot.targetX < (f32)distance && lower < shotBall->shot.projectionSpeed &&
               shotBall->shot.projectionSpeed > 128) {
            func_00285080(D_005926E0[0]);
            shotBall->ball.unk6E += D_005926E0[0];
        }
        if ((f32)distance <= shotBall->shot.targetX && lower <= shotBall->shot.projectionSpeed)
            return speed;
    }
    return 0xff00;
}

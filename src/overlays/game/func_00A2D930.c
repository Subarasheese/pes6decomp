/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern s32 D_00591F1C[];
extern u8 D_005926E6[];
extern s32 func_00AB4460(void);
extern u8 *Pes6BallOwnerRecord;

s32 func_00A2D930(ShotActor *actor) {
    f32 x;
    f32 z;
    if (shotBall->ball.action == 1 && func_00AB4460() > 1)
        x = (f32)D_00591F1C[0];
    else
        x = shotPredictionAt(D_005926E6[0])->x[0];
    x = x * (f32)actor->player.goalDirection;
    if (Pes6BallOwnerRecord[actor->player.side ^ 1])
        x -= 1024.f;
    z = (f32)shotMagnitude((s32)shotBall->shot.z[0]);
    if (x < -9241.f) {
        if ((f32)z < 5160.f)
            return 4;
        return 3;
    } else if (x < -4096.f)
        return 2;
    else if (x < 0.f)
        return 1;
    else
        return 0;
}

/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern void func_00AA9F90(ShotActor *, ShotActor *, s32, s32, s32, s32);
extern s32 func_00A4E850(ShotActor *, s32);

static inline void clampShot(f32 *p, f32 limit) {
    if (*p <= limit) {
        if (*p < -limit)
            *p = -limit;
    } else {
        *p = limit;
    }
}

s32 func_00A513C0(ShotActor *actor, s32 force, s32 angle, s32 power) {
    f32 x, z, y;
    s32 frame;
    if (!func_00A14EC0(&actor->player, &actor->player)) {
        func_00AA9F90(actor, actor, force, angle, power, -actor->shot.heightLimit);
        actor->shot.targetFrame = shotBall->shot.candidateFrame;
        clampShot(&shotBall->shot.targetX, 13465.f);
        clampShot(&shotBall->shot.targetZ, 8729.f);
        x = shotBall->shot.targetX;
        frame = shotBall->shot.candidateFrame;
        y = shotBall->shot.targetY;
        z = shotBall->shot.targetZ;
        if (func_00A4E850(actor, 1))
            actor->shot.shotAngle = 0x7fff;
        func_00A15540(actor, actor);
        func_00A15300(actor, actor, x, frame, y, z);
        shotBall->shot.shotHeight = (s32)y;
        func_00A515A0(actor);
        switch (actor->shot.timingMode) {
        case 0:
        case 3:
            break;
        default:
            actor->shot.pending = 0;
            break;
        }
        return 1;
    }
    shotBall->shot.shotHeight = actor->shot.savedHeight;
    func_00A515A0(actor);
    return 0;
}

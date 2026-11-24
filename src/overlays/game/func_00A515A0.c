/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u16 func_009B30B0(u16, u16);
extern s32 func_00BBB990(s32, s32);
extern s32 func_00BBB9C0(s32, s32);
extern s32 D_00591E7C[];
extern u16 func_0099DFF0(ShotActor *);
extern u16 func_009B32D0(s32, u16, s32);

static inline void dampAim(ShotActor *actor) {
    if (shotMagnitude(actor->shot.targetX) <= 64)
        actor->shot.targetX = 0;
    if (shotMagnitude(actor->shot.targetZ) <= 64)
        actor->shot.targetZ = 0;
    actor->shot.targetX = actor->shot.targetX * 9 / 10;
    actor->shot.targetZ = actor->shot.targetZ * 9 / 10;
}

void func_00A515A0(ShotActor *actor) {
    if (actor->shot.controlMode)
        return;
    if (!D_00591E7C[0]) {
        if (actor->shot.flags & 0x200)
            return;
        dampAim(actor);
        return;
    } else {
        s32 aim = (u16)func_0099DFF0(actor);
        u16 angle = func_009B30B0((u16)aim, shotBall->ball.dir);
        s32 x, z;
        if (angle <= 8)
            aim = shotBall->ball.dir;
        else if (angle >= 112)
            aim = (u16)(shotBall->ball.dir + 0x8000);
        if (!(actor->shot.flags & 0x200)) {
            dampAim(actor);
            if (actor->player.distance114 < 0x120 || shotBall->ball.horizontalSpeed < 0x1000 ||
                angle > 96 || angle < 32)
                return;
            aim = func_009B32D0(aim, (u16)(shotBall->ball.dir + 0x8000), 0x5000);
            x = -func_00BBB990((u16)aim, 96);
            z = -func_00BBB9C0((u16)aim, 96);
        } else {
            x = func_00BBB990(aim, 512);
            z = func_00BBB9C0(aim, 512);
            actor->shot.targetX = x;
            actor->shot.targetZ = z;
        }
        shotBall->shot.targetX += (f32)x;
        shotBall->shot.targetZ += (f32)z;
    }
}

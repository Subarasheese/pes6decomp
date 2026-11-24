/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern void func_009B36C0(KeeperActor *, s32, s32, s32, u8);
extern s32 func_00BBB990(s32 angle, s32 scale);
extern s32 func_00BBB9C0(s32 angle, s32 scale);
extern s32 func_009B34C0(f32, f32, f32, f32);
extern f32 D_00591E6C[];
extern f32 D_00591E74[];

void func_00AB3140(KeeperActor *actor) {
    HeadingMotion *motion = actor->heading.motion;
    u16 heading;
    s32 clip = motion->clip;
    s32 dx, dz;
    if (clip == 0x1de && !(motion->frame < 5.f) &&
        !(keeperBall->decision.y[0] <= (f32)heightScaledDistance(actor, -144)) &&
        motion->frame <= 12.f) {
        u8 contactFrame = (u8)motion->frame;
        func_009B36C0(actor, clip, contactFrame, actor->decision.facing, motion->mirrored);
        D_00591E6C[0] += actor->decision.velocityX;
        D_00591E74[0] += actor->decision.velocityZ;
        dx = (s32)(D_00591E6C[0] - keeperBall->decision.x[0]);
        dz = (s32)(D_00591E74[0] - keeperBall->decision.z[0]);
        if (dx * dx + dz * dz < 0x510) {
            heading = func_009B34C0(D_00591E6C[0], D_00591E74[0], keeperBall->decision.x[0],
                                    keeperBall->decision.z[0]);
            keeperBall->ball.pos[0] = D_00591E6C[0] + (f32)func_00BBB990(heading, 36);
            keeperBall->ball.pos[2] = D_00591E74[0] + (f32)func_00BBB9C0(heading, 36);
            Pes6MatchState_Current.owner = actor->player.id;
        }
    }
}

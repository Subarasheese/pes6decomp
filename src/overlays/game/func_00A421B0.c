/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern void func_00207390(HeadingMotion *, s32);
extern s32 func_00A9C670(ShotActor *);
extern s32 func_009F4B70(s32, s32, f32);
extern s32 func_00A22C50(ShotActor *, s32, s32, s32, s32, u16, s32, s32, f32);
extern void func_00AADED0(ShotActor *, u16, s32, s32);

s32 func_00A421B0(ShotActor *actor) {
    s32 phase, frame, limit, cap;
    limit = func_00A9C670(actor) - 1024;
    cap = ((const HeadingDescriptor *)func_00208310(0x2c8))->duration * 90 / 100;
    if (limit >= cap)
        limit = cap;
    for (frame = 6; frame >= 0; frame -= 2) {
        phase = func_009F4B70(0x2c8, frame, D_003E74CC[0]);
        if (func_00A22C50(actor, 0x2c8,
                          shotKickingFoot(actor),
                          0, phase, actor->shot.facing, limit, 0, D_003E74CC[0]) != 0) {
            actor->heading.motion->mirrored = shotKickingFoot(actor);
            func_00209A00(actor->heading.motion, 0x2c8, (u16)frame);
            func_00AADED0(actor, actor->shot.facing, 0, phase);
            func_00207390(actor->heading.motion, 6);
            actor->heading.turnAngle = actor->shot.facing;
            return 1;
        }
    }
    return 0;
}

/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern void func_009B36C0(KeeperActor *, s32, s32, s32, u8);
extern s32 func_00930080(KeeperActor *, s32, s32, f32, f32);
extern f32 func_001CD9E0(f32);
extern f32 D_00591E6C[];
extern f32 D_00591E74[];
extern f32 D_00591BEC[];

s32 func_00AB3720(KeeperActor *actor, s32 clip, s32 heading, s32 frame, s32 mirrored, s32 start,
                  s32 end, f32 rate) {
    s32 ticks, length;
    f32 dx, dz;
    const KeeperBallFields *position;
    func_009B36C0(actor, clip, end, heading, (u8)mirrored);
    ticks = func_00930080(actor, clip, end, (f32)start, rate);
    position = predictionAt(frame);
    dx = D_00591E6C[0] - position->x[0];
    dz = D_00591E74[0] - position->z[0];
    length = (s32)func_001CD9E0(dx * dx + dz * dz);
    return (s32)(256.f * (D_00591BEC[0] * (f32)length) / (f32)ticks);
}

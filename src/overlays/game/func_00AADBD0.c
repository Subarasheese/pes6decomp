/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern void func_009B36C0(KeeperActor *, s32, s32, s32, u8);
extern s32 func_00930080(KeeperActor *, s32, s32, f32, f32);
extern s32 func_00BBB990(s32 angle, s32 scale);
extern s32 func_00BBB9C0(s32 angle, s32 scale);
extern s32 func_00AB38D0(KeeperActor *);
extern f32 func_001CD9E0(f32);
extern s32 func_009B34C0(f32, f32, f32, f32);
extern s32 D_00592260[];
extern u16 D_0059226E[];
extern f32 D_00591E6C[];
extern f32 D_00591E74[];
extern f32 D_00591BEC[];

void func_00AADBD0(KeeperActor *actor, s32 animation, s32 direction, s32 mirrored, s32 frame,
                   s32 end, f32 start, f32 rate) {
    s32 ticks, length;
    f32 dx, dz;
    func_009B36C0(actor, animation, end, direction, (u8)mirrored);
    {
        u16 clip = actor->heading.motion->clip;
        s32 heading = (u16)direction;
        if (func_00AB38D0(actor) == 4 && (actor->decision.flags221 & 1)) {
            switch (clip) {
            case 0x2ac: {
                s32 sign = (u16)mirrored == 0 ? 1 : -1;
                heading = (u16)(heading + (u16)(sign * 0x4000));
            } break;
            default: {
                s32 sign = (u16)mirrored == 0 ? 1 : -1;
                heading = (u16)(heading - (u16)(sign * 0x4000));
            } break;
            }
            D_00591E6C[0] += (f32)func_00BBB990(heading, 16);
            D_00591E74[0] += (f32)func_00BBB9C0(heading, 16);
        }
    }
    ticks = func_00930080(actor, animation, frame, start, rate);
    dx = D_00591E6C[0] - predictionAt(frame)->x[0];
    dz = D_00591E74[0] - predictionAt(frame)->z[0];
    length = (s32)func_001CD9E0(dx * dx + dz * dz);
    D_00592260[0] = (s32)(256.f * (D_00591BEC[0] * (f32)length) / (f32)ticks);
    D_0059226E[0] = func_009B34C0(D_00591E6C[0], D_00591E74[0], predictionAt(frame)->x[0],
                                  predictionAt(frame)->z[0]);
}

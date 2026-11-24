/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_00BBB990(s32 angle, s32 scale);
extern s32 func_00BBB9C0(s32 angle, s32 scale);
extern s32 func_00AB38D0(KeeperActor *);
extern f32 D_00591E6C[];
extern f32 D_00591E74[];

void func_00AADAD0(KeeperActor *actor, u16 clip, s32 heading, s32 mirrored) {
    if (func_00AB38D0(actor) == 4 && (actor->decision.flags221 & 1)) {
        switch (clip) {
        case 0x2ac: {
            s32 sign = mirrored == 0 ? 1 : -1;
            heading = (u16)(heading + (u16)(sign * 0x4000));
        } break;
        default: {
            s32 sign = mirrored == 0 ? 1 : -1;
            heading = (u16)(heading - (u16)(sign * 0x4000));
        } break;
        }
        D_00591E6C[0] += (f32)func_00BBB990(heading, 16);
        D_00591E74[0] += (f32)func_00BBB9C0(heading, 16);
    }
}

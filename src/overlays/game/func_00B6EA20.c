/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
#include "pes6/player_appearance.h"
extern void func_00AA5D20(PairedActor *, s32, f32, f32);
extern void func_00207BE0(PairedPlayback *);
extern s32 func_009B33A0(PairedActor *, s32, s32);
extern s32 func_00207D80(PairedPlayback *, s32 frame);
extern void func_00BD4040(PairedContext *, s32 mode);
void func_00B6EA20(PairedContext *pair) {
    PairedActor *actor = pair->actor;
    u64 distance;
    const Pes6PlayerAppearance *clip;
    func_00AA5D20(actor, 0x2c0, actor->aimX, actor->aimZ);
    func_00207BE0(pair->actor->playback);
    actor = pair->actor;
    distance = (u32)func_009B33A0(actor, (s32)actor->aimX, (s32)actor->aimZ);
    clip = func_00208310(0x2c0);
    if (distance <= 0x310000U && func_00207D80(pair->actor->playback, 2 * clip->phase1 + 1)) {
        pair->actor->action = 2;
        func_00BD4040(pair, 1);
        return;
    }
    actor = pair->actor;
    if (actor->playback->clip == 0x38c) {
        actor->field62 = 0;
        return;
    }
}

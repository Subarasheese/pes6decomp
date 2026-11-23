/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#include "pes6/paired_player_action.h"
extern void func_00B2ACF0(PairedContext *), func_00B89910(PairedContext *),
    func_00B89780(PairedContext *), func_00208610(PairedPlayback *),
    func_00209820(PairedPlayback *), func_00B35E10(PairedContext *, float *, float *),
    func_00BD4040(PairedContext *, s32), func_00BD3BA0(PairedContext *, s32, s32);
extern s32 func_00207D10(PairedPlayback *);
extern u8 func_00BD45B0(u16);
void func_00B9CEA0(PairedContext *ctx) {
    func_00B2ACF0(ctx);
    func_00B89910(ctx);
    if (func_00207D10(ctx->actor->playback)) {
        PairedActor *actor = ctx->actor;
        actor->action = actor->previousAction;
        func_00B89780(ctx);
        func_00208610(ctx->actor->playback);
        actor = ctx->actor;
        if ((u16)actor->action == 0x80) {
            s32 next;
            func_00B35E10(ctx, &actor->aimX, &actor->aimZ);
            next = (u8)func_00BD45B0(ctx->actor->playback->clip);
            if (next != 7)
                func_00BD4040(ctx, next);
            else
                func_00BD4040(ctx, 1);
            func_00BD3BA0(ctx, 5, 1);
        }
    }
}

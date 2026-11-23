/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern s32 func_00B35C60(PairedContext *), func_00B36450(void),
    func_002079F0(PairedPlayback *, s32);
extern u32 func_009B33A0(PairedActor *, s32, s32);
extern void func_00B364D0(u32), func_00B36400(s32, s32);
extern s32 func_00B9E2B0(PairedContext *);
void func_00BDF580(PairedContext *ctx) {
    s32 clip = 0x2134;
    u8 mirrored = func_00B35C60(ctx);
    PairedActor *actor = ctx->actor;
    func_00BD3CF0(ctx, actor->aimX, actor->aimZ);
    actor = ctx->actor;
    if (func_009B33A0(actor, (s32)actor->aimX, (s32)actor->aimZ) >= 0x640000U) {
        if (func_00B36450() && ctx->control->mode12 == 4) {
            PairedPlayback *playback = ctx->actor->playback;
            if (playback->mirrored != mirrored)
                clip = 0xdac;
            if (func_002079F0(playback, clip)) {
                func_00209A00(ctx->actor->playback, 0x59a, 0);
                ctx->actor->playback->mirrored = mirrored;
                ctx->actor->repeats = 0;
                ctx->actor->action = 0xb2;
                func_00B364D0(2);
            }
        }
    } else {
        func_00B36400(1, 1);
        func_00B9E2B0(ctx);
    }
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern s32 func_00207D10(PairedPlayback *);
extern s32 func_002079F0(PairedPlayback *, s32);
extern void func_00208610(PairedPlayback *);
extern void func_00B2ACF0(PairedContext *);
extern s32 func_00BAC710(u16), func_00BB1310(s32);
extern void func_00BD4040(PairedContext *, s32), func_00C32E60(PairedContext *);
void func_00C37FF0(PairedContext *ctx) {
    PairedActor *actor;
    int clip = func_00BAC710(ctx->actor->playback->clip);
    switch (clip) {
    case 0x1AF:
    case 0x1B3:
    case 0x1B4:
        func_00B2ACF0(ctx);
        if (func_00207D10(ctx->actor->playback)) {
            func_00208610(ctx->actor->playback);
            func_00BD4040(ctx, 1);
            ctx->actor->action = 1;
        }
        break;
    default:
        func_00C32E60(ctx);
        actor = ctx->actor;
        func_00BD3CF0(ctx, actor->aimX, actor->aimZ);
        if (func_002079F0(ctx->actor->playback, 0x24C3)) {
            func_00209A00(ctx->actor->playback, (u16)func_00BB1310(0x1AF), 0);
        }
        break;
    }
}

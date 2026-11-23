/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern u16 D_00CBCD64[];
extern u8 D_00CBCD84[];
extern void func_00B8DE20(PairedContext *, s32, u16, u16, s32);

void func_00B8B980(PairedContext *ctx) {
    PairedContext *partner = func_00B2A420(func_00BF6270());
    func_00BD3CF0(ctx, ctx->actor->aimX, ctx->actor->aimZ);
    if (func_00B364C0() == 2 && partner->actor->repeats && D_00CBCD81[0] < 4 &&
        func_00B3B1F0(ctx)) {
        if (D_00CBCD81[0] != 3) {
            if (D_00CBCD81[0] < 3) {
                adjust_paired_speed(ctx);
            }
        } else {
            func_00B2A420(D_00CBCD84[0]);
            D_00CBCD81[0] = 4;
            partner->actor->repeats = 0;
            ctx->actor->actionGroup = 0xff;
            ctx->control->enabled = 1;
            func_0027A600(ctx->actor, 0);
            ctx->control->countdown = 0;
            ctx->control->flag0e = 0;
            ctx->actor->heading = D_00CBCAFE[0];
            ctx->actor->previousHeading = ctx->actor->heading;
            ctx->actor->playback->mirrored = partner->actor->playback->mirrored;
            func_00209A00(ctx->actor->playback, 0x59e, 0);
            func_00207390(ctx->actor->playback, 8);
            func_00B8DE20(partner, 2, D_00CBCD64[0], (D_00CBCD64[0] + D_00CBCD74[0]) & 0xffff, 1);
            func_00B84330(ctx, func_00BF6270() & 0xff, ctx->actor->heading, 0, D_00CBCD74[0], 2);
            ctx->actor->action = 0x40;
        }
    } else if (ctx->control->triggers[2] & 0x80) {
        adjust_paired_speed(ctx);
    } else if (D_00CBCD81[0] == 0xff) {
        --D_00CBCD8C[0];
        func_00B89C70(ctx);
    }
}

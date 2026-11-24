/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern void func_00B364D0(s32), func_00BD4040(PairedContext *, s32),
    func_00BD3BA0(PairedContext *, s32, s32), func_00BD3B80(PairedContext *, u8);
extern f32 D_00CBCAD8[], D_00CBCADC[];
extern u8 D_00CBCD8E[];
void func_00B923D0(PairedContext *ctx) {
    if (ctx == func_00B2A420(func_00BF6270())) {
        func_00B364D0(0);
        func_00BD4040(ctx, 5);
        func_00BD3BA0(ctx, 4, 1);
        ctx->actor->action = 0x2f;
        if (D_00CBCAD8[0] * D_00CBCADC[0] < 0.0f) {
            D_00CBCD8E[0] = 0;
        } else {
            D_00CBCD8E[0] = 1;
        }
        func_00BD3B80(ctx, D_00CBCD8E[0]);
        ctx->actor->field50 = 1;
    } else if (ctx->control->alternate) {
        if (ctx->control->mode12 != 2) {
            s32 group;
            if (ctx->control->distance > 64)
                group = 4;
            else
                group = 3;
            func_00BD4040(ctx, group);
            ctx->actor->action = 0x37;
        } else {
            func_00BD3CF0(ctx, ctx->actor->aimX, ctx->actor->aimZ);
            return;
        }
    } else
        ctx->actor->action = 0x7f;
}

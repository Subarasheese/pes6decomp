/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x12], group, reserved13[0x34 - 0x13];
    u32 distance;
    u8 reserved38[0x50 - 0x38], active, ready;
} SetPiecePlan;
typedef struct {
    Pes6MatchPlayer *actor;
    SetPiecePlan *plan;
} SetPieceActor;
extern s32 func_00BF6270(void);
extern SetPieceActor *func_00B2A420(s32 id);
extern void func_00B364D0(s32), func_00BD4040(SetPieceActor *, s32),
    func_00BD3BA0(SetPieceActor *, s32, s32), func_00BD3B80(SetPieceActor *, u8),
    func_00BD3CF0(SetPieceActor *, f32 x, f32 z);
extern f32 D_00CBCAD8[], D_00CBCADC[];
extern u8 D_00CBCD8E[];
void func_00B93D10(SetPieceActor *ctx) {
    if (ctx == func_00B2A420(func_00BF6270())) {
        func_00B364D0(0);
        func_00BD4040(ctx, 3);
        func_00BD3BA0(ctx, 4, 1);
        if (D_00CBCAD8[0] * D_00CBCADC[0] < 0) {
            D_00CBCD8E[0] = 0;
            func_00BD3B80(ctx, D_00CBCD8E[0]);
        } else {
            D_00CBCD8E[0] = 1;
            func_00BD3B80(ctx, D_00CBCD8E[0]);
        }
        ctx->actor->action = 0x27;
    } else if (ctx->plan->ready) {
        if (ctx->plan->group != 2) {
            s32 group;
            if (ctx->plan->distance > 64)
                group = 4;
            else
                group = 3;
            func_00BD4040(ctx, group);
            ctx->actor->action = 0x2d;
        } else {
            func_00BD3CF0(ctx, ctx->actor->aimX, ctx->actor->aimZ);
            return;
        }
    } else
        ctx->actor->action = 0x7f;
}

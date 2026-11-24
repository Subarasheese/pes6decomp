/* compiler: mwcc-3.0.1b151 */
#include "pes6/set_piece_rotation.h"
extern void func_00B364D0(s32), func_00B846A0(PairedContext *);
extern u8 D_00CBCAD3[], D_00CBCD8E[];
void func_00B87540(PairedContext *ctx) {
    u16 clip;
    func_00B2A420(func_00BF6270());
    func_00BD3CF0(ctx, ctx->actor->aimX, ctx->actor->aimZ);
    if (D_00CBCD81[0] == 1) {
        D_00CBCD81[0] = 2;
        func_00B364D0(2);
        captureSetPiece(ctx);
        ctx->actor->actionGroup = 0;
        switch (D_00CBCAD3[0]) {
        case 2:
            clip = 0x59c;
            break;
        case 3:
            clip = 0x59e;
            break;
        case 4:
            clip = 0x59a;
            break;
        default:
            clip = 0x2ed;
            break;
        }
        ctx->actor->playback->mirrored = D_00CBCD8E[0];
        ctx->actor->heading = ctx->actor->previousHeading;
        ctx->actor->repeats = 0;
        func_00209A00(ctx->actor->playback, clip, 0);
        func_00207390(ctx->actor->playback, 8);
        func_00B846A0(ctx);
        ctx->actor->action = 0x17;
    }
}

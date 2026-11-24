/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/set_piece_rotation.h"
void func_00B90CA0(PairedContext *ctx) {
    func_00B2A420(func_00BF6270());
    {
        PairedActor *player = ctx->actor;
        func_00BD3CF0(ctx, player->aimX, player->aimZ);
    }
    if (func_00B364C0() == 2) {

        PairedControl *control = ctx->control;
        u32 distance = control->value38;
        if (distance < 0x600) {
            func_00B89C70(ctx);
        } else {
            if (distance < (u32)pairedApproachLimit()) {
                exchangeSetPieceActors(ctx, control);
                switch (D_00CBCD82[SET_PIECE_QUEUE_COUNT]) {
                case 1:
                    ctx->actor->action = 0x31;
                    break;
                case 2:
                    ctx->actor->action = 0x33;
                    break;
                case 3:
                    ctx->actor->action = 0x35;
                    break;
                }
            }
        }
    } else if (D_00CBCD81[0] == 0xff)
        func_00B89C70(ctx);
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_transition.h"
typedef struct {
    u8 reserved[6];
    s16 countdown;
} Control;
typedef struct {
    PlayerTransitionActor *actor;
    Control *control;
} Transition;
void func_00BDFDF0(Transition *ctx) {
    func_00B2ACF0(ctx);
    func_00209820(ctx->actor->animation);
    if (func_00207D10(ctx->actor->animation)) {
        func_00208610(ctx->actor->animation);
        func_00BD4040(ctx, 3);
        func_00BD3BA0(ctx, 5, 1);
        ctx->control->countdown = 0x542;
        func_00B35E10(ctx, &ctx->actor->field6C, &ctx->actor->field70);
        ctx->actor->stage = 0x90;
    }
}

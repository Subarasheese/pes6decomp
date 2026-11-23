/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_transition.h"
typedef struct {
    u8 reserved[0x50];
    u8 flag50;
} Control;
typedef struct {
    PlayerTransitionActor *actor;
    Control *control;
} Transition;
extern void func_00BD3BE0(void *, s32);
void func_00B86950(Transition *ctx) {
    u8 group;
    func_00B2ACF0(ctx);
    if (func_00207D10(ctx->actor->animation)) {
        func_00B35E10(ctx, &ctx->actor->field6C, &ctx->actor->field70);
        func_00208610(ctx->actor->animation);
        group = func_00BD45B0(ctx->actor->animation->clip);
        if (group == 1)
            func_00BD3BE0(ctx, group);
        ctx->control->flag50 = 0;
        ctx->actor->stage = 0x7f;
    }
}

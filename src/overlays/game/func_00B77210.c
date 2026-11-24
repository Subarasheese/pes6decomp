/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off
#include "pes6/shootout_pose.h"

extern void func_009832C0(Pes6MatchPlayer *actor, s8 action);
void func_00B77210(ShootoutContext *ctx) {
    s32 id;
    s32 slot;
    if (ctx->actor->id == D_00CBBE04[0] || ctx->actor->id == D_00CBBE05[0])
        return;
    if (ctx->actor->id == 1 || ctx->actor->id == 12)
        ctx->actor->side = ctx->teammate->side;
    ctx->actor->x = (f32)-func_00BBB8C0(0x700);
    id = ctx->actor->id;
    slot = id;
    if (slot >= 12)
        slot -= 11;
    if ((u8)id >= 12) {
        ctx->actor->z = (f32)(slot * 256 + (func_00BBB7F0(256) + 768));
    } else {
        ctx->actor->z = (f32)(-768 - func_00BBB7F0(256) - slot * 256);
    }
    if (ctx->actor->id == 1 || ctx->actor->id == 12) {
        positionGoalkeeper(ctx);
        ctx->actor->speed = 0;
        ctx->pose->event = 8;
        ((PoseMotion *)ctx->actor)->variation = 0xff;
        applyShootoutPose(ctx);
        return;
    } else {
        ctx->actor->info->field2D = 0;
        ctx->actor->speed = 0;
        ((PoseMotion *)ctx->actor)->heading = 0x8000;
        ctx->pose->event = 8;
        ((PoseMotion *)ctx->actor)->variation = 0xff;
        applyShootoutPose(ctx);
        func_009832C0(ctx->actor, 0x37);
        return;
    }
}

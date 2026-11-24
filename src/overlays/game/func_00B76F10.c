/* compiler: mwcc-3.0.1b151 */
#include "pes6/shootout_pose.h"

typedef struct {
    u8 reserved00[12];
    s16 shootoutGoals;
    u8 reserved0e[0x2f4 - 14];
} TeamScore;
extern TeamScore *D_00CB3300[];
extern void func_001A58E0(Pes6PlayerFieldState *, u8), func_00B78620(Pes6MatchPlayer *);
void func_00B76F10(ShootoutContext *ctx) {
    if (ctx->actor->id == D_00CBBE04[0] || ctx->actor->id == D_00CBBE05[0])
        return;
    if (ctx->actor->id == 1 || ctx->actor->id == 12)
        ctx->actor->side = ctx->teammate->side;
    if (D_00CB3300[0][ctx->actor->side].shootoutGoals >
        D_00CB3300[0][(u8)(ctx->actor->side ^ 1)].shootoutGoals) {
        if (ctx->actor->id == 1 || ctx->actor->id == 12) {
            ctx->actor->info->active = 0;
            func_001A58E0(ctx->actor->info->fieldState, 0);
            return;
        } else {
            ctx->actor->speed = 0;
            ((PoseMotion *)ctx->actor)->heading = 0x8000;
        }
    } else {
        positionGoalkeeper(ctx);
        func_00B78620(ctx->actor);
        switch (func_00BBB8C0(6)) {
        case 0:
            ctx->pose->event = 8;
            ((PoseMotion *)ctx->actor)->variation = func_00BBB8C0(4);
            break;
        case 1:
            ctx->pose->event = 1;
            ((PoseMotion *)ctx->actor)->variation = func_00BBB8C0(4);
            break;
        case 2:
            ctx->pose->event = 15;
            ((PoseMotion *)ctx->actor)->variation = func_00BBB8C0(4);
            break;
        case 3:
            ctx->pose->event = 9;
            break;
        case 4:
            ctx->pose->event = 6;
            ((PoseMotion *)ctx->actor)->variation = func_00BBB8C0(4);
            break;
        case 5:
        default:
            ctx->pose->event = 2;
            ((PoseMotion *)ctx->actor)->variation = func_00BBB8C0(4);
            break;
        }
        applyShootoutPose(ctx);
    }
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/shootout_pose.h"
extern u8 D_00CBBE04[];
extern u8 Pes6MatchFlow_GetState(s32);
static inline void applyKickerClip(Pes6MatchPlayer *actor) {
    switch (actor->info->unk30) {
    case 0x40a:
    case 0x40b:
        actor->action = 5;
        break;
    default:
        actor->action = 3;
        break;
    }
}
void func_00B77510(ShootoutContext *ctx) {
    Pes6MatchPlayer *actor;
    switch (Pes6MatchFlow_GetState(2)) {
    case 8:
        func_00B77210(ctx);
        actor = ctx->actor;
        if (actor->id == D_00CBBE04[0]) {
            applyKickerClip(actor);
        }
        break;
    case 9:
        actor = ctx->actor;
        if (actor->id == D_00CBBE04[0]) {
            applyKickerClip(actor);
        }
        break;
    case 10:
        actor = ctx->actor;
        if (actor->id == D_00CBBE04[0]) {
            applyKickerClip(actor);
        } else
            func_00B76F10(ctx);
        break;
    }
}

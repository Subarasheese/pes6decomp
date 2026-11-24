/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x50], active;
} SetPiecePlan;
typedef struct {
    Pes6MatchPlayer *actor;
    SetPiecePlan *plan;
} SetPieceActor;
typedef struct {
    u8 reserved00[0x26];
    u16 heading, target;
} SetPieceFacing;
extern s32 func_00BF6270(void);
extern SetPieceActor *func_00B2A420(s32 id);
extern s32 func_009B33F0(Pes6MatchPlayer *a, Pes6MatchPlayer *b),
    func_009B3220(u16 heading, u16 target, s32 limit);
extern void func_00209A00(Pes6PlayerInfo *, s32 clip, s32 frame),
    func_00207390(Pes6PlayerInfo *, s32);
void func_00B93FA0(SetPieceActor *ctx) {
    u16 target, heading, difference;
    SetPieceActor *selected = func_00B2A420(func_00BF6270());
    ctx->plan->active = 1;
    ctx->actor->actionGroup = 0;
    target = (u16)func_009B33F0(ctx->actor, selected->actor);
    heading = ((SetPieceFacing *)ctx->actor)->heading;
    difference = (target - heading) + 65536;
    if (difference <= 0x8000) {
        ((SetPieceFacing *)ctx->actor)->heading =
            func_009B3220((u16)(heading - 1024), heading, 0x2000);
        ((SetPieceFacing *)ctx->actor)->target = ((SetPieceFacing *)ctx->actor)->heading;
        ctx->actor->info->field2D = 1;
    } else {
        ((SetPieceFacing *)ctx->actor)->heading =
            func_009B3220((u16)(heading + 1024), heading, 0x2000);
        ((SetPieceFacing *)ctx->actor)->target = ((SetPieceFacing *)ctx->actor)->heading;
        ctx->actor->info->field2D = 0;
    }
    func_00209A00(ctx->actor->info, 0x52b, 0);
    func_00207390(ctx->actor->info, 10);
    ctx->actor->action = 0x7e;
}

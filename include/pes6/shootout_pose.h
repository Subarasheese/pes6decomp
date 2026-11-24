#ifndef PES6_SHOOTOUT_POSE_H
#define PES6_SHOOTOUT_POSE_H

#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x4c], event;
} ShootoutPose;
typedef struct {
    Pes6MatchPlayer *actor;
    ShootoutPose *pose;
    Pes6MatchPlayer *teammate;
} ShootoutContext;
typedef struct {
    u8 reserved00[0x26];
    u16 heading;
    u8 reserved28[0x4e - 0x28], variation;
} PoseMotion;
extern u8 D_00CBBE04[], D_00CBBE05[];
extern s32 func_009B3480(Pes6MatchPlayer *actor, f32 x, f32 z), func_00BBB8C0(s32 range),
    func_00BBB7F0(s32 spread);
/* Several event numbers select the same player action. Values above 51 keep the current action. */
static inline void applyShootoutPose(ShootoutContext *ctx) {
    switch (ctx->pose->event) {
    case 2:
    case 5:
    case 6:
    case 7:
    case 10:
    case 11:
    case 13:
    case 14:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 48:
    case 49:
    case 50:
    case 51:
        ctx->actor->action = 12;
        break;
    case 0:
    case 1:
    case 3:
    case 4:
    case 8:
    case 9:
    case 12:
    case 38:
        ctx->actor->action = 14;
        break;
    case 15:
    case 16:
    case 17:
        ctx->actor->action = 17;
        break;
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
        ctx->actor->action = 21;
        break;
    }
}
static inline void positionGoalkeeper(ShootoutContext *ctx) {
    if (ctx->actor->id == 1) {
        ctx->actor->x = -12953.0f;
        ctx->actor->z = -5160.0f;
    } else if (ctx->actor->id == 12) {
        ctx->actor->x = -12953.0f;
        ctx->actor->z = 5160.0f;
    }
    ((PoseMotion *)ctx->actor)->heading = func_009B3480(ctx->actor, -13465.0f, 0.0f);
}

extern void func_00B76F10(ShootoutContext *ctx), func_00B77210(ShootoutContext *ctx);

#endif

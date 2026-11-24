#ifndef PES6_MATCH_SHOT_H
#define PES6_MATCH_SHOT_H

#include "pes6/ball.h"
#include "pes6/match_player.h"
#include "pes6/heading_motion.h"

enum { SHOT_TRAJECTORY_FRAMES = 224, SHOT_TEAM_PLAYERS = 11, SHOT_PLAYER_IDS = 23 };
typedef struct {
    u8 pad00[0x1a];
    u16 previousRole;
    u8 pad1C[8], controlMode, pad25;
    u16 facing, movement;
    u8 pad2A[0x10];
    u16 timingMode;
    u8 pad3C[2], pending, pad3F[8], inputSlot;
    u8 pad48[2], command, pad4B, inputLatch, directionState, countdown, pad4F, targetFrame;
    u8 pad51[7];
    s32 runLimit;
    u8 powerScale, pad5D[2], contestValue, distanceScale, pad61, contactTimer, pad63[0x2d];
    s32 heightLimit;
    u8 pad94[4];
    s32 shotMode;
    u8 pad9C[4];
    s32 savedHeight;
    u8 padA4[4];
    union {
        s32 shotAngle;
        u16 shotHeading;
    };
    u8 padAC[4];
    u32 flags;
    u8 padB4[0x3c];
    f32 velocityX, velocityY, velocityZ;
    u16 alternateHeading, secondaryHeading;
    u8 active, trigger, inputTicks, pad103;
    u8 pad104[8];
    u16 ballHeading;
    u8 pad10E[2];
    u32 ballDistanceSquared;
    u8 pad114[4];
    u16 opponentHeading;
    u8 pad11A[2];
    u32 opponentDistanceSquared;
    u16 approachHeading;
    u8 pad122[6];
    u16 playerHeadings[SHOT_PLAYER_IDS];
    u8 pad156[2];
    u32 playerDistancesSquared[SHOT_PLAYER_IDS];
    u8 pad1B4[0x1a];
    s16 targetX, targetZ;
    u8 pad1D2[0x52];
    u32 startHeading, endHeading;
    u8 pad22C[0x14];
} ShotPlayerFields;
/* The shot and animation routines index the same 0x240-byte player table. */
typedef union {
    Pes6MatchPlayer player;
    HeadingActor heading;
    ShotPlayerFields shot;
} ShotActor;
typedef struct {
    u8 pad00[0x68], candidateFrame, pad69[0x13];
    s32 shotHeight;
    u8 pad80[0x7c];
    s32 speeds[SHOT_TRAJECTORY_FRAMES];
    f32 x[SHOT_TRAJECTORY_FRAMES], y[SHOT_TRAJECTORY_FRAMES], z[SHOT_TRAJECTORY_FRAMES];
    u8 padEFC[0x544];
    s32 projectionMode, projectionSpeed;
    f32 projectionVy;
    u16 projectionAngle;
    u8 pad144E, projecting;
    u16 projectionTurn;
    u8 pad1452[2];
    f32 targetX, targetY, targetZ;
} ShotBallFields;
typedef union {
    Pes6Ball ball;
    ShotBallFields shot;
} ShotBall;
#define shotBall ((ShotBall *)Pes6Ball_Current)
/* Each side keeps a start and end prediction for each of its eleven players. */
typedef struct {
    u8 status, secondaryStatus, pad02[2];
    f32 startX, startY, startZ, endX, endY, endZ;
    u16 startFrame, endFrame;
    u32 tick;
} ShotTarget;
extern ShotTarget D_00591F44[][SHOT_TEAM_PLAYERS];
extern u8 D_00591972[][36], D_00591974[][36];
extern s32 func_00A427F0(ShotActor *actor, s32 held);
extern s32 func_00A14EC0(Pes6MatchPlayer *player, Pes6MatchPlayer *observer);
extern void func_00A15300(ShotActor *actor, ShotActor *observer, f32 x, s32 frame, f32 y, f32 z);
extern void func_00A15540(ShotActor *actor, ShotActor *observer);
extern void func_00A515A0(ShotActor *actor);
typedef char check_shot_player_size[sizeof(ShotPlayerFields) == 0x240 ? 1 : -1];
typedef char check_shot_ball_targets[sizeof(ShotBallFields) == 0x1460 ? 1 : -1];
typedef char check_shot_target_stride[sizeof(ShotTarget) == 0x24 ? 1 : -1];

static inline s32 shotKickingFoot(ShotActor *actor) {
    const Pes6SquadSetupPlayer *player =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return pes6LineupKickingFoot(&player->current);
}

static inline s32 shotMagnitude(s32 value) { return value > 0 ? value : -value; }
static inline u8 shotControllerHasLayout(u8 slot) {
    if (slot >= 8)
        return 0;
    return D_00591972[slot][0];
}

static inline u8 shotControllerUsesAlternateInput(u8 slot) {
    if (slot >= 8)
        return 0;
    return D_00591974[slot][0];
}

static inline u8 shotPrimaryInput(ShotActor *actor) {
    if ((actor->shot.flags & 0x400) && func_00A427F0(actor, 1))
        return 1;
    return 0;
}

static inline u8 shotTargetInput(ShotActor *actor) {
    if (!shotControllerHasLayout(actor->shot.inputSlot))
        return 0;
    if (!shotControllerUsesAlternateInput(actor->shot.inputSlot)) {
        if (actor->shot.flags & 2)
            return 1;
    } else {
        if (actor->shot.trigger)
            return 1;
    }
    return 0;
}

/* The index advances each of the parallel trajectory arrays by one word per frame. */
static inline const ShotBallFields *shotPredictionAt(s32 frame) {
    u32 offset = sizeof(f32) * frame;
    return (const ShotBallFields *)(offset + (u32)shotBall);
}

#endif

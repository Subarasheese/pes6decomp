#ifndef PES6_MATCH_GOALKEEPER_H
#define PES6_MATCH_GOALKEEPER_H

#include "pes6/ball.h"
#include "pes6/match_player.h"
#include "pes6/heading.h"
#include "pes6/heading_motion.h"

enum { KEEPER_TRAJECTORY_FRAMES = 224, KEEPER_ACTOR_SLOTS = 23 };
typedef struct {
    u8 pad00[0x10], controller, pad11[9];
    u16 previousRole;
    u8 pad1C[4];
    s32 previousSpeed;
    u8 field24, pad25;
    u16 facing, movement;
    u8 pad2A[0xe];
    u16 turnCorrection;
    u8 pad3A[0x14], countdown, pad4F[9];
    s32 response;
    u8 pad5C[0x54];
    u32 flags;
    u8 padB4[0x3c];
    f32 velocityX, velocityY, velocityZ;
    u8 padFC[0x10];
    u16 ballHeading;
    u8 pad10E[2];
    u32 ballDistanceSquared;
    u8 pad114[0x14];
    u16 playerHeadings[KEEPER_ACTOR_SLOTS];
    u8 pad156[2];
    u32 playerDistancesSquared[KEEPER_ACTOR_SLOTS];
    u8 pad1B4[0x1a];
    s16 targetX, targetZ;
    u8 pad1D2[0x4f], flags221, pad222[30];
} KeeperFields;
/* All three views refer to the same 0x240-byte match player. */
typedef union {
    Pes6MatchPlayer player;
    KeeperFields decision;
    HeadingActor heading;
} KeeperActor;
typedef struct {
    u8 pad00[0x68], candidateFrame, pad69[0x413];
    f32 x[KEEPER_TRAJECTORY_FRAMES], y[KEEPER_TRAJECTORY_FRAMES], z[KEEPER_TRAJECTORY_FRAMES];
    u8 padEFC[0x558];
    f32 targetX, targetY, targetZ;
} KeeperBallFields;
typedef union {
    Pes6Ball ball;
    KeeperBallFields decision;
} KeeperBall;
#define keeperBall ((KeeperBall *)Pes6Ball_Current)
typedef char check_keeper_actor_size[sizeof(KeeperActor) == 0x240 ? 1 : -1];
typedef char check_keeper_ball_target[sizeof(KeeperBallFields) == 0x1460 ? 1 : -1];

static inline s32 heightScaledDistance(KeeperActor *actor, s32 distance) {
    const Pes6LineupProfile *profile =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot].current;
    return distance * ((s32)profile->profile.low.height + 148) / 183;
}
static inline s32 validOpponent(s32 id, s32 low, s32 high) {
    s32 valid = 0;
    if (low < id) {
        if (id < high)
            valid = 1;
    }
    return valid;
}
static inline void applyClipTurn(KeeperActor *actor) {
    s32 sign = actor->heading.motion->mirrored == 0 ? 1 : -1;
    actor->decision.facing -= (u16)(actor->decision.turnCorrection * sign);
}
static inline void reverseClipTurn(KeeperActor *actor) {
    s32 sign = actor->heading.motion->mirrored == 0 ? 1 : -1;
    actor->decision.facing += (u16)(actor->decision.turnCorrection * sign);
}

/* The x, y and z prediction arrays have the same frame index and a 224-float stride. */
static inline const KeeperBallFields *predictionAt(s32 frame) {
    u32 offset = sizeof(f32) * frame;
    return (const KeeperBallFields *)(offset + (u32)Pes6Ball_Current);
}

#endif

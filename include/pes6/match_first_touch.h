#ifndef PES6_MATCH_FIRST_TOUCH_H
#define PES6_MATCH_FIRST_TOUCH_H

#include "pes6/ball.h"
#include "pes6/match_player.h"
#include "pes6/heading_motion.h"

enum { TOUCH_TRAJECTORY_FRAMES = 224, TOUCH_PLAYER_COUNT = 23 };
typedef struct {
    u8 pad00[0x10], controller, pad11[9];
    u16 previousAction;
    u8 pad1C[4];
    s32 previousSpeed;
    u8 controlMode, pad25;
    u16 facing, movement;
    u8 pad2A[10];
    u16 requestedHeading;
    u8 pad36[0x14], command, pad4B, inputLatch, directionState, pad4E, chosenFoot, targetFrame,
        pad51[7];
    s32 runLimit;
    u8 powerScale, pad5D[0x33];
    s32 heightLimit, chosenDirection;
    u8 pad98[0x10];
    s32 shotAngle;
    u8 padAC[4];
    u32 flags;
    u8 padB4[0x58];
    u16 ballHeading;
    u8 pad10E[2];
    u32 ballDistanceSquared;
    u8 pad114[4];
    u16 opponentHeading;
    u8 pad11A[2];
    u32 opponentDistanceSquared;
    u16 approachHeading;
    u8 pad122[6];
    u16 playerHeadings[TOUCH_PLAYER_COUNT];
    u8 pad156[2];
    u32 playerDistancesSquared[TOUCH_PLAYER_COUNT];
    u8 pad1B4[0x6c], field220, flags221, field222, field223;
    u8 pad224[0x1c];
} TouchPlayerFields;
enum { TOUCH_TEAM_SLOTS = 3 };
typedef struct {
    u8 pad00[0x154];
    u16 slot[TOUCH_TEAM_SLOTS];
    u8 kind[TOUCH_TEAM_SLOTS], value[TOUCH_TEAM_SLOTS], pad160[8];
} TouchTeamSlots;
extern TouchTeamSlots Pes6MatchSides[];
typedef char check_touch_team_size[sizeof(TouchTeamSlots) == 0x168 ? 1 : -1];

typedef union {
    Pes6MatchPlayer player;
    HeadingActor heading;
    TouchPlayerFields touch;
} TouchActor;
typedef struct {
    u8 pad00[0x68], candidateFrame, pad69;
    u16 curl;
    u8 curlDirection, pad6D[7];
    s32 spin;
    u8 pad78[0x404];
    f32 x[TOUCH_TRAJECTORY_FRAMES], y[TOUCH_TRAJECTORY_FRAMES], z[TOUCH_TRAJECTORY_FRAMES];
    u8 padEFC[0x544];
    s32 projectionSpin, projectionSpeed;
    f32 projectionVy;
    u16 projectionCurl;
    u8 projectionCurlDirection, projectionStep;
    u16 projectionHeading;
    u8 pad1452[2];
    f32 targetX, targetY, targetZ;
} TouchBallFields;
typedef union {
    Pes6Ball ball;
    TouchBallFields trajectory;
} TouchBall;
#define touchBall ((TouchBall *)Pes6Ball_Current)

typedef char check_touch_player_size[sizeof(TouchPlayerFields) == 0x240 ? 1 : -1];
typedef char check_touch_ball_projection[sizeof(TouchBallFields) == 0x1460 ? 1 : -1];
extern s32 func_00288670(s32 ability, s32 scale);
static inline s32 touchRating(TouchActor *actor, s32 index, s32 scale) {
    Pes6SquadSetupPlayer *player =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return func_00288670(player->current.base[index] & 127, scale);
}
static inline s32 touchMagnitude(s32 value) { return value > 0 ? value : -value; }
static inline s32 touchHeight(TouchActor *actor, s32 distance) {
    const Pes6SquadSetupPlayer *entry =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return distance * ((s32)entry->current.profile.low.height + 148) / 183;
}
static inline s32 touchFoot(TouchActor *actor) {
    const Pes6SquadSetupPlayer *player =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return pes6LineupKickingFoot(&player->current);
}
/* A frame index advances the X, Y and Z predictions by the same byte offset. */
static inline const TouchBallFields *touchPredictionAt(s32 frame) {
    u32 offset = sizeof(f32) * frame;
    return (const TouchBallFields *)(offset + (u32)touchBall);
}

static inline void touchCopyBallPosition(void) {
    touchBall->trajectory.targetX = Pes6Ball_Current->pos[0];
    touchBall->trajectory.targetY = Pes6Ball_Current->pos[1];
    touchBall->trajectory.targetZ = Pes6Ball_Current->pos[2];
}
static inline void touchBeginPrediction(s32 heading, s32 speed, s32 height) {
    touchBall->trajectory.projectionHeading = (u16)heading;
    touchBall->trajectory.projectionCurl = touchBall->trajectory.curl;
    touchBall->trajectory.projectionCurlDirection = touchBall->ball.curlDir[0];
    touchBall->trajectory.projectionSpeed = speed;
    touchBall->trajectory.projectionSpin = touchBall->trajectory.spin;
    touchBall->trajectory.projectionVy = (f32)((-height) * 188);
    touchBall->trajectory.projectionStep = 4;
}

#endif

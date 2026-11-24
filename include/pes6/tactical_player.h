#ifndef PES6_TACTICAL_PLAYER_H
#define PES6_TACTICAL_PLAYER_H

#include "pes6/match_player.h"
#include "pes6/ball.h"
enum { TACTICAL_PLAYERS = 23, SUPPORT_SLOTS = 3 };
/* This view uses match-space headings, squared distances and the current tactical order. */
typedef struct {
    u8 pad00[0x26];
    u16 facing, movement, pad2A, standardHeading, turningHeading, waitingHeading;
    u8 pad32[0x48 - 0x32], targetId, pad49[3], choice, pad4D[0x74 - 0x4d];
    f32 plannedX, plannedZ;
    u8 pad7C[0xb0 - 0x7c];
    u32 flags, command;
    u8 padB8[0xf0 - 0xb8];
    f32 velocityX, velocityY, velocityZ;
    u8 padFC[4], active, trigger, pad102[10];
    u16 ballHeading;
    u8 pad10E[2];
    u32 ballDistanceSquared, distance114;
    u16 opponentHeading;
    u8 pad11A[2];
    u32 opponentDistanceSquared;
    u16 approachHeading;
    u8 pad122[2];
    u32 approachDistanceSquared;
    u16 headings[TACTICAL_PLAYERS];
    u8 pad156[2];
    u32 distancesSquared[TACTICAL_PLAYERS];
    u8 nearby[2][11], pad1CA[0x1dd - 0x1ca], commandMode, markMode, pad1DF;
    s32 decision, argument, target, recordedFlags, wait, cooldown;
    u8 pad1F8[0x48];
} TacticalFields;
typedef union {
    Pes6MatchPlayer player;
    TacticalFields ai;
} TacticalActor;
typedef char tactical_player_stride_check[sizeof(TacticalFields) == 0x240 ? 1 : -1];
typedef struct {
    f32 x, y, z;
} SupportPoint;
typedef struct {
    u8 pad00[9], tracked[SUPPORT_SLOTS];
} SupportPlan;

#endif

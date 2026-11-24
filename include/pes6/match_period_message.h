#ifndef PES6_MATCH_PERIOD_MESSAGE_H
#define PES6_MATCH_PERIOD_MESSAGE_H

#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x37], side;
} SideMatchState;
typedef struct {
    u8 reserved00[5], side, status, reserved07[0x31];
    struct {
        u8 minute, secondary;
    } team[2];
} TeamMinutes;
typedef struct {
    s32 kind;
    u8 reserved04[0x10];
    s32 stage;
    u8 reserved18[0x14];
    s32 competition, mode;
    u8 reserved34[0x0c];
    s32 team[2];
} TeamCompetition;
typedef struct {
    u8 reserved00[0x30];
    s32 minute;
    u8 reserved34[0x0c];
    SideMatchState *match;
    TeamMinutes *times;
    TeamCompetition *competition;
} TeamMinuteJob;

/* Fields of the job manager written by the period, rank and player-group messages. */
typedef struct {
    u8 reserved00[0x1008];
    s32 side;
    u8 reserved100c[0x18];
    s32 slot, previousSlot, rank;
    u8 reserved1030[0x10], group, reserved1041[3];
    s32 index[2];
    u16 count[2];
} MatchMessageState;

MatchMessageState *Pes6Job_GetManager(void);
s32 Pes6Job_GetArg(void *job, s32 index);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030EA70(void);
s32 func_003414D0(u8 *side, s32 kind, s32 player);
s32 func_00333710(void *match, s32 side);
s32 func_00333740(void *match, s32 side);
s32 func_003336F0(void *match);
s32 func_00341AA0(s32 *playerCount, s32 side);

#endif

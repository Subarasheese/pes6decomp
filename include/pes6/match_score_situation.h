#ifndef PES6_MATCH_SCORE_SITUATION_H
#define PES6_MATCH_SCORE_SITUATION_H

#include "pes6/match_job_message.h"

typedef struct {
    u8 reserved00[4], previousSide, reserved05[3], side, reserved09[3];
    s32 result, stage, state14;
    u8 reserved18[0x0c];
    s32 state24;
    s16 goals[2];
    u32 flags2c;
    u8 type30, reserved31[3];
    u32 flags34;
} MatchSituation;

typedef struct {
    u8 reserved00[2], type, reserved03[2], flag05, reserved06[6];
    s16 previousGoals[2];
    u8 reserved10[8];
    MatchSituation situation;
} MatchSituationJob;

s32 func_0030DA70(s32 side);
s32 func_00333EA0(s32 *result, const s16 goals[2], s32 side);

#endif

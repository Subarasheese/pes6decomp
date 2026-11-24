#ifndef PES6_MATCH_SCORE_EVENT_H
#define PES6_MATCH_SCORE_EVENT_H

#include "pes6/match_job_message.h"

typedef struct {
    u8 reserved00[5], period, minute, side, reserved08[4];
    s32 result, stage, mode;
    u8 playerSide, playerSlot, enabled, reserved1b;
    s32 phase1c, phase20, outcome;
    s16 home, away;
    u32 flags;
    u8 kind30, reserved31[3];
    u32 flags34, flags38;
} MatchScoreDetail;
typedef struct MatchScoreEvent {
    u8 reserved00[2], kind, reserved03[0x11];
    s16 previousHome, previousAway;
    MatchScoreDetail match;
} MatchScoreEvent;

s32 func_0036A5D0(struct Pes6BitSet *bits, const MatchScoreEvent *event);
s32 func_0036A9B0(struct Pes6BitSet *bits, const MatchScoreEvent *event);
s32 func_0036A230(struct Pes6BitSet *bits, const MatchScoreEvent *event);
s32 func_00369EF0(struct Pes6BitSet *bits, const MatchScoreEvent *event);

#endif

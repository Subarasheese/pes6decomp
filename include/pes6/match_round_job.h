#ifndef PES6_MATCH_ROUND_JOB_H
#define PES6_MATCH_ROUND_JOB_H

#include "pes6/match_job_message.h"

typedef struct {
    s32 count;
    u8 reserved04[4];
} TeamRoundCount;

typedef struct {
    u8 reserved00[0x13], side, reserved14, player, otherPlayer, reserved17;
    TeamRoundCount team[2];
    s32 mode;
    u32 mask;
} TeamRoundDetails;

typedef struct {
    u8 reserved00[0x40];
    s32 sideState;
    u8 reserved44[8];
    TeamRoundDetails *round;
} RoundDetailJob;

s32 func_0030ED20(s32 *role, u8 player);
s32 func_003139F0(struct Pes6BitSet *bits, s32 side);

#endif

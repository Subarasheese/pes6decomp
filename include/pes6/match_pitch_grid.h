#ifndef PES6_MATCH_PITCH_GRID_H
#define PES6_MATCH_PITCH_GRID_H

#include "pes6/match_stats.h"

enum { PITCH_COLUMNS = 8, PITCH_ROWS = 6, PITCH_CELLS = PITCH_COLUMNS * PITCH_ROWS };
typedef struct {
    f32 cells[PITCH_COLUMNS][PITCH_ROWS];
} FloatPitch;
typedef struct {
    u8 cells[PITCH_COLUMNS][PITCH_ROWS];
} BytePitch;
typedef struct {
    u8 pairs[PITCH_COLUMNS][PITCH_ROWS / 2];
} PackedPitch;

enum { PITCH_PLAYERS = 18, PITCH_SIDES = 2, PITCH_ON_FIELD = 11, PITCH_VIEW_KINDS = 5 };
typedef struct {
    u32 kind;
    void *field;
} PitchView;
typedef struct {
    u8 first[PITCH_CELLS], second[PITCH_CELLS];
} MatchPitchPair;
typedef struct {
    MatchPitchPair player[PITCH_ON_FIELD];
    u8 reserved[0xd80 - PITCH_ON_FIELD * sizeof(MatchPitchPair)];
} MatchPitchSide;
typedef struct {
    u32 sideTotals[PITCH_SIDES];
    s32 counts[PITCH_SIDES][PITCH_PLAYERS];
    u8 assignment[PITCH_SIDES][PITCH_PLAYERS];
    MatchPitchSide sides[PITCH_SIDES];
    u8 reserved1BBC[8];
} MatchPitchContext;
typedef char check_match_pitch_context_size[sizeof(MatchPitchContext) == 0x1bc4 ? 1 : -1];
extern MatchPitchContext D_00CBDED0;

static inline s32 pitchColumn(f32 x) {
    s32 cell = (s32)(((x + 13465.f) / 26930.f) * (f32)PITCH_COLUMNS);
    cell = cell > 0 ? cell : 0;
    cell = cell < PITCH_COLUMNS - 1 ? cell : PITCH_COLUMNS - 1;
    return cell;
}

static inline s32 pitchRow(f32 z) {
    s32 cell = (s32)(((z + 8729.f) / 17458.f) * (f32)PITCH_ROWS);
    cell = cell > 0 ? cell : 0;
    cell = cell < PITCH_ROWS - 1 ? cell : PITCH_ROWS - 1;
    return cell;
}

#endif

#ifndef PES6_ENTRY_SCORE_H
#define PES6_ENTRY_SCORE_H

#include "pes6/entry_page.h"

typedef struct {
    s16 first, second;
    u32 level;
    u8 reserved08[8];
} EntryScoreRow;

/* The score display uses four consecutive 16-byte rows in the active entry page. */
typedef struct {
    u8 reserved00[0x12c];
    EntryScoreRow rows[4];
} EntryScoreTable;

extern char D_0092E9C8[], D_0092E9D0[];
extern s32 sprintf(char *, const char *, ...);

static inline const EntryScoreRow *entry_score_row(s32 row) {
    const EntryScoreTable *table = (const EntryScoreTable *)D_003EA5D0[D_003EA5CC];
    return &table->rows[row];
}

static inline char *entry_score_total(s32 value, char *out) {
    value = value < 1000 ? value : 999;
    sprintf(out, D_0092E9C8, value);
    return out;
}

static inline char *entry_score_difference(s32 row, char *out) {
    const EntryScoreRow *score = entry_score_row(row);
    s32 value = score->first - score->second;
    if (value > 999)
        value = 999;
    else if (value <= -1000)
        value = -999;
    sprintf(out, D_0092E9C8, value);
    return out;
}

static inline char *entry_score_level(s32 row, char *out) {
    u32 value = entry_score_row(row)->level;
    value = value < 5 ? value : 4;
    sprintf(out, D_0092E9D0, value);
    return out;
}

#endif

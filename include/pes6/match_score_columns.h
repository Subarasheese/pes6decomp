#ifndef PES6_MATCH_SCORE_COLUMNS_H
#define PES6_MATCH_SCORE_COLUMNS_H

#include "types.h"
enum { SCORE_COLUMNS = 10 };
typedef struct {
    u8 value[2][SCORE_COLUMNS];
    u8 cursor[2];
} MatchScoreColumns;

#endif

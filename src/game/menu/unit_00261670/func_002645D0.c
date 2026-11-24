/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_columns.h"

void func_002645D0(MatchScoreColumns *score, u8 value, u8 side) {
    u8 i;
    score->value[side][score->cursor[side]] = value;
    for (i = score->cursor[side] + 1; i < SCORE_COLUMNS; i++)
        score->value[side][i] = 0;
}

/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_columns.h"

void func_00264790(MatchScoreColumns *score, u8 value) {
    u8 i;
    score->value[0][score->cursor[0]] = value;
    for (i = score->cursor[0] + 1; i < SCORE_COLUMNS; i++)
        score->value[0][i] = 0;
}

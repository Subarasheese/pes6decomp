/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009F63C0(s32 index) {
    LobbyRankingRow *row = lobby_ranking_row(index);
    s32 value;
    if (!row)
        return -1;
    value = row->goalsFor - row->goalsAgainst;
    if (value >= 1000)
        return -1;
    if (value < -999)
        return -1;
    return value;
}

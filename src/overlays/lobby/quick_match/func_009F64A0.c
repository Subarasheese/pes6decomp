/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009F64A0(s32 index) {
    LobbyRankingRow *row = lobby_ranking_row(index);
    s32 value;
    if (!row)
        return -1;
    value = row->wins * 3 + row->draws;
    if (value < 0)
        return -1;
    if (value >= 100)
        return -1;
    return value;
}

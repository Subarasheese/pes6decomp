/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
u32 func_009F6830(s32 index) {
    LobbyRankingRow *row = lobby_ranking_row(index);
    s32 value;
    if (!row)
        return -1;
    value = row->wins + row->draws + row->losses;
    if (!(value >= 0 && value < 100))
        return -1;
    return value;
}

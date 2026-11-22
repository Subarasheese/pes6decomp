/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
u32 func_009F8D10(s32 index) {
    LobbyRatingRow *row = lobby_rating_row(index);
    s32 total;
    if (!row)
        return -1;
    total = row->wins + row->draws + row->losses;
    if (total <= 0)
        return 0;
    return (u32)row->wins * 1000 / (u32)total;
}

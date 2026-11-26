/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009F8BB0(s32 index) {
    LobbyRatingRow *row = lobby_rating_row(index);
    if (row)
        goto valid;
    return -1;
valid:
    return row->rating;
}

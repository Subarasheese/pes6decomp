/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009F8630(s32 index) {
    LobbyOpponentResultRow *row = lobby_opponent_result_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->field04;
}

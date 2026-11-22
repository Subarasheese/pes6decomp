/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
u16 func_009F7970(s32 index) {
    LobbyResultRow *row = lobby_result_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->field12;
}

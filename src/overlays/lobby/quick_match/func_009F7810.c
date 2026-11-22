/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
char *func_009F7810(s32 index) {
    LobbyResultRow *row = lobby_result_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->secondName;
}

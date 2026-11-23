/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009F9EB0(s32 index) {
    LobbyListRow *row = lobby_list_row(index);
    if (row)
        goto valid;
    return -1;
valid:
    return row->field3C;
}

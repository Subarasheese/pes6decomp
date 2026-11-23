/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009FA0D0(s32 index) {
    LobbyListRow *row = lobby_list_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->field00;
}

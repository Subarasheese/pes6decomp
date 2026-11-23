/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A036B8[];
char *func_009F9D40(s32 index) {
    LobbyListRow *row = lobby_list_row(index);
    if (row)
        goto valid;
    return D_00A036B8;
valid:
    return row->text44;
}

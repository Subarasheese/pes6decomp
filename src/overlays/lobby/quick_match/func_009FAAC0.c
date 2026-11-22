/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A036C0[];
char *func_009FAAC0(s32 index) {
    LobbyFixtureRow *row = lobby_fixture_row(index);
    if (row)
        goto valid;
    return D_00A036C0;
valid:
    return row->homeName;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009FACE0(s32 index) {
    LobbyFixtureRow *row = lobby_fixture_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->field14;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009FAE40(s32 index) {
    LobbyFixtureRow *row = lobby_fixture_row(index);
    if (row)
        goto valid;
    return -1;
valid:
    return row->field0C;
}

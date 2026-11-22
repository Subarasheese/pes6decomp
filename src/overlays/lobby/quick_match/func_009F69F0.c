/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
static inline u16 read_property(LobbyRankingRow *row) {
    if (!row)
        return 0;
    return row->field0C;
}
u16 func_009F69F0(s32 index) { return read_property(lobby_ranking_row(index)); }

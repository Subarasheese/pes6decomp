/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A03678[];
static inline char *property(LobbyRankingRow *row) {
    if (!row)
        return D_00A03678;
    row->name[48] = 0;
    return row->name;
}
char *func_009F6B50(s32 index) { return property(lobby_ranking_row(index)); }

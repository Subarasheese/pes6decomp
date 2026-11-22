/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A03688[];
static inline char *property(LobbyOpponentResultRow *row) {
    if (!row)
        return D_00A03688;
    row->name[48] = 0;
    return row->name;
}
char *func_009F86E0(s32 index) { return property(lobby_opponent_result_row(index)); }

/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A03680[];
static inline char *property(LobbyResultRow *row) {
    if (!row)
        return D_00A03680;
    row->name[48] = 0;
    return row->name;
}
char *func_009F7CE0(s32 index) { return property(lobby_result_row(index)); }

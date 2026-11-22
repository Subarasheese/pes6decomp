/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A036B0[];
static inline char *property(LobbyRatingRow *row) {
    if (!row)
        return D_00A036B0;
    row->name[48] = 0;
    return row->name;
}
char *func_009F9480(s32 index) { return property(lobby_rating_row(index)); }

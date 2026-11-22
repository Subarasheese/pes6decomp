/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
typedef struct {
    s32 field[6];
} LobbyDate;
extern s32 func_00985AE0(LobbyDate *date, const char *text);
extern LobbyDate D_00A7E2B0[];
s32 func_009FA920(s32 index) {
    LobbyFixtureRow *row = lobby_fixture_row(index);
    if (row) {
        if (func_00985AE0(D_00A7E2B0, row->firstDate))
            return D_00A7E2B0->field[1];
    }
    return -1;
}

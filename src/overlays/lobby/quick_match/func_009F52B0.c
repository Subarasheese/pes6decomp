/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
u16 func_009F52B0(s32 index) {
    LobbySummaryRow *row = lobby_summary_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->field02;
}

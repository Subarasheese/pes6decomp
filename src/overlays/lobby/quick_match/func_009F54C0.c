/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
s32 func_009F54C0(s32 index) {
    LobbySummaryRow *row = lobby_summary_row(index);
    if (row)
        goto valid;
    return 0;
valid:
    return row->id;
}

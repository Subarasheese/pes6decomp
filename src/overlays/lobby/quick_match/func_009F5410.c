/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
static inline u16 property(LobbySummaryRow *row) {
    if (!row)
        return 0;
    return row->field00;
}
u16 func_009F5410(s32 index) { return property(lobby_summary_row(index)); }

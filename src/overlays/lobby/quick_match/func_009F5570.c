/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_ranking_pages.h"
extern char D_00A03670[];
static inline char *property(LobbySummaryRow *row) {
    if (!row)
        return D_00A03670;
    row->name[48] = 0;
    return row->name;
}
char *func_009F5570(s32 index) { return property(lobby_summary_row(index)); }

/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_report_rank.h"

extern u16 Pes6Team_ResolveSpecialId(u16 id);

RankRecord *func_00325730(RankState *state, s32 id) {
    RankRecord *row;
    RankSelection *list = &state->selection;
    s32 i;
    for (i = 0, row = list->records; i < list->count; ++i, ++row) {
        s32 team;
        switch (row->id) {
        case 0x126:
        case 0x127:
            team = (u16)Pes6Team_ResolveSpecialId(row->id);
            break;
        default:
            team = row->id;
            break;
        }
        if (team == id)
            return row;
    }
    return 0;
}

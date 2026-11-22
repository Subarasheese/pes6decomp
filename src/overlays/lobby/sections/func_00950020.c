/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"

s32 func_00950020(u32 index) {
    LobbyGroupRecord *row = lobby_group_at(index);
    if (row == 0)
        return 0;
    return row->fieldBA;
}

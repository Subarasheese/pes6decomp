/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"

s32 func_00950210(u32 index, s32 column) {
    LobbyGroupRecord *row = lobby_group_at(index);
    if (row == 0)
        return 65535;
    if (column < 0 || column >= 2)
        return 65535;
    return row->fieldAC[column];
}

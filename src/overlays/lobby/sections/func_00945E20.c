/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

s32 func_00945E20(s32 index, s8 value) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (row == 0)
        return 0;
    row->fields.field98 = value;
    return 1;
}

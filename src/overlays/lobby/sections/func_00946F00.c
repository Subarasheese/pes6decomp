/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

s32 func_00946F00(s32 index) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (row == 0)
        return 0;
    return *(u16 *)(row->bytes + 0x96);
}

/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

char *func_009470F0(s32 index) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (row == 0)
        return 0;
    if (*(s8 *)((char *)(row->bytes + 0x24)) == 0)
        return 0;
    return (char *)(row->bytes + 0x24);
}

/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

char *func_00946A40(s32 index) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (row == 0)
        return 0;
    if (*(s8 *)((char *)(row->bytes + 0x65)) == 0)
        return 0;
    return (char *)(row->bytes + 0x65);
}

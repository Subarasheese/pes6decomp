/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

char *func_00943820(s32 index) {
    LobbyChannelRecord *row = lobby_channel_at(index);
    if (row == 0)
        return 0;
    if (*(s8 *)((char *)(row->bytes + 0xc)) == 0)
        return 0;
    return (char *)(row->bytes + 0xc);
}

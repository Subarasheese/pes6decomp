/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

s32 func_009434A0(s32 index) {
    LobbyChannelRecord *row = lobby_channel_at(index);
    if (row == 0)
        return 65535;
    return row->fields.field42;
}

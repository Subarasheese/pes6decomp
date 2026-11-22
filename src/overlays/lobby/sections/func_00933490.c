/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

s32 func_00933490(s32 index) {
    LobbyPeerRecord *row = lobby_peer_selected(index);
    if (row == 0)
        return 0;
    return row->fields.field00;
}

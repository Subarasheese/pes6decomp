/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

char *func_009335D0(s32 index) {
    LobbyPeerRecord *row = lobby_peer_selected(index);
    if (row == 0)
        return 0;
    if (*(s8 *)((char *)(row->bytes + 0x50)) == 0)
        return 0;
    return (char *)(row->bytes + 0x50);
}

/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern char *D_003E7BC0;
static inline s8 peer_status(s32 index) {
    LobbyPeerRecord *row = lobby_peer_selected(index);
    if (row == 0) {
        return 9;
    } else {
        return *(const s8 *)(row->bytes + 0x49);
    }
}
char *func_00933990(s32 index) {
    LobbyPeerRecord *row = lobby_peer_at(index);
    if (!row)
        return 0;
    if (peer_status(index) == 8)
        return 0;
    if (row->bytes[0x94] == 0) {
        return D_003E7BC0;
    } else {
        return (char *)&row->bytes[0x94];
    }
}

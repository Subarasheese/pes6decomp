/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
static inline u8 record_status(s32 index) {
    LobbyPeerRecord *record = lobby_peer_selected(index);
    if (record == 0)
        return 0;
    return record->fields.field25;
}
char *func_00933720(s32 index) {
    LobbyPeerRecord *record = lobby_peer_at(index);
    if (record == 0)
        return 0;
    if (record->fields.fieldD6 == 0)
        return 0;
    if (record_status(index) == 255)
        return 0;
    return (char *)(record->bytes + 0xd6);
}

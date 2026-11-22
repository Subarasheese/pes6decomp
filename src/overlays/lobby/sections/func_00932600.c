/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
static inline u8 record_status(s32 index) {
    LobbyRoomRecord *record = lobby_room_selected(index);
    if (record == 0)
        return 0;
    return record->fields.field21;
}
char *func_00932600(s32 index) {
    LobbyRoomRecord *record = lobby_room_at(index);
    if (record == 0)
        return 0;
    if (record->fields.field10A == 0)
        return 0;
    if (record_status(index) == 255)
        return 0;
    return (char *)(record->bytes + 0x10a);
}

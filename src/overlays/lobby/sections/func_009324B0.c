/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

char *func_009324B0(s32 index) {
    LobbyRoomRecord *row = lobby_room_selected(index);
    if (row == 0)
        return 0;
    if (*(s8 *)((char *)(row->bytes + 0x84)) == 0)
        return 0;
    return (char *)(row->bytes + 0x84);
}

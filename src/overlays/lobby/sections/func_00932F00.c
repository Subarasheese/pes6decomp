/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern char *D_003E7BC0;
char *func_00932F00(s32 index) {
    LobbyRoomRecord *row = lobby_room_selected(index);
    if (!row)
        return 0;
    if (row->bytes[0x45] == 0) {
        return D_003E7BC0;
    } else {
        return (char *)&row->bytes[0x45];
    }
}

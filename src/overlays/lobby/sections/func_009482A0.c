/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

char *func_009482A0(s32 index) {
    LobbyContactRecord *row = lobby_contact_at(index);
    if (row == 0)
        return 0;
    if (*(s8 *)((char *)(row->bytes + 0x3b)) == 0)
        return 0;
    return (char *)(row->bytes + 0x3b);
}

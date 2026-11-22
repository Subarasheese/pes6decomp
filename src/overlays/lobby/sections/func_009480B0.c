/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

s32 func_009480B0(s32 index, s32 value) {
    LobbyContactRecord *row = lobby_contact_at(index);
    if (row == 0)
        return 0;
    row->fields.field00 = value;
    return 1;
}

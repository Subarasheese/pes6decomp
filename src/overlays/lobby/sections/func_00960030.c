/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
char *func_00960030(u16 index) {
    LobbyMemberRecord *row = lobby_reverse_member_at(index);
    if (row == 0)
        return 0;
    if (row->text60[0] == 0)
        return 0;
    else
        return (char *)row->text60;
}

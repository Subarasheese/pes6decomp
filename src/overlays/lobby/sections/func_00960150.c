/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
s32 func_00960150(u16 index) {
    LobbyMemberRecord *row = lobby_selected_reverse_member(index);
    if (!row)
        return 0;
    return row->field00;
}

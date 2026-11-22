/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"

s32 func_0095E410(u16 index) {
    LobbyMemberRecord *row = lobby_selected_member(index);
    if (row == 0)
        return 0;
    return row->field58;
}

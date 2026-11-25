/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
s8 func_0095F1E0(u16 index) {
    LobbyMemberRecord *row = lobby_selected_reverse_member(index);
    if (!row)
        return 3;
    return row->field5B;
}

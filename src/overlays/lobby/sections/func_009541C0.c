/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
s32 func_009541C0(s32 index) {
    LobbyEntryRecord *row = lobby_selected_entry(index);
    if (!row)
        return 0;
    return 100;
}

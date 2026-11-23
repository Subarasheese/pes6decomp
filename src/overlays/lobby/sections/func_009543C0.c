/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
LobbyEntryRecord *func_009543C0(s32 index) {
    LobbyEntryRecord *row = lobby_selected_entry(index);
    return row;
}

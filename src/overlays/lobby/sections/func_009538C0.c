/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"

extern s32 func_009537A0(s64 value);
s32 func_009538C0(s32 index) {
    LobbyEntryRecord *row = lobby_selected_entry(index);
    if (row == 0)
        return 0;
    return func_009537A0((s8)row->reserved00[0]);
}

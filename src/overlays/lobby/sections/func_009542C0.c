/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
u8 *func_009542C0(s32 index) {
    LobbyEntryRecord *row = lobby_entry_at(index);
    if (row == 0)
        return 0;
    if (row->text26[0] == 0)
        return 0;
    else
        return row->text26;
}

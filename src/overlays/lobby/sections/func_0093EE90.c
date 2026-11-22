/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"

char *func_0093EE90(s32 index) {
    LobbyUserRecord *row = lobby_user_at(index);
    if (row == 0)
        return 0;
    if (row->text4CF[0] == 0)
        return 0;
    return row->text4CF;
}

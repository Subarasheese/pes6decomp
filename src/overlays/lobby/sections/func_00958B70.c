/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_result_entries.h"
u16 func_00958B70(s8 index) {
    LobbyResultEntries *owner = (LobbyResultEntries *)func_0082C2A0();
    if (!owner)
        return 0;
    if (index < 0 || index >= 3)
        return 0;
    if (!func_0082C8A0(10))
        return 0;
    if (0 == owner->entries[index].id)
        return 0;
    return owner->entries[index].field3E;
}

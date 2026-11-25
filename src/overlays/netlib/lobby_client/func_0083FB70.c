/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_room_slot.h"
s32 func_0083FB70(const LobbyRoomSlot *first, const LobbyRoomSlot *second) {
    if (!first || !second)
        return 0;
    if (first->id != second->id)
        return 1;
    if (first->side != second->side)
        return 1;
    if (first->option09 != second->option09)
        return 1;
    return first->option0A != second->option0A;
}

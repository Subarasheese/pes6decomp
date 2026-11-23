#ifndef PES6_LOBBY_SLOT_QUERY_H
#define PES6_LOBBY_SLOT_QUERY_H

#include "pes6/lobby_competition_slots.h"

typedef s32 (*LobbySlotQuery)(CompetitionEntry *entry);

static inline s32 lobby_query_slot(const CompetitionSlots *group, s32 index, LobbySlotQuery query) {
    if (!group)
        return 0;
    if (index < 0 || index >= 3)
        return 0;
    return query(group->entries[index]);
}

#endif

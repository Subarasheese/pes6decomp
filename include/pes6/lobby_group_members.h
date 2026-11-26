#ifndef PES6_LOBBY_GROUP_MEMBERS_H
#define PES6_LOBBY_GROUP_MEMBERS_H

#include "pes6/lobby_groups.h"

static inline LobbyGroupMember *lobby_group_member_at(u32 index, s32 slot) {
    LobbyGroup *group = lobby_group_at(index);
    if (!group)
        return 0;
    if (slot < 0 || slot >= 8)
        return 0;
    return &group->members[slot];
}

static inline s32 lobby_group_member_id(u32 index, s32 slot) {
    LobbyGroupMember *member = lobby_group_member_at(index, slot);
    if (0 == member)
        return 0;
    return member->id;
}

static inline u32 lobby_group_total_count(void) {
    LobbyGroupList *list = lobby_group_list();
    if (0 == list)
        return 0;
    return list->totalCount;
}

static inline LobbyGroup *lobby_group_at_total(u32 index) {
    LobbyGroupList *list = lobby_group_list();
    if (!list)
        return 0;
    if (index >= 100)
        return 0;
    if (!(lobby_group_total_count() > index))
        return 0;
    return &list->groups[index];
}

#endif

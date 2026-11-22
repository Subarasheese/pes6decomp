#ifndef PES6_LOBBY_GROUPS_H
#define PES6_LOBBY_GROUPS_H
#include "types.h"
typedef struct {
    s32 id;
    u8 reserved04[2];
    s8 side, field07;
    u8 reserved08, field09, reserved0A[2];
} LobbyGroupMember;
typedef struct {
    s32 id;
    u8 reserved04[0x41];
    s8 mode;
    u8 reserved46[5], active;
    LobbyGroupMember members[8];
    u8 reservedAC[4];
    u8 flags[2][5];
    u8 reservedBA[2];
    char memberNames[8][49];
    s8 memberStates[8];
    u8 reserved24C[0x20];
    char name[0x84];
} LobbyGroup;
typedef struct {
    u32 count, totalCount;
    LobbyGroup groups[];
} LobbyGroupList;
extern u8 *func_00936B90(void);
static inline LobbyGroupList *lobby_group_list(void) {
    u8 *owner = func_00936B90();
    if (0 == (owner))
        return 0;
    return (LobbyGroupList *)(owner + 0x3884);
}
static inline u32 lobby_group_count(void) {
    LobbyGroupList *list = lobby_group_list();
    if (0 == (list))
        return 0;
    return list->count;
}
static inline LobbyGroup *lobby_group_at(u32 index) {
    LobbyGroupList *list = lobby_group_list();
    if (!list)
        return 0;
    if (index >= 100)
        return 0;
    if (!(lobby_group_count() > index))
        return 0;
    return &list->groups[index];
}
static inline LobbyGroupList *lobby_match_group_list(void) {
    u8 *owner = func_00936B90();
    if (0 == (owner))
        return 0;
    return (LobbyGroupList *)(owner + 0x15e4c);
}
static inline u32 lobby_match_group_count(void) {
    LobbyGroupList *list = lobby_match_group_list();
    if (0 == (list))
        return 0;
    return list->count;
}
static inline LobbyGroup *lobby_match_group_at(u32 index) {
    LobbyGroupList *list = lobby_match_group_list();
    if (!list)
        return 0;
    if (!(lobby_match_group_count() > index))
        return 0;
    return &list->groups[index];
}

#endif

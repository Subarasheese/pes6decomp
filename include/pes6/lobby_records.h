#ifndef PES6_LOBBY_RECORDS_H
#define PES6_LOBBY_RECORDS_H

#include "pes6/lobby_request.h"

extern u8 *func_00936B90(void);

typedef struct {
    s32 field00;
    s8 field04;
    u8 reserved05[0x29];
    char text2E[0x82];
    char textB0[0x402];
    s8 field4B2;
    s8 field4B3;
    u8 reserved4B4[0x1b];
    char text4CF[0x4];
    char text4D3[0x5];
} LobbyUserRecord;
typedef struct {
    s32 count;
    LobbyUserRecord records[];
} LobbyUserList;
static inline LobbyUserList *lobby_user_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    u8 *owner = func_00936B90();
    if (!owner)
        return 0;

    if (connection == 0)
        return 0;
    return (LobbyUserList *)(owner + 0x33258);
}
static inline LobbyUserRecord *lobby_user_at(s32 index) {
    LobbyUserList *list = lobby_user_list();
    if (!list)
        return 0;
    if (!(index >= 0 && index < 30 && list->count > index))
        return 0;
    return (LobbyUserRecord *)((u8 *)list + index * sizeof(LobbyUserRecord) + 4);
}

typedef struct {
    s32 field00;
    u8 reserved04[0xa8];
    u16 fieldAC[2];
    u8 reservedB0[0xa];
    s8 fieldBA;
    u8 reservedBB[0x235];
} LobbyGroupRecord;
typedef struct {
    u32 count;
    u8 gap[4];
    LobbyGroupRecord records[];
} LobbyGroupList;
static inline LobbyGroupList *lobby_group_list(void) {
    u8 *owner = func_00936B90();
    if (owner == 0)
        return 0;
    return (LobbyGroupList *)(owner + 0x15e4c);
}
static inline u32 lobby_group_count(void) {
    LobbyGroupList *list = lobby_group_list();
    if (list == 0)
        return 0;
    return list->count;
}
static inline LobbyGroupRecord *lobby_group_at(u32 index) {
    LobbyGroupList *list = lobby_group_list();
    if (!list)
        return 0;
    if (!(lobby_group_count() > index))
        return 0;
    return (LobbyGroupRecord *)((u8 *)list + index * sizeof(LobbyGroupRecord) + 8);
}

typedef struct {
    u8 reserved00[0x2];
    u16 field02;
    u8 reserved04[0x64];
} LobbyEntryRecord;
typedef struct {
    u16 count;
    LobbyEntryRecord records[];
} LobbyEntryList;
static inline LobbyEntryList *lobby_entry_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    u8 *owner = func_00936B90();
    if (!owner)
        return 0;

    if (connection == 0)
        return 0;
    return (LobbyEntryList *)(owner + 0xdc);
}
static inline u16 lobby_entry_count(void) {
    LobbyEntryList *list = lobby_entry_list();
    if (list == 0)
        return 0;
    return list->count;
}
static inline LobbyEntryRecord *lobby_entry_at(s32 index) {
    LobbyEntryList *list = lobby_entry_list();
    if (!list)
        return 0;
    if (!(index >= 0 && lobby_entry_count() > index))
        return 0;
    return (LobbyEntryRecord *)((u8 *)list + index * sizeof(LobbyEntryRecord) + 2);
}
static inline LobbyEntryRecord *lobby_selected_entry(s32 index) {
    LobbyEntryRecord *row = lobby_entry_at(index);
    if (row == 0)
        return 0;
    return row;
}

typedef struct {
    s32 field00;
    s32 field04, field08;
    u8 reserved0C[0x41];
    s8 status;
    s16 field4E;
    char marks[5];
    u8 reserved55[3];
    s16 field58;
    s8 field5A;
    s8 field5B;
    s8 field5C;
    u8 reserved5D[3];
    u8 text60[0x84];
} LobbyMemberRecord;
typedef struct {
    u16 count;
    u8 gap[2];
    LobbyMemberRecord records[];
} LobbyMemberList;
static inline LobbyMemberList *lobby_member_list(void) {
    u8 *owner = func_00936B90();
    if (owner == 0)
        return 0;
    return (LobbyMemberList *)(owner + 0x3dfd0);
}
static inline u16 lobby_member_count(void) {
    LobbyMemberList *list = lobby_member_list();
    if (list == 0)
        return 0;
    return list->count;
}
static inline LobbyMemberRecord *lobby_member_at(u16 index) {
    LobbyMemberList *list = lobby_member_list();
    if (!list)
        return 0;
    if (!(lobby_member_count() > index))
        return 0;
    return (LobbyMemberRecord *)((u8 *)list + index * sizeof(LobbyMemberRecord) + 4);
}
static inline LobbyMemberRecord *lobby_selected_member(u16 index) {
    LobbyMemberRecord *row = lobby_member_at(index);
    if (row == 0)
        return 0;
    return row;
}

static inline LobbyMemberRecord *lobby_reverse_member_at(u16 index) {
    LobbyMemberList *list = lobby_member_list();
    u16 count, reverse;
    if (!list)
        return 0;
    count = lobby_member_count();
    if (!(count > index))
        return 0;
    reverse = (u16)(count - index - 1);
    if (!(lobby_member_count() > reverse))
        return 0;
    return (LobbyMemberRecord *)((u8 *)list + reverse * sizeof(LobbyMemberRecord) + 4);
}
static inline LobbyMemberRecord *lobby_selected_reverse_member(u16 index) {
    LobbyMemberRecord *row = lobby_reverse_member_at(index);
    if (row == 0)
        return 0;
    return row;
}

static inline s32 lobby_member_value04(u16 index) {
    LobbyMemberRecord *row = lobby_selected_member(index);
    if (row == 0)
        return 0;
    else
        return row->field04;
}
static inline s32 lobby_member_value08(u16 index) {
    LobbyMemberRecord *row = lobby_selected_member(index);
    if (row == 0)
        return 0;
    else
        return row->field08;
}

static inline s32 lobby_reverse_member_value04(u16 index) {
    LobbyMemberRecord *row = lobby_selected_reverse_member(index);
    if (row == 0)
        return 0;
    else
        return row->field04;
}
static inline s32 lobby_reverse_member_value08(u16 index) {
    LobbyMemberRecord *row = lobby_selected_reverse_member(index);
    if (row == 0)
        return 0;
    else
        return row->field08;
}

typedef struct {
    u8 field00;
    u8 reserved01[0x1];
    u16 field02;
    u16 field04;
    u8 reserved06[0x6];
    s32 field0C;
    u8 details[0x31];
    u8 field41;
    u16 field42;
} LobbySlotRecord;
typedef struct {
    s32 count;
    u8 gap[8];
    LobbySlotRecord records[];
} LobbySlotList;
static inline LobbySlotList *lobby_slot_list(void) {
    u8 *owner = func_00936B90();
    if (owner == 0)
        return 0;
    return (LobbySlotList *)(owner + 0x3f6c0);
}
static inline LobbySlotRecord *lobby_slot_at(s32 index) {
    LobbySlotList *list = lobby_slot_list();
    if (!list)
        return 0;
    if (!(index >= 0 && index < 10))
        return 0;
    return (LobbySlotRecord *)((u8 *)list + index * sizeof(LobbySlotRecord) + 12);
}

#endif

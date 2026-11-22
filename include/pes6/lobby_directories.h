#ifndef PES6_LOBBY_DIRECTORIES_H
#define PES6_LOBBY_DIRECTORIES_H

#include "pes6/lobby_request.h"

extern u8 D_00A03A00[];
static inline u8 *lobby_storage(void) {
    if (func_0082C2A0() == 0)
        return 0;
    return D_00A03A00;
}

typedef union {
    u8 bytes[0x12c];
    struct {

        u8 reserved00[0x8];
        s32 field08;
        char field0C;
        u8 reserved0D[0x30];
        u8 field3D;
        u16 field3E;
        u8 field40;
        u8 reserved41[0x1];
        u16 field42;
        char field44;
        u8 reserved45[0x3];
        char field48;
        u8 reserved49[0xe3];
    } fields;
} LobbyChannelRecord;
typedef struct {
    LobbyChannelRecord records[20];
    s32 count;
} LobbyChannelList;
static inline LobbyChannelList *lobby_channel_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    if (connection == 0)
        return 0;
    return *(LobbyChannelList **)((u8 *)connection + 0x117e4);
}
static inline s32 lobby_channel_count(void) {
    LobbyChannelList *list = lobby_channel_list();
    s32 count;
    if (list == 0)
        return 0;
    count = list->count;
    if (count < 0)
        count = 0;
    else if (count >= 20)
        count = 20;
    return count;
}
static inline LobbyChannelRecord *lobby_channel_at(s32 index) {
    s32 count = lobby_channel_count();
    LobbyChannelList *list = lobby_channel_list();
    if (list == 0)
        return 0;
    if (!(index >= 0 && count > index))
        return 0;
    return &list->records[index];
}

typedef union {
    u8 bytes[0x1d0];
    struct {

        u8 reserved00[0x4];
        s32 field04;
        s32 field08;
        u8 reserved0C[0x8];
        s32 field14;
        u8 reserved18[0x4];
        char field1C;
        u8 reserved1D[0x7];
        char field24;
        u8 reserved25[0x3];
        s32 field28;
        u8 reserved2C[0xb];
        char field37;
        u8 reserved38[0x2d];
        char field65;
        u8 reserved66[0x32];
        s8 field98;
        char field99;
        u8 reserved9A[0x30];
        s8 fieldCA;
        s8 fieldCB;
        s8 fieldCC;
        char fieldCD;
        u8 reservedCE[0x102];
    } fields;
} LobbyListingRecord;
typedef struct {
    LobbyListingRecord records[100];
    s32 count;
} LobbyListingList;
static inline LobbyListingList *lobby_listing_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    if (connection == 0)
        return 0;
    return *(LobbyListingList **)((u8 *)connection + 0x117e8);
}
static inline s32 lobby_listing_count(void) {
    LobbyListingList *list = lobby_listing_list();
    s32 count;
    if (list == 0)
        return 0;
    count = list->count;
    if (count < 0)
        count = 0;
    else if (count > 100)
        count = 100;
    return count;
}
static inline LobbyListingRecord *lobby_listing_at(s32 index) {
    s32 count = lobby_listing_count();
    LobbyListingList *list = lobby_listing_list();
    if (list == 0)
        return 0;
    if (!(index >= 0 && count > index))
        return 0;
    return &list->records[index];
}

typedef union {
    u8 bytes[0x13c];
    struct {

        s32 field00;
        s32 field04;
        char field08;
        u8 reserved09[0x30];
        u8 field39;
        u8 field3A;
        char field3B;
        u8 reserved3C[0x100];
    } fields;
} LobbyContactRecord;
typedef struct {
    LobbyContactRecord records[100];
    s32 count;
} LobbyContactList;
static inline LobbyContactList *lobby_contact_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    if (connection == 0)
        return 0;
    return *(LobbyContactList **)((u8 *)connection + 0x139a4);
}
static inline s32 lobby_contact_count(void) {
    LobbyContactList *list = lobby_contact_list();
    s32 count;
    if (list == 0)
        return 0;
    count = list->count;
    if (count < 0)
        count = 0;
    else if (count > 100)
        count = 100;
    return count;
}
static inline LobbyContactRecord *lobby_contact_at(s32 index) {
    s32 count = lobby_contact_count();
    LobbyContactList *list = lobby_contact_list();
    if (list == 0)
        return 0;
    if (!(index >= 0 && count > index))
        return 0;
    return &list->records[index];
}

typedef union {
    u8 bytes[0x118];
    struct {

        s32 field00;
        u8 reserved04[0x21];
        u8 field25;
        u16 field26;
        u8 reserved28[0x23];
        s8 field4B;
        s32 field4C;
        char field50;
        u8 reserved51[0x85];
        u8 fieldD6;
        u8 reservedD7[0x41];
    } fields;
} LobbyPeerRecord;
typedef struct {
    s32 count;
    LobbyPeerRecord records[];
} LobbyPeerList;
static inline LobbyPeerList *lobby_peer_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    u8 *owner = lobby_storage();
    if (owner == 0)
        return 0;
    if (connection == 0)
        return 0;
    return (LobbyPeerList *)(owner + 0x28414);
}
static inline s32 lobby_peer_count(void) {
    LobbyPeerList *list = lobby_peer_list();
    if (list == 0)
        return -1;
    return list->count;
}
static inline LobbyPeerRecord *lobby_peer_at(s32 index) {
    LobbyPeerList *list = lobby_peer_list();
    if (list == 0)
        return 0;
    if (!(index >= 0 && lobby_peer_count() > index))
        return 0;
    return (LobbyPeerRecord *)((u8 *)list + index * sizeof(LobbyPeerRecord) + sizeof(list->count));
}
static inline LobbyPeerRecord *lobby_peer_selected(s32 index) {
    LobbyPeerRecord *row = lobby_peer_at(index);
    if (row == 0)
        return 0;
    return row;
}

typedef union {
    u8 bytes[0x14c];
    struct {

        u8 reserved00[0x21];
        u8 field21;
        u16 field22;
        u8 reserved24[0x54];
        s8 field78;
        u8 reserved79[0x3];
        s32 field7C;
        s32 field80;
        char field84;
        u8 reserved85[0x85];
        u8 field10A;
        u8 reserved10B[0x41];
    } fields;
} LobbyRoomRecord;
typedef struct {
    s32 count;
    LobbyRoomRecord records[];
} LobbyRoomList;
static inline LobbyRoomList *lobby_room_list(void) {
    LobbyChannel *connection = func_0082C2A0();
    u8 *owner = lobby_storage();
    if (owner == 0)
        return 0;
    if (connection == 0)
        return 0;
    return (LobbyRoomList *)(owner + 0x2f17c);
}
static inline s32 lobby_room_count(void) {
    LobbyRoomList *list = lobby_room_list();
    if (list == 0)
        return -1;
    return list->count;
}
static inline LobbyRoomRecord *lobby_room_at(s32 index) {
    LobbyRoomList *list = lobby_room_list();
    if (list == 0)
        return 0;
    if (!(index >= 0 && index < lobby_room_count() && index < 50))
        return 0;
    return (LobbyRoomRecord *)((u8 *)list + index * sizeof(LobbyRoomRecord) + sizeof(list->count));
}
static inline LobbyRoomRecord *lobby_room_selected(s32 index) {
    LobbyRoomRecord *row = lobby_room_at(index);
    if (row == 0)
        return 0;
    return row;
}

#endif

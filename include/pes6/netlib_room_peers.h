#ifndef PES6_NETLIB_ROOM_PEERS_H
#define PES6_NETLIB_ROOM_PEERS_H

#include "pes6/netlib_room.h"

typedef struct {
    s32 field00, field04;
    s16 field08, field0A;
    s32 field0C;
    s16 field10, field12, reserved14, field16;
    u8 reserved18[24];
} NetlibPeerData;

typedef struct {
    s32 id;
    s32 state;
    NetlibPeerData data;
} NetlibRoomPeer;

typedef struct {
    s32 id;
    s8 first, second;
    u8 reserved06[2];
} NetlibRoomPeerStatus;

typedef struct {
    NetlibRoomMember members[8];
    NetlibRoomPeer peers[8];
    NetlibRoomPeerStatus statuses[8];
} NetlibRoomPeers;

extern s32 func_00857B70(NetlibPeerData *data);

#endif

#ifndef PES6_NETLIB_PEER_REGISTRY_H
#define PES6_NETLIB_PEER_REGISTRY_H

#include "pes6/netlib_room_peers.h"

typedef struct {
    u8 reserved00[12];
    NetlibPeerData *data;
} PeerRegistration;
extern PeerRegistration D_008B20C0[10];
extern void *func_001C48E8(void *dst, s32 value, u32 size);
static inline s32 netlib_reset_registered_peer(NetlibPeerData *data) {
    s32 i;
    for (i = 0; i < 10; i++) {
        PeerRegistration *peer = &D_008B20C0[i];
        if (peer->data == data)
            func_001C48E8(peer, 0, sizeof(*peer));
    }
    data->field16 = 0;
    data->field12 = 0;
    data->field00 = 0;
    data->field08 = 0;
    data->field04 = 0;
    data->field0A = 0;
    data->field0C = 0;
    data->field10 = 0;
    return 0;
}

#endif

#ifndef PES6_NETLIB_SOCKET_TRANSPORT_H
#define PES6_NETLIB_SOCKET_TRANSPORT_H

#include "pes6/netlib_connection.h"
#include "pes6/netlib_socket.h"

typedef union {
    NetlibPacket packet;
    struct {
        s32 tag, length, sequence;
        u8 reserved0C[0x44c];
        s16 readState;
        u8 reserved45A[0x26];
    } wire;
} NetlibWirePacket;

extern s32 func_00874540(void *packet, s32 descriptor);
extern s32 func_00874700(void *packet, s32 descriptor);
extern s32 func_0085F2E0(NetlibPacket *packet, NetlibSocketChannel *channel);
extern s32 func_002DE2D0(s32 descriptor);

#endif

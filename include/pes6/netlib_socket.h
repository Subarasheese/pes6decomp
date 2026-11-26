#ifndef PES6_NETLIB_SOCKET_H
#define PES6_NETLIB_SOCKET_H

#include "types.h"

typedef struct {
    u16 family;
    u16 port;
    s32 address;
    u8 reserved08[8];
} NetlibSocketAddress;

typedef struct {
    s32 descriptor;
    NetlibSocketAddress peer;
    s32 state;
    s32 sequence;
    u8 reserved1C[8];
} NetlibSocketChannel;

typedef struct {
    u8 reserved00[4];
    s32 channel;
    u8 reserved08[0x22];
    u16 port;
    char address[0x14];
} NetlibServerEntry;

typedef struct {
    u8 reserved00[0x154];
    s32 state;
    u8 reserved158[0xe0];
    s32 count;
    NetlibServerEntry entries[];
} NetlibServerList;

extern s32 func_008663A0(const char *name, s32 port, NetlibSocketChannel *channel, s32 timeout);
extern s32 func_0085F3D0(NetlibSocketChannel *channel, u8 reason);
extern s32 func_0085F470(NetlibSocketChannel *channel);

#endif

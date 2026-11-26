#ifndef PES6_NETLIB_ROOM_SUMMARY_H
#define PES6_NETLIB_ROOM_SUMMARY_H
#include "pes6/netlib_packet.h"

typedef struct {
    s32 first, second;
    u8 data[64];
} NetlibRoomSummary;

extern s32 func_00869240(NetlibPacket *, NetlibRoomSummary *);
#endif

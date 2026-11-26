#ifndef PES6_NETLIB_ROOM_DATA_H
#define PES6_NETLIB_ROOM_DATA_H

#include "pes6/netlib_packet.h"

typedef struct {
    s32 value00, value04, id, value0C;
    u8 data[750];
} NetlibRoomData;

#endif

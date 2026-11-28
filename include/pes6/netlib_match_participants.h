#ifndef PES6_NETLIB_MATCH_PARTICIPANTS_H
#define PES6_NETLIB_MATCH_PARTICIPANTS_H

#include "pes6/netlib_match_sync.h"
#include "pes6/netlib_local_player.h"

typedef struct {
    s16 slot;
    u8 reserved02[6];
    s8 state;
    u8 reserved09[0x13];
} NetlibMatchPeer;

typedef struct {
    NetlibMatchPeer peers[8];
    s16 sides[2][4];
    u8 reservedF0[8];
    s8 sideCount[2];
} NetlibMatchParticipants;

extern NetlibMatchParticipants D_008B21C0;
extern s8 D_008B144E[];
extern s8 func_00858B60(NetlibMatchParticipants *, s32);

#endif

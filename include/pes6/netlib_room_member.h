#ifndef PES6_NETLIB_ROOM_MEMBER_H
#define PES6_NETLIB_ROOM_MEMBER_H

#include "pes6/netlib_room_peers.h"
#include "pes6/netlib_room_profiles.h"

typedef struct {
    s32 id;
    u8 data[32];
    char firstAddress[17];
    u8 firstFlag;
    u16 firstPort;
    char secondAddress[17];
    u8 secondFlag;
    u16 secondPort;
    char name[49];
    u8 field7D;
    s8 selection, field7F;
    s32 profileValue;
    char profileName[49];
    s8 profileStatus, fieldB6, fieldB7;
} NetlibRoomMemberDetails;

extern char *strncpy(char *, const char *, u32);
extern s32 func_008740E0(void *, u8 *);

#endif

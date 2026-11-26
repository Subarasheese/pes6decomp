#ifndef PES6_NETLIB_SESSION_MEMBERS_H
#define PES6_NETLIB_SESSION_MEMBERS_H

#include "pes6/netlib_packet.h"

typedef struct {
    char text[0x1c];
    u8 reserved1C[2], field1E, reserved1F;
    s16 field20, field22, field24;
    u8 reserved26[10];
} NetlibSessionMember;

typedef struct {
    s32 id, value04;
    s16 field08, field0A, field0C, field0E;
    u16 count;
    char name[65];
    s8 mode;
    s16 values[3];
    char secondName[49];
    u8 reserved8B;
    s16 field8C;
    NetlibSessionMember members[];
} NetlibSessionMembers;

#endif

#ifndef PES6_NETLIB_ROOM_H
#define PES6_NETLIB_ROOM_H

#include "pes6/netlib_packet.h"

typedef struct {
    s32 id;
    u8 reserved04[0x45];
    s8 value49;
    u8 reserved4A[0x35];
    s8 value7F;
    u8 reserved80[0x36];
    s8 fieldB6;
    u8 reservedB7;
} NetlibRoomMember;

typedef struct {
    s32 id;
    u8 reserved04[4];
    s8 side;
    u8 value09, value0A, value0B;
    u8 reserved0C[4];
} NetlibRoomSlot;

typedef struct {
    s32 received;
    s8 values[16];
} NetlibRoomOptions;

typedef struct {
    NetlibRoomMember members[8];
    u8 reserved5C0[0x200];
    NetlibRoomSlot slots[4];
    s32 slotCount;
    s32 field804;
    u8 reserved808[0x6c];
    NetlibRoomOptions options;
    s32 lastValue;
    s32 firstSelection, secondSelection;
    char name[0x41];
    s8 hasPassword;
    u8 reserved8D6[2];
    char password[0x11];
    u8 reserved8E9[2];
    s8 field8EB;
    u8 reserved8EC[0x12];
    u8 memberCount;
    s8 selectedOption;
} NetlibRoomState;

extern s32 func_0086A8E0(NetlibRoomState *state);
extern s32 func_008740E0(void *packet, u8 *value);

#endif

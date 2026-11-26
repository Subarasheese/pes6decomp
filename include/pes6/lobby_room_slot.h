#ifndef PES6_LOBBY_ROOM_SLOT_H
#define PES6_LOBBY_ROOM_SLOT_H

#include "types.h"

typedef struct {
    s32 id;
    u8 reserved04[4];
    s8 side;
    u8 option09, option0A, flag0B;
    u8 reserved0C[4];
} LobbyRoomSlot;

#endif

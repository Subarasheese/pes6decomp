#ifndef PES6_LOBBY_ACTIVE_ID_H
#define PES6_LOBBY_ACTIVE_ID_H

#include "pes6/lobby_request.h"

typedef struct {
    u8 reserved00[0x153b8];
    u8 status;
    u8 reserved153B9[3];
    s32 id;
} LobbyConnectionSelection;

extern s32 D_008AA110[];
extern u8 D_008AA10F[];

#endif

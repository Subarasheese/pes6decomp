#ifndef PES6_LOBBY_RESULT_ENTRIES_H
#define PES6_LOBBY_RESULT_ENTRIES_H

#include "pes6/lobby_request.h"

typedef struct {
    s32 id;
    u32 elapsedSeconds;
    s32 field08;
    char text[49];
    s8 slot;
    u16 field3E;
    u8 reserved40[0x21];
    s8 field61;
    u16 field62;
} LobbyResultEntry;

typedef struct {
    u8 reserved00[0x486c];
    LobbyResultEntry entries[3];
} LobbyResultEntries;

#endif

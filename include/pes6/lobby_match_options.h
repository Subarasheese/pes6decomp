#ifndef PES6_LOBBY_MATCH_OPTIONS_H
#define PES6_LOBBY_MATCH_OPTIONS_H

#include "types.h"
typedef struct {
    s8 slot[20];
} MatchOptions;
typedef struct {
    u8 reserved[0x874];
    MatchOptions options;
} LobbyRoom;
typedef struct {
    u8 reserved[0xf8a4];
    LobbyRoom room;
} LobbyService;
extern LobbyService *func_00D0BAF0(void);
static inline s32 lobbySetMatchOption(unsigned slot, s8 value) {
    LobbyService *service = func_00D0BAF0();
    LobbyRoom *room = service == 0 ? 0 : &service->room;
    MatchOptions *options = room == 0 ? 0 : &room->options;
    if (!options)
        return 0;
    options->slot[slot] = value;
    return 1;
}

#endif

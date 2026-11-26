#ifndef PES6_LOBBY_LOGIN_H
#define PES6_LOBBY_LOGIN_H

#include "pes6/lobby_request.h"

extern s32 func_00868000(LobbyChannel *connection, const char *name, const char *password,
                         const u8 *challenge, LobbyChannel *channel, const void *players,
                         s32 options, s32 mode);

#endif

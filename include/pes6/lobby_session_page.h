#ifndef PES6_LOBBY_SESSION_PAGE_H
#define PES6_LOBBY_SESSION_PAGE_H

#include "pes6/lobby_ranking_pages.h"

typedef struct {
    s32 type;
    u8 reserved04[0xc020];
    u8 page[];
} LobbySessionData;

extern s32 func_009F4B10(void);

static inline void *lobby_session_page(void *handle, s32 type) {
    LobbySessionData *session = handle;
    if (!session)
        return 0;
    if (!func_009F4B10())
        return 0;
    if (session->type != type)
        return 0;
    return session->page;
}

#endif

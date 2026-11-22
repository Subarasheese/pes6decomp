#ifndef PES6_LOBBY_EVENT_RESULT_H
#define PES6_LOBBY_EVENT_RESULT_H

#include "pes6/lobby_request.h"

extern LobbyChannel *func_00D0BAF0(void);

static inline void netlib_reset_reply(s32 event) {
    func_0082C840(event);
    func_0082C690(event, 0);
}

static inline s32 netlib_channel_result(s32 channel, s32 fallback) {
    if (func_00827450(channel) == 1)
        return 3;
    return fallback;
}

#endif

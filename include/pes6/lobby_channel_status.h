#ifndef PES6_LOBBY_CHANNEL_STATUS_H
#define PES6_LOBBY_CHANNEL_STATUS_H

#include "pes6/lobby_request.h"
extern LobbyChannel *D_008A4398[];
extern s8 D_008A43B0[];
extern s32 func_0082B290(s32 channel);

static inline s32 netlib_channel_unavailable(s32 channel) {
    s32 status = func_0082B290(channel);
    if (status == -150)
        return 1;
    if (D_008A4398[0] == 0)
        return 1;
    if (D_008A43B0[0] == 1)
        return 1;
    switch (status) {
    case -73:
        return 1;
    case -62:
        return 1;
    default:
        if (!func_00862110(D_008A4398[0], channel)) {
            return 1;
        }
        return 0;
    }
}

extern s32 func_00832280(void);

static inline s32 netlib_channel_five_status(s32 channel) {
    if (channel != 5)
        return 0;
    return func_00832280();
}

#endif

#ifndef PES6_NETLIB_LOCAL_PLAYER_H
#define PES6_NETLIB_LOCAL_PLAYER_H

#include "types.h"

typedef struct {
    s16 slot;
    u8 reserved02[0x22];
    u32 lastSequence;
} NetlibLocalPlayer;

extern NetlibLocalPlayer *func_008472D0(void);

#endif

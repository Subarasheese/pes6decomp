#ifndef PES6_LOBBY_ENDPOINTS_H
#define PES6_LOBBY_ENDPOINTS_H

#include "pes6/ipv4.h"

typedef struct {
    u8 reserved00[8];
    Pes6IPv4Address firstAddress;
    u16 firstPort;
    u8 reserved0E[2];
    Pes6IPv4Address secondAddress;
    u16 secondPort;
    u16 value16;
} LobbyEndpoints;

extern s32 *func_008580D0(void);
extern s32 func_00872610(void *channel, u8 mode, const char *first, u16 firstPort,
                         const char *second, u16 secondPort, u16 value);

#endif

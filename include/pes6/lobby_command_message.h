#ifndef PES6_LOBBY_COMMAND_MESSAGE_H
#define PES6_LOBBY_COMMAND_MESSAGE_H
#include "pes6/lobby_channel_status.h"

typedef struct {
    s32 tag;
    s32 length;
    s32 words[16];
} LobbyMessage;
typedef struct {
    u8 reserved[0x49E8];
    s32 requestValue;
} LobbyHost;
extern void *func_001C48E8(void *, s32, u32);
extern s32 func_00825640(s32 channel, LobbyMessage *message);
#endif

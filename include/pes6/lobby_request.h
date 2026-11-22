#ifndef PES6_LOBBY_REQUEST_H
#define PES6_LOBBY_REQUEST_H

#include "types.h"

typedef struct {
    u8 bytes[0x24];
} LobbyChannel;

extern LobbyChannel *func_0082C2A0(void);
extern s32 func_0082B4C0(s32 channel);
extern s32 func_0082CA10(s32 request);
extern s32 func_0082C8A0(s32 event);
extern s32 func_0082C7C0(s32 event);
extern s32 func_0082C5B0(s32 event);
extern s32 func_00827450(s32 channel);
extern void func_0082CA50(s32 request, s32 state);
extern void func_0082C980(s32 request);
extern void func_0082C920(s32 request);
extern void func_0082C840(s32 event);
extern void func_0082C6D0(s32 event);
extern void func_0082C690(s32 event, s32 value);
extern s32 func_00862110(LobbyChannel *connection, s32 channel);

#endif

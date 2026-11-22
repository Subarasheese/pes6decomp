#ifndef PES6_LOBBY_NOTICE_H
#define PES6_LOBBY_NOTICE_H

#include "types.h"
extern char D_008A4FD0[1024];
extern const char *func_001F08B0(s32 id);
extern void *func_001C48E8(void *dst, int value, u32 size);
extern int sprintf(char *dst, const char *format, ...);
extern int func_00826010(const char *message, s32 channel);
static inline s32 sendLobbyNotice(const signed char *name, s32 id, s32 channel) {
    if (!name)
        return 0;
    if (!*name)
        return 0;
    if (!func_001F08B0(id))
        return 0;
    func_001C48E8(D_008A4FD0, 0, sizeof(D_008A4FD0));
    sprintf(D_008A4FD0, func_001F08B0(id), name);
    func_00826010(D_008A4FD0, channel);
    return 1;
}

#endif

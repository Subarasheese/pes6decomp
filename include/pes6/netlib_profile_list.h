#ifndef PES6_NETLIB_PROFILE_LIST_H
#define PES6_NETLIB_PROFILE_LIST_H

#include "pes6/lobby_profile.h"
#include "pes6/netlib_packet.h"

typedef struct {
    LobbyProfile profiles[30];
    s32 count;
} NetlibProfileList;

typedef struct {
    u8 reserved00[0x45];
    u8 count;
} NetlibProfileCounter;

extern s32 func_00877690(NetlibProfileCounter *counter, NetlibProfileList *list);
extern s32 func_00877740(const void *left, const void *right);
extern void func_001C6158(void *rows, u32 count, u32 size,
                          s32 (*compare)(const void *left, const void *right));

static inline void netlib_sort_profiles(NetlibProfileCounter *counter, NetlibProfileList *list) {
    func_001C6158(list, 30, sizeof(LobbyProfile), func_00877740);
    func_00877690(counter, list);
}

#endif

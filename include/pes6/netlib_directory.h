#ifndef PES6_NETLIB_DIRECTORY_H
#define PES6_NETLIB_DIRECTORY_H

#include "pes6/lobby_channel_status.h"

typedef struct {
    u8 reserved00[8];
    char name[0x35];
    u8 reserved3D;
    s16 id;
} NetlibDirectoryEntry;

typedef struct {
    s32 count;
    NetlibDirectoryEntry entries[200];
} NetlibDirectory;

typedef struct {
    u8 reserved00[0x81];
    u8 id;
    u8 reserved82;
} NetlibDirectoryGroup;

typedef struct {
    u8 reserved00[0x238];
    NetlibDirectory directory;
    NetlibDirectoryGroup groups[7];
} NetlibDirectoryOwner;

typedef struct {
    u8 reserved00[0x1B8];
    s32 groupCounts[9];
    s32 groupBases[9];
    s32 slots[200];
    u8 reserved520[0x3224];
    s32 identifiers[100];
} NetlibDirectoryIndex;

extern s16 D_008A5F70[];
extern s32 D_008A6128[9], D_008A614C[9], D_008A6170[200];
NetlibDirectoryEntry *func_0082AE20(s32 group, s32 index);

static inline NetlibDirectoryIndex *netlib_directory_index(void) {
    return (NetlibDirectoryIndex *)D_008A5F70;
}

static inline NetlibDirectory *netlib_directory(void) {
    NetlibDirectoryOwner *owner = (NetlibDirectoryOwner *)D_008A4398[0];
    if (owner == 0)
        return 0;
    return &owner->directory;
}

static inline s32 netlib_directory_count(void) {
    NetlibDirectory *list = netlib_directory();
    if (list == 0)
        return 0;
    return list->count;
}

#endif

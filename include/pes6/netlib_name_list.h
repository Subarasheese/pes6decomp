#ifndef PES6_NETLIB_NAME_LIST_H
#define PES6_NETLIB_NAME_LIST_H

#include "pes6/netlib_packet.h"

typedef struct {
    s32 id;
    u8 kind;
    char name[49];
    u8 reserved36[2];
} NetlibNameEntry;

typedef struct {
    s32 firstCount;
    s32 secondCount;
    s32 count;
    NetlibNameEntry entries[70];
} NetlibNameList;

extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_008740E0(void *packet, u8 *value);

static inline void netlib_read_entry_name(NetlibPacket *packet, NetlibNameEntry *entry) {
    func_001C48E8(entry->name, 0, sizeof(entry->name));
    func_00873EE0(packet, entry->name, sizeof(entry->name) - 1);
}

static inline void netlib_count_name(NetlibNameList *list, u8 kind) {
    if (!kind)
        list->firstCount++;
    else
        list->secondCount++;
}

static inline void netlib_clear_name(NetlibNameEntry *entry) {
    func_001C48E8(entry->name, 0, sizeof(entry->name));
    entry->kind = 0;
    entry->id = 0;
}
#endif

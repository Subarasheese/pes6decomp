#ifndef PES6_NETLIB_GROUP_LIST_H
#define PES6_NETLIB_GROUP_LIST_H

#include "pes6/netlib_packet.h"

typedef struct {
    s32 id;
    u8 field04, field05;
    s8 side, field07;
    u8 field08, field09, reserved0A[2];
} NetlibGroupSlot;

typedef struct {
    s32 id;
    char name[65];
    s8 field45, field46, field47, field48, field49, field4A, field4B;
    NetlibGroupSlot slots[8];
    s16 values[2];
    u8 flags[2][5];
    s8 fieldBA, fieldBB;
} NetlibGroupEntry;

typedef struct {
    s32 count;
    NetlibGroupEntry groups[100];
} NetlibGroupList;

extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *dest, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_008740E0(void *packet, u8 *value);
extern s32 func_0086A860(const void *left, const void *right);
extern void func_001C6158(void *base, u32 count, u32 size,
                          s32 (*compare)(const void *left, const void *right));
extern void *func_001C48E8(void *dst, s32 c, u32 size);
extern void *func_001C4730(void *dst, const void *src, u32 size);

static inline void netlib_clear_group_slot(NetlibGroupSlot *slot) {
    slot->field04 = 0;
    slot->field05 = 0;
    slot->side = -1;
    slot->field07 = 0;
    slot->field08 = 0xff;
    slot->field09 = 0xff;
}

#endif

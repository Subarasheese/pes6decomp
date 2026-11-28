#ifndef PES6_NETLIB_MATCH_BROADCAST_H
#define PES6_NETLIB_MATCH_BROADCAST_H

#include "pes6/overlay_module.h"
#include "pes6/netlib_local_player.h"

typedef struct {
    u16 tag, reserved02;
    u32 sequence;
} NetlibMatchBroadcast;

extern s32 func_002DCA50(void);
extern s32 func_001FC7D0(s32 region);
extern s32 Pes6MemRegion_IsResident(s32 region);
extern void func_00859A80(s16 slot, u16 tag, s32 channel, void *data, s32 size);
extern s8 D_008B142D[];

#endif

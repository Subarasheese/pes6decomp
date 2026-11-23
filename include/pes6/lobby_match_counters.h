#ifndef PES6_LOBBY_MATCH_COUNTERS_H
#define PES6_LOBBY_MATCH_COUNTERS_H
#include "pes6/lobby_event_result.h"

typedef struct {
    u8 reserved00[0x22c];
    s32 localSlot;
    s32 activeSlot;
} LobbyCounterOwner;
extern LobbyCounterOwner D_008A5CB0;
extern s16 D_008A5F70[], D_008A5F72[];

static inline LobbyCounterOwner *netlib_counter_owner(void) {
    if (func_00D0BAF0() == 0) {
        return 0;
    }
    return &D_008A5CB0;
}
static inline s32 netlib_local_slot_active(void) {
    LobbyCounterOwner *owner = netlib_counter_owner();
    s32 index;
    if (!owner)
        return 0;
    index = owner->activeSlot;
    if (!(index >= 0 && index < 4))
        return 0;
    if (index == owner->localSlot)
        return 1;
    return 0;
}
static inline s8 netlib_controls_counters(void) {
    if (!func_00D0BAF0())
        return 0;
    if (netlib_local_slot_active() == 1)
        return 1;
    return 0;
}

#endif

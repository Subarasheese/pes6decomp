#ifndef PES6_MATCH_SLOT_ACCESS_H
#define PES6_MATCH_SLOT_ACCESS_H

#include "pes6/partial_005a2330.h"

static inline s32 slotMode(void) {
    PartialState005A2330 *state = &D_005A2330;
    if (!(state == 0))
        return state->header;
    return 0;
}

static inline MatchSideSlots *sideSlots(s32 side) {
    if (slotMode() != 1)
        return 0;
    if (side < 0 || side >= 2)
        return 0;
    return &D_005A2330.slots.teams[side];
}

static inline MatchSharedSlots *sharedSlots(void) {
    if (slotMode() == 2)
        return &D_005A2330.slots.shared;
    return 0;
}

static inline MatchSlotEntry *matchSlot(s32 side, s32 slot) {
    MatchSideSlots *team = sideSlots(side);
    if (team) {
        if (slot < 7)
            return &team->entries[slot];
        return 0;
    }
    if (slot == 0) {
        MatchSharedSlots *shared = sharedSlots();
        if (shared)
            return &shared->entries[side];
    }
    return 0;
}

static inline u8 slotKind(s32 side, s32 slot) {
    MatchSlotEntry *entry = matchSlot(side, slot);
    if (!(entry == 0))
        return entry->kind;
    return 0;
}

static inline s32 sharedEnabled(void) {
    MatchSharedSlots *s = sharedSlots();
    if (!(s == 0))
        return s->enabled;
    return 0;
}

static inline s32 sharedValuesEnabled(void) {
    if (!sharedEnabled())
        return 0;
    return sharedSlots()->field01;
}

/* Some callers check the shared layout first. */
static inline MatchSlotEntry *findMatchSlot(s32 side, s32 slot) {
    MatchSideSlots *team = sideSlots(side);
    if (!team) {
        if (slot == 0) {
            MatchSharedSlots *shared = sharedSlots();
            if (shared)
                return &shared->entries[side];
        }
        return 0;
    }
    if (slot < 7)
        return &team->entries[slot];
    return 0;
}

#endif
